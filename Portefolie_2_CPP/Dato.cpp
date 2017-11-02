#include "Dato.h"
#include <iostream>
using namespace std;

Dato::Dato()
{
}

Dato::Dato(int aDate)
{
	theDate = aDate;
	for (int i = 7; i >= 0; i--)
	{
		array[i] = theDate % 10;
		theDate = theDate / 10;
	}
}

int Dato::getDate()
{
	int a = (array[0] * 10000000) + (array[1] * 1000000) + (array[2] * 100000) + (array[3] * 10000) + (array[4] * 1000) + (array[5] * 100) + (array[6] * 10) + array[7];
	return a;
}

int Dato::getYear()
{
	int a = (array[0] * 1000) + (array[1] * 100) + (array[2] * 10) + array[3];
	return a;
}

int Dato::getMonth()
{
	int a = (array[4] * 10 + array[5]);
	return a;
}

int Dato::getDay()
{
	int a = (array[6] * 10 + array[7]);
	return a;
}

int Dato::getQuarter()
{
	return (getMonth() + 1) / 3 + 1;
}

bool Dato::leapYear()
{
	if (getYear() % 4 == 0 && getYear() % 100 != 0)
	{
		return true;
	}
	else if (getYear() % 400 == 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool Dato::validate()
{
	if (getYear() >= 0 && getYear() < 10000)
	{
		if (getMonth() > 0 && getMonth() < 13)
		{
			if (getMonth() % 2 != 0 && getMonth() < 8 && getMonth() != 2)
			{
				if (getDay() > 0 && getDay() <= 31)
				{
					return true;
				}
				else
				{
					return false;
				}
			}
			else if (getMonth() % 2 == 0 && getMonth() < 8 && getMonth() != 2)
			{
				if (getDay() > 0 && getDay() <= 30)
				{
					return true;
				}
				else
				{
					return false;
				}
			}
			else if (getMonth() % 2 == 0 && getMonth() > 7 && getMonth() != 2)
			{
				if (getDay() > 0 && getDay() <= 31)
				{
					return true;
				}
				else
				{
					return false;
				}
			}
			else if (getMonth() % 2 != 0 && getMonth() > 7 && getMonth() != 2)
			{
				if (getDay() > 0 && getDay() <= 30)
				{
					return true;
				}
				else
				{
					return false;
				}
			}
			else if (getMonth() == 2)
			{
				if ((getDay() > 0 && getDay() <= 28) || (getDay() == 29 && leapYear() == true))
				{
					return true;
				}
				else
				{
					return false;
				}
			}
			else
			{
				return false;
			}
		}
		else
		{
			return false;
		}
	}
	else
	{
		return false;
	}
}

int Dato::daysInYear()
{
	int days = 0;
	switch (getMonth())
	{
	case 1 || 2: days = getDay();
		break;
	case 2:	days = 31 + getDay();
		break;
	case 3:	days = 59 + getDay();
		break;
	case 4:	days = 90 + getDay();
		break;
	case 5:	days = 120 + getDay();
		break;
	case 6:	days = 151 + getDay();
		break;
	case 7:	days = 181 + getDay();
		break;
	case 8:	days = 212 + getDay();
		break;
	case 9:	days = 243 + getDay();
		break;
	case 10: days = 273 + getDay();
		break;
	case 11: days = 304 + getDay();
		break;
	case 12: days = 334 + getDay();
		break;
	}
	if (leapYear() && getMonth() > 2)
	{
		return days + 1;
	}
	else
	{
		return days;
	}
}

int Dato::daysLeft()
{
	if (leapYear())
	{
		return 366 - daysInYear();
	}
	else
	{
		return 365 - daysInYear();
	}
}

void Dato::incDate()
{
	array[7] = array[7] + 1;
	int a = getDate();
	int b = 0;
	while (!validate())
	{
		a++;
		b = a;
		for (int i = 7; i >= 0; i--)
		{
			array[i] = b % 10;
			b = b / 10;
		}
	}
}

void Dato::decDate()
{
	array[7] = array[7] - 1;
	int a = getDate();
	int b = 0;
	while (!validate())
	{
		a--;
		b = a;
		for (int i = 7; i >= 0; i--)
		{
			array[i] = b % 10;
			b = b / 10;
		}
	}
}

int Dato::returndate()
{
	for (int i = 0; i < 30; ++i)
	{
		incDate();
	}
	int in30 = getDate();
	for (int i = 0; i < 30; ++i)
	{
		decDate();
	}
	return in30;
}


Dato::~Dato()
{
}
