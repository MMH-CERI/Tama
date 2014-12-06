#ifdef __cplusplus
    #include <cstdlib>
#else
    #include <stdlib.h>
#endif

#include <SDL/SDL.h>
#include "Constante.h"
#include <string.h>

int interface(Constante C)
{
    /*system("xterm -e ./xt 1");
    cout<<"interface";*/
    string cmd = "xterm -e sh-c 'ls-l; exec bash'";
    cout<<"interface :"<<C.vie<<endl;
    system (cmd.c_str ());
    return 0;
}
