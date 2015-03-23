#include "API2_implementor.h"
#include "../../APIs/API_2.h"

void API2_implementor::drawRectangle(int x, int y, int l, int w, int a)
{
    API_2::drawRect(x,y,l,w,a);
}

void API2_implementor::drawCircle(int x, int y, int r)
{
    API_2::drawCircle(x,y,r);
}

void API2_implementor::drawHexagon(int x, int y, int r, int a)
{
    API_2::drawExagon(x,y,r,a);
}
