#include "Bibliotek.h"
#include <iostream>

using namespace std;

Bibliotek::Bibliotek()
{
}


void Bibliotek::tilfoejEks(Eksemplar e)
{
	samling.push_back(e);
}


void Bibliotek::tilfoejUdl(Udlaan u)
{
	int location = -1;
	for (int i = 0; i < samling.size(); ++i)
	{
		if (u.getEksemplar().getId() == samling[i].getId())
		{
			location = i;
			goto out;
		}
	}
out:
	samling.erase(samling.begin() + location);
	udlaant.push_back(u);

}


int Bibliotek::tjekOmBogErTilgaengelig(string n)
{
	for (int i = 0; i < samling.size(); ++i)
	{
		if (samling[i].getBog().getTitle() == n)
		{
			return 0;
		}
	}
	for (int i = 0; i < udlaant.size(); ++i)
	{
		if (udlaant[i].getEksemplar().getBog().getTitle() == n)
		{
			return udlaant[i].getDato();
		}
	}
	return -1;
}


void Bibliotek::listLaanersLaan(string l)
{
	cout << l + ":" << endl;
	for (int i = 0; i < udlaant.size(); ++i)
	{
		if (udlaant[i].getLaaner().getName() == l)
		{
			cout << udlaant[i].getEksemplar().getBog().getTitle() + " -> ";
			cout << udlaant[i].getDato() << endl;
		}
	}
}


string Bibliotek::findMestPopulaereForfatter()
{
	for (int i = 1; i < udlaant.size(); ++i)
	{
		if (udlaant[i - 1].getEksemplar().getBog().getForfatter().getName() < udlaant[i].getEksemplar().getBog().getForfatter().getName())
		{
			udlaant.push_back(udlaant[i - 1]);
			udlaant.erase(udlaant.begin() + i - 1);
			i--;
		}
	}

	string name1 = udlaant[0].getEksemplar().getBog().getForfatter().getName();
	int udlaan1 = 0;
	string name2 = "";
	int udlaan2 = 0;
	for (int i = 0; i < udlaant.size(); ++i)
	{
		if (name1 == udlaant[i].getEksemplar().getBog().getForfatter().getName())
		{
			udlaan1++;
		}
		else
		{
			if (udlaan1 > udlaan2)
			{
				udlaan2 = udlaan1;
				name2 = name1;
			}
			udlaan1 = 0;
			name1 = udlaant[i].getEksemplar().getBog().getForfatter().getName();
			i--;
		}
	}
	return name2;
}


Bibliotek::~Bibliotek()
{
}
