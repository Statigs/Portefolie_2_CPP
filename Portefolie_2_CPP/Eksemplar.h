#pragma once
#include "Bog.h"

class Eksemplar
{
public:
	Eksemplar();
	Eksemplar(int, Bog);
	int getId();
	Bog getBog();
	~Eksemplar();
private:
	int id;
	Bog bog;
};

