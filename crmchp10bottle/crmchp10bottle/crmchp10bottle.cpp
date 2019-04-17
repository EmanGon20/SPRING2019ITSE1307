// crmchp10bottle.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include "Bottle.h"
#include <iostream>
using namespace std;

int main()
{
	Bottle objBottle;
	Bottle objBottleTwo;

	objBottleTwo.setHeight(8);

	cout << objBottle.toString() << endl;

	for (int intFill = 1; objBottleTwo.isFull() != true; intFill++) {
		objBottleTwo.addLiquid(2);
		cout << objBottleTwo.toString() << endl;
	}
	cout << objBottleTwo.toString() << endl;
}