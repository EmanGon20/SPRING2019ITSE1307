#pragma once
#include <random>
#include <time.h>

class Die
{
public:
	Die();
	Die(int intpSides);
	~Die();
	int roll();
	int get();
private:
	void setSides(int intpSides);
	int intSides;
	int intValue;
};

