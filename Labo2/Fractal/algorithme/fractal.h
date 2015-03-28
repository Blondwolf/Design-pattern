#ifndef FRACTAL_H
#define FRACTAL_H

#include <QtMath>
#include <QList>
#include <QPointF>

#include "../component/component.h"
#include "../component/composite.h"
#include "../component/line.h"

class Fractal
{
public:
    Fractal(int nbCotePolygone, double lgArretePolygone, double lgBaseTriangle, double htTriangle, int nbIteration);
    ~Fractal();

    void run();
    Component *getComponent();

private:
    QList<QPointF> createPoints();
    void createFractal(Component *polygone);
    Composite *createPolygone(QList<QPointF> &points);

    int nbCotePolygone;
    double lgArretePolygone;
    double lgBaseTriangle;
    double htTriangle;
    int nbIteration;

    Component *newFractal;
};

#endif // FRACTAL_H
