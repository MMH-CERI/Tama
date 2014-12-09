#include <iostream>
#include <unistd.h>
#include <SDL.h>
#include <time.h>
#include <string.h>
#include "Constante.h"
#include "Nourriture.h"
#include <signal.h>

using namespace std;

Constante::Constante()
{
    nom == "\0";
    vie = 100;
    faim = 100;
    joie = 100;
    soif = 100;
    hygiene = 100;
    fatigue = 100;
}

Constante::~Constante()
{

}


void Constante::giveName()
{
    if(nom=="\0")
    {
        cout<<"Quel nom voulez-vous donnez a votre animal ?"<<endl;
        cin>>nom;
    }
    else return;
}

void Constante::gestionVie()
{
    if(faim == 0 || soif == 0)
    {
        do
        {
            vie--;
        }
        while(vie>0);
    }
    else if((faim>0 && faim<=25 && soif>0) || (faim>0 && soif>0 && soif>=25))
    {
        do
        {
            vie++;
        }
        while(vie<100);
    }
    else if((faim>25 && faim<=50 && soif>0) || (faim>0 && soif>25 && soif<=50))
    {
        do
        {
            vie = vie+2;
        }
        while(vie<100);
    }
    else if((faim>50 && faim<=75 && soif>0) || (faim>0 && soif>50 && soif<=75))
    {
        do
        {
            vie = vie+3;
        }
        while(vie<100);
    }
    else if((faim>75 && faim<=100 && soif>0) || (faim>0 && soif>75 && soif<=100))
    {
        do
        {
            vie = vie+4;
        }
        while(vie<100);
    }
    else if(faim==100 && soif==100)
    {
        do
        {
            vie = vie+5;
        }
        while(vie<100);
    }
}

void Constante::gestionFaim(Nourriture N)
{
        if(faim <75 && N.quantiteNourriture >0)
        {
            while(faim==100 || N.quantiteEau == 0)
            {
                faim++;
                N.quantiteNourriture--;
            }
        }
}

void Constante::gestionSoif(Nourriture N)
{
    while(soif>=0)
    {
        soif--;
        if(soif <75 && N.quantiteEau >0)
        {
            while(soif==100 || N.quantiteEau == 0)
            {
                soif++;
                N.quantiteEau--;
            }
        }
        sleep(50);
    }
}

void Constante::gestionJoie()
{
    while(joie>=0)
    {
        joie--;
        sleep(100);
    }
}

void Constante::gestionHygiene()
{
    while(hygiene>=0)
    {
        hygiene--;
        sleep(100);
    }
}

void Constante::gestionFatigue()
{

}

void Constante::caresserAnimal()
{
    if(joie>75) joie = 100;
    else if(joie >=0 && joie<=75) joie = joie+25;
}

void Constante::chrono(string entrer, Nourriture N)
{
    while(entrer != "Arret")
    {
        int tempsEcoule;
        //int chronoSoif = 50000;
        int chronoFaim = 100000;
        tempsEcoule = SDL_GetTicks();
        if((chronoFaim - tempsEcoule) == 0)
        {
            gestionFaim(N);
        }
    }
}
