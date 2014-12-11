#ifndef CONSTANTE_H_INCLUDED
#define CONSTANTE_H_INCLUDED

#include <iostream>
#include <string.h>
#include "Nourriture.h"

using namespace std;

class Constante
{

public:

    string nom;
    int vie;
    int faim;
    int joie;
    int soif;
    int hygiene;
    int fatigue;
    Constante();
    ~Constante();
    //void chrono(Nourriture);

    void giveName();
    void gestionVie();
    void gestionFaim(Nourriture);
    void gestionSoif(Nourriture);
    void gestionJoie();
    void gestionHygiene();
    void gestionFatigue();
    void caresserAnimal();
};

#endif // CONSTANTE_H_INCLUDED

