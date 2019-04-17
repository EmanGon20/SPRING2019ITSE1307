#pragma once
#include <string>

class Bottle
{
public:
	Bottle();
	~Bottle();
private:
	int intRadius = 0;
	int intHeight = 0;
	int intLiquidHeight = 0;
public:
	double getVolume();
	bool isEmpty();
	bool isFull();
	double getLiquidVolume();
	int setRadius(int intpRadius);
	int setHeight(int intpHeight);
	void empty();
	int addLiquid(int intpLiquidHeight);
	std::string toString();
	std::string toJSON();
};

