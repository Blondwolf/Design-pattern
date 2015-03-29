#include "threadcontroler.h"
#include "fractal.h"

/*============================================*/
//  CONSTRUCTOR / DESTRUCTOR
/*============================================*/

ThreadControler::ThreadControler()
{

}

ThreadControler::~ThreadControler()
{

}

/*============================================*/
//  OVERRIDE
/*============================================*/

void ThreadControler::run()
{
    Fractal &f = Fractal::getInstance();
    emit finishFractal(f.getFractal());
}

