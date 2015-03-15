#include "CercleAPI1.h"
#include "../APIs/API_1.h"

CercleAPI1::CercleAPI1() : Cercle()
{
    //ctor
}

CercleAPI1::~CercleAPI1()
{
    //dtor
}

void CercleAPI1::paint(){
    API_1::simpleCircle(0,0,5);
}
