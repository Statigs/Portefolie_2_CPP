#pragma once
#include "Person.h"
#include <string>

using namespace std;

class Laaner: public Person
{
public:
	Laaner();
	Laaner(string, int);
	~Laaner();
private:
	int id;
};

