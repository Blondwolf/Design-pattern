#ifndef ABSTRACTIONAPIS_H
#define ABSTRACTIONAPIS_H


class APIs_implementor
{
    public:
        virtual void drawRectangle(int x, int y, int l, int w, int a) = 0;
        virtual void drawHexagon(int x, int y, int r, int a) = 0;
        virtual void drawCircle(int x, int y, int r) = 0;
};

#endif // ABSTRACTIONAPIS_H
