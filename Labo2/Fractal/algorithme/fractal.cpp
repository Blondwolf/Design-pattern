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
    createPoints();

    //Fractalisation
    //newFractal = new Composite();
    for(int i=0; i<nbCotePolygone; i++)
    {

    }
}

Component fractal::getComponent()
{
    return newFractal;
}

QList<QPointF> fractal::createPoints()
{
    QList<QPointF> points();
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
}

Component fractal::createPolygone(QList<QPointF> points)
{
    //Creation de la forme de base
    Composite newPolygone();

    while(!points.isEmpty())
    {
        Line line();
        newPolygone().add(line);
    }

}

Component fractal::createFractal(Component polygone)
{

}

