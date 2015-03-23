#ifndef API2_IMPLEMENTOR_H
#define API2_IMPLEMENTOR_H

#include "APIs_implementor.h"

class API2_implementor : public APIs_implementor
{
    public:
        virtual void drawRectangle(int x, int y, int l, int w, int a);
        virtual void drawHexagon(int x, int y, int r, int a);
        virtual void drawCircle(int x, int y, int r);
    protected:
    private:
};

#endif // API2_IMPLEMENTOR_H
