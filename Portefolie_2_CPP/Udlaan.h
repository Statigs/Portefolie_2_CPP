#pragma once
#include "Dato.h"
#include "Laaner.h"
#include "Eksemplar.h"

class Udlaan
{
public:
	Udlaan();
	Udlaan(Dato, Laaner, Eksemplar);
	int getDato();
	Laaner getLaaner();
	Eksemplar getEksemplar();
	~Udlaan();
private:
	Dato dato;
	Laaner laaner;
	Eksemplar eksemplar;
};

