#include "HexagoneAPI2.h"
#include "../APIs/API_2.h"

HexagoneAPI2::HexagoneAPI2() : Hexagone()
{
    //ctor
}

HexagoneAPI2::~HexagoneAPI2()
{
    //dtor
}

void HexagoneAPI2::paint(){
    API_2::drawExagon(0,0,10,0);
}
