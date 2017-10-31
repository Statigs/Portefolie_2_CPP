#include "Udlaan.h"



Udlaan::Udlaan()
{
}


Udlaan::Udlaan(Dato d, Laaner l, Eksemplar e)
{
	dato = d;
	laaner = l;
	eksemplar = e;
}


Eksemplar Udlaan::getEksemplar()
{
	return eksemplar;
}


int Udlaan::getDato()
{
	return dato.getDato();
}


Laaner Udlaan::getLaaner()
{
	return laaner;
}


Udlaan::~Udlaan()
{
}
