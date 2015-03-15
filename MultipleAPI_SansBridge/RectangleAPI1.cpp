#include "RectangleAPI1.h"
#include "../APIs/API_1.h"

RectangleAPI1::RectangleAPI1() : Rectangle()
{
    //ctor
}

RectangleAPI1::~RectangleAPI1()
{
    //dtor
}

void RectangleAPI1::paint(){
    API_1::orientedRectangle(0,0,10,20,0);
}
