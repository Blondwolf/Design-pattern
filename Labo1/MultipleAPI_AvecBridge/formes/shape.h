#ifndef SHAPE_H
#define SHAPE_H

class APIs_implementor;

class Shape
{
    public:
        Shape(APIs_implementor &api);
        virtual ~Shape();
        virtual void draw() = 0;

        virtual void setX(int x);
        virtual void setY(int y);

        virtual int getX() const;
        virtual int getY() const;

    protected:
        virtual void drawRectangle(int x, int y, int l, int w, int a);
        virtual void drawHexagon(int x, int y, int r, int a);
        virtual void drawCircle(int x, int y, int r);

    private:
        APIs_implementor &api;
        int x;
        int y;
};

#endif // SHAPE_H
