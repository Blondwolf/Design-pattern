#include "CercleAPI2.h"
#include "../APIs/API_2.h"

CercleAPI2::CercleAPI2() : Cercle()
{
    //ctor
}

CercleAPI2::~CercleAPI2()
{
    //dtor
}

void CercleAPI2::paint()
{
    API_2::drawCircle(0,0,5);
}
