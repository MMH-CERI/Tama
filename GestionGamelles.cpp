#include <iostream>
#include "Constante.h"
#include "Nourriture.h"

using namespace std;

Nourriture::Nourriture()//constructeur de la classe Nourriture
{
	quantiteEau = 0;
	quantiteNourriture = 0;
}

Nourriture::~Nourriture()
{}

void Nourriture::gestionGeau(int eau)//fonction de gestion du niveau d'eau dans la gamelle
{
	quantiteEau += eau;
}



void Nourriture::gestionGnourriture(int nourriture)//fonction de gestion du niveau de nourriture dans la gamelle
{
	quantiteNourriture += nourriture;
}

