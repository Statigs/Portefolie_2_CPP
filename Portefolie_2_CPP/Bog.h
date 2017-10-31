#pragma once
#include <string>
#include "Forfatter.h"

using namespace std;

class Bog
{
public:
	Bog();
	Bog(string, Forfatter, int);
	string getTitle();
	Forfatter getForfatter();
	~Bog();
private:
	string title;
	Forfatter forfatter;
	int written;
};

