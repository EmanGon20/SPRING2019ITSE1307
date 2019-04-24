#include "pch.h"
#include "Die.h"


Die::Die()
{
	std::srand(time(NULL));
	setSides(6);
	roll();
}

Die::Die(int intpSides)
{
	std::srand(time(NULL));
	setSides(intpSides);
	roll();
}


Die::~Die()
{
	this->intSides = 0;
	this->intValue = 0;
}


int Die::roll()
{
	return this->intValue = rand() % this->intSides + 1;
}


int Die::get()
{
	return this->intValue;
}

void Die::setSides(int intpSides)
{
	if (intpSides < 1) {
		intpSides = 2;
	}
	else if (intpSides > 100) {
		intpSides = 100;
	}
	this->intSides = intpSides;
}
