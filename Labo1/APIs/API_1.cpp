#include "API_1.h"
#include <stdio.h>      /* printf */

void API_1::orientedRectangle(int x, int y, int l, int w, int a)
{
    printf("draw rectangle from API 1 (x=%i,y=%i,l=%i,w=%i,a=%i)", x,y,l,w,a);
}

void API_1::orientedExagon(int x, int y, int r, int a)
{
    printf("draw exagon from API 1 (x=%i,y=%i,r=%i,a=%i)", x,y,r,a);
}

void API_1::simpleCircle(int x, int y, int r)
{
    printf("draw circle from API 1 (x=%i,y=%i,r=%i)", x,y,r);
}
