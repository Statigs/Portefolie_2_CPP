#include "Eksemplar.h"



Eksemplar::Eksemplar()
{
}


Eksemplar::Eksemplar(int i, Bog b)
{
	id = i;
	bog = b;
}


int Eksemplar::getId()
{
	return id;
}


Bog Eksemplar::getBog()
{
	return bog;
}


Eksemplar::~Eksemplar()
{
}
