#pragma once
class Dato
{
public:
	Dato();
	Dato(int);
	int getDate();
	int getYear();
	int getMonth();
	int getDay();
	int getQuarter();
	bool leapYear();
	bool validate();
	int daysInYear();
	int daysLeft();
	void incDate();
	void decDate();
	int returndate();
	~Dato();
private:
	int theDate;
	int array[8];
};

