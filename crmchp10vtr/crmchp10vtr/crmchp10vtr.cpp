// crmchp10vtr.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<int> vtrNumber;
	int intGrade = 0;
	int intSum = 0;
	float fltAverage = 0;
	
	do {
		cout << "Please enter a number grade (-1 to stop): ";
		cin >> intGrade;

		if (intGrade >= 0) {
			vtrNumber.push_back(intGrade);
		}
	} while (intGrade >= 0);

	for (int intNumber = 0;
		intNumber < vtrNumber.size();
		intNumber++) {
		cout << endl << vtrNumber.at(intNumber);
	}

	for (int intNumber = 0;
		intNumber < vtrNumber.size();
		intNumber++) {
		intSum += vtrNumber.at(intNumber);
	}
	cout << endl << "Sum: " << intSum;

	fltAverage = (float)intSum / (float)vtrNumber.size();

	cout << endl << "Avg: " << fltAverage;



}
