#include "fractal.h"
#include <QPointF>
#include <QtMath>
#include <QTransform>

#include "../component/component.h"
#include "../component/composite.h"
#include "../component/line.h"

#include <QDebug>

/*============================================*/
//  SINGLETON
/*============================================*/

Fractal *Fractal::f = 0;

Fractal &Fractal::getInstance()
{
    if(f == 0)
    {
        f = new Fractal;
    }
    return *f;
}

Fractal::Fractal()
{
    _nbSide = 1;
    _sideSize = 0;
    _triangleBase = 0;
    _triangleHeight = 0;
    _nbIteration = 0;
}

Fractal::~Fractal()
{

}

/*============================================*/
//  ALGORITHM
/*============================================*/

/**
 * @brief Calculate and return the fractal.
 * The comlexity is in O(!nbSide)
 */
Component* Fractal::getFractal()
{
    //Create base polygon
    QList<QPointF> points = firstPolygonVertex(_sideSize, _nbSide);
    Composite *newFractal = createPolygone(points);

    //Iterate on the polygon and create fractal
    for (unsigned int i = 0; i < _nbIteration; ++i) {
        createFractal(newFractal);
    }
    return newFractal;
}

/**
 * @brief Create fractal recursivly
 */
void Fractal::createFractal(Component* polygone)
{
    /*
     * Quit if the componenet is a line, because we have to be
     * a level over the line to cut its in peces
     */
    Composite *polygoneCast = dynamic_cast<Composite *>(polygone);
    if(polygoneCast == 0) return;

    /*
     * If not a line iterate on the children and replace the line
     * by a composit of cutted lines
     */
    QList<Component *> *children = polygoneCast->getChildren();
    QMutableListIterator<Component *> i(*children);

    while (i.hasNext())
    {
        Component *component = i.next();
        Line *line = dynamic_cast<Line *>(component);
        Composite *composite = dynamic_cast<Composite *>(component);

        if(line != 0)
        {
            //Get the data of child line and delete its
            QPointF p1 = line->p1();
            QPointF p2 = line->p2();
            delete line;

            //Calculate the transformation matrix
            double angle = (p2.y()-p1.y())/(p2.x()-p1.x());
            double distance = sqrt(pow(p2.y()-p1.y(),2)+pow(p2.x()-p1.x(),2));
            QTransform mt;
            mt.translate(p1.x(),p1.y());
            mt.scale(distance/_sideSize, distance/_sideSize);
            mt.rotate(atan(angle)* 180 / M_PI);
            if(p2.x()<p1.x())mt.rotate(180);

            //Create the fractal pattern with the given data
            Composite *newComp = new Composite();

            Line *l1 = new Line();
            QPointF p1l1 = mt.map(QPointF(0,0));
            QPointF p2l1 = mt.map(QPointF((_sideSize-_triangleBase)/2,0));
            l1->setP1(p1l1);
            l1->setP2(p2l1);
            newComp->add(l1);

            Line *l2 = new Line();
            QPointF p1l2 = mt.map(QPointF((_sideSize-_triangleBase)/2,0));
            QPointF p2l2 = mt.map(QPointF(_sideSize/2,_triangleHeight));
            l2->setP1(p1l2);
            l2->setP2(p2l2);
            newComp->add(l2);

            Line *l3 = new Line();
            QPointF p1l3 = mt.map(QPointF(_sideSize/2,_triangleHeight));
            QPointF p2l3 = mt.map(QPointF(_triangleBase+((_sideSize-_triangleBase)/2),0));
            l3->setP1(p1l3);
            l3->setP2(p2l3);
            newComp->add(l3);

            Line *l4 = new Line();
            QPointF p1l4 = mt.map(QPointF(_triangleBase+((_sideSize-_triangleBase)/2),0));
            QPointF p2l4 = mt.map(QPointF(_sideSize,0));
            l4->setP1(p1l4);
            l4->setP2(p2l4);
            newComp->add(l4);

            //Replace the line by the set of cutted line
            i.setValue(newComp);
            emit increaseByOneStep();
        }
        else if(composite != 0)
        {
            createFractal(composite);
        }
    }
}

/*============================================*/
//  GET / SET
/*============================================*/

void Fractal::setNbSide(int nbSide)
{
    _nbSide = nbSide;
}

void Fractal::setNbIteration(int nbIteration)
{
    _nbIteration = nbIteration;
}

void Fractal::setSideSize(double sideSize)
{
    _sideSize = sideSize;
}

void Fractal::setTriangleBase(double triangleBase)
{
    _triangleBase = triangleBase;
}

void Fractal::setTriangleHeight(double triangleHeight)
{
    _triangleHeight = triangleHeight;
}

int Fractal::nbSize() const
{
    return _sideSize;
}

int Fractal::nbIteration() const
{
    return _nbIteration;
}

double Fractal::sideSize() const
{
    return _nbSide;
}

double Fractal::triangleBase() const
{
    return _triangleBase;
}

double Fractal::triangleHeight() const
{
    return _triangleHeight;
}

unsigned int Fractal::getMaxIterationStep() const
{
    /*
     * This site was helpfull https://oeis.org/A002450
     * for calculate the maximum iteration. The calcule
     * was found after analyse the sequence given by
     * the program
     */
    return (pow(4,_nbIteration))/3 * _nbSide -1;
}

/*============================================*/
//  PRIVATE
/*============================================*/

/**
 * @brief Reentrante methode to calculate vertexs position of
 * a polygon (center on 0), with the wanted side
 * length and the number of side
 */
QList<QPointF> Fractal::firstPolygonVertex(int sideSize, int nbSide)
{
    /*
     * To calculate the radius, we use the folowing link
     * http://www.mathopenref.com/polygonradius.html
     */
    double radius = sideSize / (2*qSin(M_PI / nbSide));
    double stepAngle = (2*M_PI) / nbSide;
    double angle = 0;

    QList<QPointF> points;
    for(int i=0; i<nbSide; ++i)
    {
        QPointF point(qCos(angle), qSin(angle));
        point *= radius;
        angle += stepAngle;

        points.append(point);
    }

    return points;
}

/**
 * @brief Create the first polygon for iterate and create
 * fractal. The result is a composite which contains the side
 * of the polygon
 */
Composite *Fractal::createPolygone(QList<QPointF> &points)
{
    Composite* newPolygone = new Composite;

    QList<QPointF>::const_iterator i = points.constBegin();
    QPointF p1 = *i;
    QPointF p2;
    QPointF pLast = p1;

    ++i;
    while(i != points.constEnd())
    {
        p2 = *i;

        Line *line = new Line();
        line->setP1(p1);
        line->setP2(p2);

        ++i;
        p1 = p2;

        newPolygone->add(line);
    }
    Line *line = new Line();
    line->setP1(p2);
    line->setP2(pLast);
    newPolygone->add(line);

    return newPolygone;
}

/**
 * @brief Simple iterative fractal calculation
 */
unsigned int Fractal::factorial(unsigned int n) const
{
    unsigned int ret = 1;
    for(unsigned int i = 1; i <= n; ++i)
        ret *= i;
    return ret;
}
