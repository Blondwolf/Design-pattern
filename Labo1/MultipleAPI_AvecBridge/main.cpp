#include <iostream>
#include <stdio.h>      /* printf */
#include "formes/circle.h"
#include "formes/rectangle.h"
#include "formes/hexagon.h"
#include "formes/shape.h"
#include "APIs_abstraction/API1_implementor.h"
#include "APIs_abstraction/API2_implementor.h"
#include "APIs_abstraction/API3_implementor.h"

using namespace std;

int main()
{
    printf("Test of the bridge design pattern\n\n");

    //APIS
    API1_implementor api1;
    API2_implementor api2;
    API3_implementor api3;

    //TESTS
    Circle c1(api1);
    c1.setX(10);
    c1.setY(11);
    c1.setR(1);

    Circle c2(api2);
    c2.setX(20);
    c2.setY(21);
    c2.setR(2);

    Circle c3(api3);
    c3.setX(30);
    c3.setY(31);
    c3.setR(3);

    c1.draw();
    printf("\n\n");
    c2.draw();
    printf("\n\n");
    c3.draw();
    printf("\n\n");

    //TESTS
    Rectangle r1(api1);
    r1.setX(10);
    r1.setY(11);
    r1.setW(10);
    r1.setH(10);
    r1.setA(1);

    Rectangle r2(api2);
    r2.setX(20);
    r2.setY(21);
    r2.setW(20);
    r2.setH(20);
    r2.setA(2);

    Rectangle r3(api3);
    r3.setX(30);
    r3.setY(31);
    r3.setW(30);
    r3.setH(30);
    r3.setA(3);

    r1.draw();
    printf("\n\n");
    r2.draw();
    printf("\n\n");
    r3.draw();
    printf("\n\n");

    //TESTS
    Hexagon e1(api1);
    e1.setX(10);
    e1.setY(11);
    e1.setR(10);
    e1.setA(1);

    Hexagon e2(api2);
    e2.setX(20);
    e2.setY(21);
    e2.setR(20);
    e2.setA(2);

    Hexagon e3(api3);
    e3.setX(30);
    e3.setY(31);
    e3.setR(30);
    e3.setA(3);

    e1.draw();
    printf("\n\n");
    e2.draw();
    printf("\n\n");
    e3.draw();
    printf("\n\n");

    return 0;
}
