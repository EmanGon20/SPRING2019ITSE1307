// crmchp6ex1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

void showMenu();
void convertFtoC(int intpFahrenheit, int& intpCelsius);
void convertCtoF(int intpCelsius, int& intpFahrenheit);
void printCandF(int intpCelsius, int intpFahrenheit);

int main()
{
	int intCelsius = 0;
	int intFahrenheit = 32;
    
	printCandF(intCelsius, intFahrenheit);
	intCelsius = 45;
	printCandF(intCelsius, intFahrenheit);
	convertCtoF(intCelsius, intFahrenheit);
	cout << "Outside CtoF:" << endl;
	printCandF(intCelsius, intFahrenheit);

}

void convertCtoF(int intpCelsius, int& intpFahrenheit) {
	cout << "Inside CtoF:" << endl;
	printCandF(intpCelsius, intpFahrenheit);
	intpFahrenheit = (int)(((float)intpCelsius * (9.0 / 5.0)) + 32.0);
	printCandF(intpCelsius, intpFahrenheit);
	return;
}

void convertFtoC(int intpFahrenheit, int& intpCelsius) {
	intpCelsius = (int)(((float)intpFahrenheit - 32.0) * (5.0 / 9.0));
	return;
}

void printCandF(int intpCelsius, int intpFahrenheit) {
	cout << intpCelsius << " C equals "
		<< intpFahrenheit << " F" << endl;
}

void showMenu() {
	return;
}
