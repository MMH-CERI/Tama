#ifdef __cplusplus
    #include <cstdlib>
#else
    #include <stdlib.h>
#endif

#include <SDL/SDL.h>
#include "Constante.h"
#include <string.h>
#include <signal.h>

int interface(Constante C, Nourriture N)//interface de test
{

    string cmd = "xterm -e sh-c 'ls-l; exec bash'";
    cout<<"Vie :"<<C.vie<<endl;
    cout<<"Faim :"<<C.faim<<endl;
    system (cmd.c_str ());
    return 0;
}
