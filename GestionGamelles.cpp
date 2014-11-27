#include <iostream>
#include "Nourriture.h"

using namespace std;

Nourriture::Nourriture()
{
	quantiteEau = 0;
	quantiteNourriture = 0;
}

Nourriture::~Nourriture()
{}

void Nourriture::gestionGeau(int eau)
{
	quantiteEau += eau
}

void Nourriture::gestionGnourriture(int nourriture)
{
	quantiteNourriture += nourriture
}

bool Nourriture::retirerEau(int eau)
{
	if(quantiteEau = 0 || eau > quantiteEau)
		return false;

	quantiteEau -= eau;
	return true;
}

bool Nourriture::retirerNourriture(int nourriture)
{
	if(quantiteNourriture = 0 || nourriture > quantiteNourriture)
		return false;

	quantiteNourriture -= nourriture;
	return true;
}
