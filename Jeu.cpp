#include <iostream>
#include "Nourriture.h"
#include "Constante.h"
#include "Interface.h"
#include <thread>
#include <SDL.h>


using namespace std;

void chronoConst(Constante C, Nourriture N)//Fonction permettant d'appeler les fonctions de gestion en fonctions du temps
{
    while(1)
    {
        int tempsEcoule;
        //int chronoSoif = 50000;
        int chronoFaim = 100000;
        tempsEcoule = SDL_GetTicks();
        if((chronoFaim - tempsEcoule) == 0)
        {
            C.gestionFaim(N);
        }
    }

}

int main(int argc, char** argv )//main
{
    Constante c;
    Nourriture n;
    thread first(interface,c, n);
    thread second(chronoConst, c, n);

    first.join();                // pauses until first finishes
    second.join();               // pauses until second finishes


}
