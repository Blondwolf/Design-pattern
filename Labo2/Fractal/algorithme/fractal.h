#ifndef FRACTAL_H
#define FRACTAL_H

#include <QObject>
#include <QPointF>

class Composite;
class Component;

/**
 * @brief This class calculate fractal by recursivity.
 * It is a singleton
 */
class Fractal : public QObject
{
    Q_OBJECT

public:
    static Fractal &getInstance();

    Component *getFractal();

    void setNbSide(int nbSide);
    void setNbIteration(int nbIteration);
    void setSideSize(double sideSize);
    void setTriangleBase(double triangleBase);
    void setTriangleHeight(double triangleHeight);

    int nbSize() const;
    int nbIteration() const;
    double sideSize() const;
    double triangleBase() const;
    double triangleHeight() const;

    unsigned int getMaxIterationStep() const;

signals:
    void increaseByOneStep() const;

private:
    explicit Fractal();
    ~Fractal();
    static Fractal *f;

    QList<QPointF> firstPolygonVertex(int sideSize, int nbSide) const;
    void createFractal(Component *polygone) const;
    Composite *createPolygone(QList<QPointF> &points) const;

    unsigned int _nbSide;
    unsigned int _nbIteration;
    double _sideSize;
    double _triangleBase;
    double _triangleHeight;
};

#endif // FRACTAL_H
