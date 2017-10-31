#pragma once
#include <string>
using namespace std;

class Person
{
public:
	Person();
	Person(string);
	string getName();
	~Person();
protected:
	string name;
};

