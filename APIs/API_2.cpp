#include "API_2.h"
#include <stdio.h>      /* printf */

void API_2::drawRect(int x, int y, int l, int w, int a)
{
    printf("draw rectangle from API 2 (x=%i,y=%i,l=%i,w=%i,a=%i)", x,y,l,w,a);
}

void API_2::drawExagon(int x, int y, int r, int a)
{
    printf("draw exagon from API 2 (x=%i,y=%i,r=%i,a=%i)", x,y,r,a);
}

void API_2::drawCircle(int x, int y, int r)
{
    printf("draw circle from API 2 (x=%i,y=%i,r=%i)", x,y,r);
}
