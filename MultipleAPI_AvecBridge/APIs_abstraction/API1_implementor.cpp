#include "API1_implementor.h"
#include "../../APIs/API_1.h"

void API1_implementor::drawRectangle(int x, int y, int l, int w, int a)
{
    API_1::orientedRectangle(x,y,l,w,a);
}

void API1_implementor::drawCircle(int x, int y, int r)
{
    API_1::simpleCircle(x,y,r);
}

void API1_implementor::drawHexagon(int x, int y, int r, int a)
{
    API_1::orientedExagon(x,y,r,a);
}
