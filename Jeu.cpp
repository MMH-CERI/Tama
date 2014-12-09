#include <iostream>
#include "Nourriture.h"
#include "Constante.h"
#include "Interface.h"
#include <thread>


using namespace std;

int main(int argc, char** argv )
{
    Constante c;
    Nourriture n;
    thread fisrt(interface,c,n);
    thread second(C.chrono,n);

}
