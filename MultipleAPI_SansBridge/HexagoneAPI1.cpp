#include "HexagoneAPI1.h"
#include "../APIs/API_1.h"

HexagoneAPI1::HexagoneAPI1() : Hexagone()
{
    //ctor
}

HexagoneAPI1::~HexagoneAPI1()
{
    //dtor
}

void HexagoneAPI1::paint(){
    API_1::orientedExagon(0,0,10,0);
}
