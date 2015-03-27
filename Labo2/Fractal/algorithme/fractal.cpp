#include "fractal.h"
#include "QPolygonF"
#include "QPointF"

fractal::fractal(int nbCotePolygone, double lgArretePolygone, double lgBaseTriangle, double htTriangle, int nbIteration)
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

void fractal::run()
{
    //Creation de la forme à partir des attributs
    QList<QPointF> points = createPoints();
    Composite* polygone = createPolygone(points);
    createFractal(polygone);

    //Algorithme de fractalisation
    newFractal = polygone;
}

Component* fractal::getComponent()
{
    return newFractal;
}

QList<QPointF> fractal::createPoints()
{
    QList<QPointF> points;
    double rayon = lgArretePolygone / (2*qSin(qDegreesToRadians(180.0f) / nbCotePolygone)); //rayon = longCote / (2*sin(180/n))
    double spanAngle = qDegreesToRadians(360.0f) / nbCotePolygone;
    double angle = 0;

    for(int i=0; i<nbCotePolygone; i++)
    {
        QPointF point = QPointF(qCos(angle), qSin(angle));  //creation des points a partir de l'angle
        point.operator *= (rayon);                          //scaling
        angle += spanAngle;

        points.append(point);
    }

    return points;
}

Composite *fractal::createPolygone(QList<QPointF> points)
{
    //Creation de la forme de base
    Composite* newPolygone = new Composite;

    QList<QPointF>::const_iterator i = points.constBegin();
    QPointF p1 = *i++;
    QPointF p2;

    while(i != points.constEnd())
    {
        ++i;
        p2 = *i;

        Line *line = new Line;
        line->setP1(p1);
        line->setP2(p2);

        p1 = p2;

        newPolygone->add(line);
    }

    return newPolygone;
}

Composite* fractal::createFractal(Composite* polygone)
{
    QList<Component *> children = polygone->getChildren();
    QMutableListIterator<Component *> i(children);

    while (i.hasNext())
    {
        //Recuperation
        Component *c = i.next();
        Line *l = dynamic_cast<Line *>(c);
        Composite *com = dynamic_cast<Composite *>(c);

        //If it's a line
        if(l != 0)
        {
            //Fractalize the line
            Composite *newComp = new Composite();


            //Affecte new value
            i.setValue(newComp);
            delete c;
        }
        //Else is a componant => recursivity
        else if(com != 0)
        {
            createFractal(com);
        }
    }
}

