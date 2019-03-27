// crmprime.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	int intNumber = 0;
	int intPrimeDivisionCount = 0;
	bool boolIsPrime = true;

	for (int intRange = 1; intRange <= 10000; intRange++) {
		intNumber = intRange;

		intPrimeDivisionCount = 0;
		boolIsPrime = true;
		//Start with the guess it is prime then set to false if not true
		if (intNumber == 0) {
			boolIsPrime = false;
			//cout << "Not Prime";
		}
		else {
			for (int intPrimeCheck = 2;
				intPrimeCheck < intNumber;
				intPrimeCheck++) {

				if (intNumber % intPrimeCheck == 0) {
					intPrimeDivisionCount++;
				}

				//cerr << "N: " << intNumber <<
				//	", PC: " << intPrimeCheck <<
				//	", PDC: " << intPrimeDivisionCount << endl;
			}
		}

		if (intPrimeDivisionCount >= 1) {
			boolIsPrime = false;
			//cout << "Not a prime!" << endl;
		}

		if (boolIsPrime) {
			cout << ", " << intNumber;
		}
	}

}


