#include "Person.h"



Person::Person()
{
}

Person::Person(string n)
{
	name = n;
}


string Person::getName()
{
	return name;
}


Person::~Person()
{
}
