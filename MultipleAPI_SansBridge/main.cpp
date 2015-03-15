#include <iostream>

#include "Forme.h"
#include "CercleAPI1.h"
#include "CercleAPI2.h"
#include "RectangleAPI1.h"
#include "RectangleAPI2.h"
#include "HexagoneAPI1.h"
#include "HexagoneAPI2.h"

using namespace std;

int main()
{
    CercleAPI1 cercle1;
    CercleAPI2 cercle2;
    cercle1.draw();
    cercle2.draw();

    HexagoneAPI1 hexagone1;
    HexagoneAPI2 hexagone2;
    hexagone1.draw();
    hexagone2.draw();

    RectangleAPI1 rectangle1;
    RectangleAPI2 rectangle2;
    rectangle1.draw();
    rectangle2.draw();

    return 0;
}
