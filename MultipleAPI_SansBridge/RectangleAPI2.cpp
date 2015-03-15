#include "RectangleAPI2.h"
#include "../APIs/API_2.h"

RectangleAPI2::RectangleAPI2() : Rectangle()
{
    //ctor
}

RectangleAPI2::~RectangleAPI2()
{
    //dtor
}

void RectangleAPI2::paint(){
    API_2::drawRect(0,0,10,20,0);
}
