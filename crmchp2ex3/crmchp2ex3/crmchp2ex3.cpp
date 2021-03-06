// crmchp2ex3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int intAlpha = 0;		//Comment each variable for readability
	double dblBeta = 0.0;	//Comment
	int intDelta = 0;		//Comment
	char chrGamma = 'A';	//Character Example

	//std::cout << "Example of using std::" << std::endl;
	cout << "Example of using std::" << endl;
	
	cout << "Enter a double: ";
	cin >> dblBeta;
	
	cout << "Enter an integer value: ";
	cin >> intDelta;

	cout << "Enter a letter: ";
	cin.ignore(10, '\n');
	cin.get(chrGamma);

	intAlpha = 5 * dblBeta + intDelta;

	cout << fixed;
	cout << "Alpha: " << setw(5) << intAlpha << endl;
	cout << setprecision(1) << "Beta: " << dblBeta << endl;
	cout << "Delta: " << intDelta << endl;
	cout << "Gamma: " << setw(10) << setfill('#') << (int)chrGamma << endl;



    return 0;
}

