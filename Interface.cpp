#ifdef __cplusplus
    #include <cstdlib>
#else
    #include <stdlib.h>
#endif

#include <SDL/SDL.h>
#include "Constante.h"
#include <string.h>

int interface(Constante C, Nourriture N)
{

    string cmd = "xterm -e sh-c 'ls-l; exec bash'";
    C.gestionVie();
    C.gestionFaim(N);
    //c.gestionFatigue();
    C.gestionJoie();
    C.gestionHygiene();
    cout<<"Vie :"<<C.vie<<endl;
    cout<<"Faim :"<<C.faim<<endl;
    system (cmd.c_str ());
    return 0;
}
