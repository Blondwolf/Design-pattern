#include "fractal.h"
#include "QPointF"
#include <QDebug>
#include <QTransform>

Fractal::Fractal(int nbCotePolygone, double lgArretePolygone, double lgBaseTriangle, double htTriangle, int nbIteration)
{
    //Forme de base
    this->nbCotePolygone = nbCotePolygone;
    this->lgArretePolygone = lgArretePolygone;

    //Triangle de pattern
    this->lgBaseTriangle = lgBaseTriangle;
    this->htTriangle = htTriangle;

    //Degré de fractalisation
    this->nbIteration = nbIteration;
}

Fractal::~Fractal()
{

}

void Fractal::run()
{
    //Creation de la forme à partir des attributs
    QList<QPointF> points = createPoints();
    newFractal = createPolygone(points);

    for (int i = 0; i < nbIteration; ++i) {
        createFractal(newFractal);
    }
}

Component* Fractal::getComponent()
{
    return newFractal;
}

QList<QPointF> Fractal::createPoints()
{
    QList<QPointF> points;
    double rayon = lgArretePolygone / (2*qSin(M_PI / nbCotePolygone)); //rayon = longCote / (2*sin(180/n))
    double spanAngle = (2*M_PI) / nbCotePolygone;
    double angle = 0;

    for(int i=0; i<nbCotePolygone; ++i)
    {
        QPointF point(qCos(angle), qSin(angle));  //creation des points a partir de l'angle
        point *= rayon;                           //scaling
        angle += spanAngle;

        points.append(point);
    }

    return points;
}

Composite *Fractal::createPolygone(QList<QPointF> &points)
{
    //Creation de la forme de base
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

void Fractal::createFractal(Component* polygone)
{
    Composite *polygoneCast = dynamic_cast<Composite *>(polygone);

    if(polygoneCast == 0) return;

    QList<Component *> *children = polygoneCast->getChildren();
    QMutableListIterator<Component *> i(*children);

    while (i.hasNext())
    {
        //Recuperation
        Component *component = i.next();
        Line *line = dynamic_cast<Line *>(component);
        Composite *composite = dynamic_cast<Composite *>(component);

        //If it's a line
        if(line != 0)
        {
            QPointF p1 = line->p1();
            QPointF p2 = line->p2();
            delete line;

            //Calculate the transformation
            double angle = (p2.y()-p1.y())/(p2.x()-p1.x());
            double distance = sqrt(pow(p2.y()-p1.y(),2)+pow(p2.x()-p1.x(),2));
            QTransform mt;
            mt.translate(p1.x(),p1.y());
            mt.scale(distance/lgArretePolygone, distance/lgArretePolygone);
            mt.rotate(atan(angle)* 180 / M_PI);
            if(p2.x()<p1.x())mt.rotate(180);

            //Fractalize the line
            Composite *newComp = new Composite();

            Line *l1 = new Line();
            QPointF p1l1 = mt.map(QPointF(0,0));
            QPointF p2l1 = mt.map(QPointF((lgArretePolygone-lgBaseTriangle)/2,0));
            l1->setP1(p1l1);
            l1->setP2(p2l1);
            newComp->add(l1);

            Line *l2 = new Line();
            QPointF p1l2 = mt.map(QPointF((lgArretePolygone-lgBaseTriangle)/2,0));
            QPointF p2l2 = mt.map(QPointF(lgArretePolygone/2,htTriangle));
            l2->setP1(p1l2);
            l2->setP2(p2l2);
            newComp->add(l2);

            Line *l3 = new Line();
            QPointF p1l3 = mt.map(QPointF(lgArretePolygone/2,htTriangle));
            QPointF p2l3 = mt.map(QPointF(lgBaseTriangle+((lgArretePolygone-lgBaseTriangle)/2),0));
            l3->setP1(p1l3);
            l3->setP2(p2l3);
            newComp->add(l3);

            Line *l4 = new Line();
            QPointF p1l4 = mt.map(QPointF(lgBaseTriangle+((lgArretePolygone-lgBaseTriangle)/2),0));
            QPointF p2l4 = mt.map(QPointF(lgArretePolygone,0));
            l4->setP1(p1l4);
            l4->setP2(p2l4);
            newComp->add(l4);

            //Affecte new value
            i.setValue(newComp);
        }
        //Else is a componant => recursivity
        else if(composite != 0)
        {
            createFractal(composite);
        }
    }
}

