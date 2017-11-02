#include "Forfatter.h"
#include "Bog.h"
#include "Eksemplar.h"
#include "Laaner.h"
#include "Udlaan.h"
#include "Bibliotek.h"
#include <iostream>
using namespace std;
int main()
{
	Bibliotek bib;

	Forfatter mah("Martin A. Hansen", "dansk", 1909, 1955);
	Bog lgn1("Loegneren", mah, 1950);
	Eksemplar eks1(1001, lgn1);
	Eksemplar eks2(1002, lgn1);

	bib.tilfoejEks(eks1);
	bib.tilfoejEks(eks2);

	Forfatter hp("Henrik Pontoppidan", "dansk", 1857, 1943);
	Bog lp("Lykke-Per", hp, 1898);
	Eksemplar eks3(1011, lp);

	bib.tilfoejEks(eks3);

	Forfatter jrrt("J.R.R. Tolkien", "britisk", 1892, 1973);
	Bog fr("The Fellowship of the Ring", jrrt, 1954);
	Bog tt("The two Towers", jrrt, 1954);
	Bog rk("The Return of the King", jrrt, 1955);
	Eksemplar eks4(1021, fr);
	Eksemplar eks5(1022, tt);
	Eksemplar eks6(1023, rk);

	bib.tilfoejEks(eks4);
	bib.tilfoejEks(eks5);
	bib.tilfoejEks(eks6);

	Laaner po("Petrine Ottesen", 101);
	Udlaan udl1(Dato(20161026), po, eks1);
	Udlaan udl2(Dato(20160101), po, eks5);
	Udlaan udl3(Dato(20161029), po, eks3);

	bib.tilfoejUdl(udl1);
	bib.tilfoejUdl(udl2);
	bib.tilfoejUdl(udl3);

	Laaner te("Torsten Eriksen", 101);

	Udlaan udl4(Dato(20161018), te, eks4);
	Udlaan udl5(Dato(20161018), te, eks6);

	bib.tilfoejUdl(udl4);
	bib.tilfoejUdl(udl5);

	Forfatter ru("Jan knudsen", "dansk", 1956, 2015);
	Bog r1("Den ene efter den anden", ru, 2012);
	Bog r2("Hjulet der gik og gik", ru, 2004);
	Bog r3("Traeet", ru, 2003);
	Bog r4("Klausens klude", ru, 2001);
	Bog r5("Det goer du bare", ru, 2010);
	Eksemplar eks7(1031, r1);
	Eksemplar eks8(1032, r2);
	Eksemplar eks9(1033, r3);
	Eksemplar eks10(1034, r4);
	Eksemplar eks11(1035, r5);

	bib.tilfoejEks(eks7);
	bib.tilfoejEks(eks8);
	bib.tilfoejEks(eks9);
	bib.tilfoejEks(eks10);
	bib.tilfoejEks(eks11);


	Udlaan udl6(Dato(20161027), te, eks7);
	Udlaan udl7(Dato(20161028), te, eks8);
	Udlaan udl8(Dato(20161029), te, eks9);
	Udlaan udl9(Dato(20161114), te, eks10);
	Udlaan udl10(Dato(20161115), te, eks11);

	bib.tilfoejUdl(udl6);
	bib.tilfoejUdl(udl7);
	bib.tilfoejUdl(udl8);
	bib.tilfoejUdl(udl9);
	bib.tilfoejUdl(udl10);

	cout << "Tjek om boeger er ledige;" << endl;
	cout << bib.tjekOmBogErTilgaengelig("The two Towers") << endl;
	cout << bib.tjekOmBogErTilgaengelig("Loegneren") << endl;
	cout << bib.tjekOmBogErTilgaengelig("EnBogDerIkkeFindes") << endl << endl;	// -1 = bog findes ikke

	cout << "List over en laaner" << endl;
	bib.listLaanersLaan("Petrine Ottesen");

	cout << endl << "Mest populærer forfatter" << endl;
	cout << bib.findMestPopulaereForfatter() << endl;

	system("pause");
}