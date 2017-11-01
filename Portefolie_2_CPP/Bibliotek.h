#pragma once
#include "Eksemplar.h"
#include <vector>
#include "Udlaan.h"

using namespace std;

class Bibliotek
{
public:
	Bibliotek();
	void tilfoejEks(Eksemplar);
	void tilfoejUdl(Udlaan);
	int tjekOmBogErTilgaengelig(string);
	void listLaanersLaan(string);
	string findMestPopulaereForfatter();
	~Bibliotek();
private:
	Eksemplar eksemplar;
	vector<Eksemplar> samling;
	vector<Udlaan> udlaant;
	string getForfatterNavn(int);
};

