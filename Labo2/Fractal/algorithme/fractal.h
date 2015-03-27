#ifndef FRACTAL_H
#define FRACTAL_H

#include <QtMath>
#include <QList>
#include <QPointF>

#include "../component/component.h"
#include "../component/composite.h"
#include "../component/line.h"

class fractal
{
public:
    fractal(int nbCotePolygone, double lgArretePolygone, double lgBaseTriangle, double htTriangle, int nbIteration);
    ~fractal();

    void run();
    Component getComponent();

private:
    QList<QPointF> createPoints();
    Component createPolygone(QList<QPointF> points);
    Component createFractal(Component polygone);


    int nbCotePolygone;
    double lgArretePolygone;
    double lgBaseTriangle;
    double htTriangle;
    int nbIteration;

    Component newFractal;
};

#endif // FRACTAL_H