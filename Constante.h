#include <iostream>
#include <string.h>

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

private:

    Constante();
    ~Constante();
    void giveName();
    void gestionVie();
    void gestionFaim();
    void gestionSoif();
    void gestionJoie();
    void gestionHygiene();
    void gestionFatigue();
    void caresserAnimal();
};
