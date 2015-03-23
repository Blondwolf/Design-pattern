#include "API3_implementor.h"
#include "../../APIs/API_3.h"

void API3_implementor::drawRectangle(int x, int y, int l, int w, int a)
{
    API_3::rectangle(x,y,l,w,a);
}

void API3_implementor::drawCircle(int x, int y, int r)
{
    API_3::circle(x,y,r);
}

void API3_implementor::drawHexagon(int x, int y, int r, int a)
{
    API_3::exagon(x,y,r,a);
}
