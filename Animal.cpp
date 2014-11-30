#include <iostream>
#include <unistd.h>
#include <time.h>
#include <string.h>
#include "Constante.h"
#include "Nourriture.h"

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
            sleep(1800);
        }
        while(vie>0);
    }
    else if((faim>0 && faim<=25 && soif>0) || (faim>0 && soif>0 && soif>=25))
    {
        do
        {
            vie++;
            sleep(300);
        }
        while(vie<100);
    }
    else if((faim>25 && faim<=50 && soif>0) || (faim>0 && soif>25 && soif<=50))
    {
        do
        {
            vie = vie+2;
            sleep(300);
        }
        while(vie<100);
    }
    else if((faim>50 && faim<=75 && soif>0) || (faim>0 && soif>50 && soif<=75))
    {
        do
        {
            vie = vie+3;
            sleep(300);
        }
        while(vie<100);
    }
    else if((faim>75 && faim<=100 && soif>0) || (faim>0 && soif>75 && soif<=100))
    {
        do
        {
            vie = vie+4;
            sleep(300);
        }
        while(vie<100);
    }
    else if(faim==100 && soif==100)
    {
        do
        {
            vie = vie+5;
            sleep(300);
        }
        while(vie<100);
    }
}

void gestionFaim(Nourriture N)
{
    N.quantiteNourriture--;
}

void Constante::gestionSoif()
{

}

void Constante::gestionJoie()
{

}

void Constante::gestionHygiene()
{

}

void Constante::gestionFatigue()
{

}

void Constante::caresserAnimal()
{

}
