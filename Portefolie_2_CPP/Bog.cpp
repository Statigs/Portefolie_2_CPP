#include "Bog.h"



Bog::Bog()
{
}


Bog::Bog(string t,  Forfatter f, int w)
{
	title = t;
	forfatter = f;
	written = w;
}


string Bog::getTitle()
{
	return title;
}


Forfatter Bog::getForfatter()
{
	return forfatter;
}


Bog::~Bog()
{
}
