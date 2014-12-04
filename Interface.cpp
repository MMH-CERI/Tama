#ifdef __cplusplus
    #include <cstdlib>
#else
    #include <stdlib.h>
#endif

#include <SDL/SDL.h>
#include "Constante.h"

int interface()
{
    system("xterm -e ./xt 1");
    cout<<"interface";
    return 0;
}
