// crmchp4ex3.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <iostream>
using namespace std;
/* Chris MacDougald
20190307

This program is an example of simple calculations with distance over time AKA velocity.
*/

int main()
{
	//variables
	double dblKilometers = 0.0;
	double dblMiles = 0.0;
	const double DBLKMINM = 1.60934;
	const double DBLMINKM = 0.621371;
	char chrChoice = ' ';

	cout << endl << "Please enter if you want to convert (m)iles or (k)ilometers (m or k): ";
	cin >> chrChoice;

	chrChoice = tolower(chrChoice);

	if (chrChoice == 'm') {
		cout << endl << "Enter the distance traveled in miles: ";
		cin >> dblMiles;
		dblKilometers = dblMiles * DBLKMINM;
	}
	else if (chrChoice == 'k') {
		cout << endl << "Enter the distance traveled in kilometers: ";
		cin >> dblKilometers;
		dblMiles = dblKilometers * DBLMINKM;
	}
	else {
		cerr << endl << "Invalid Menu Choice Exiting Program!";
	}

	//output - first
	cout << endl << dblMiles << " mile(s) are equal to " << dblKilometers <<  " kilometer(s)." << endl;
	return 0;
}

