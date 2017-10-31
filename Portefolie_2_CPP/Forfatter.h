#pragma once
#include "Person.h"
#include <string>

using namespace std;

class Forfatter: public Person
{
public:
	Forfatter();
	Forfatter(string, string, int, int);
	~Forfatter();
private:
	string nation;
	int birth;
	int death;
};

