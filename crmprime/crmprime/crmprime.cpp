// crmprime.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

bool isPrime(int intValue) {
	int intPrimeDivisionCount = 0;

	if (intValue == 0) {
		return false;
		//cout << "Not Prime";
	}
	else {
		for (int intPrimeCheck = 2;
			intPrimeCheck < intValue;
			intPrimeCheck++) {

			if (intValue % intPrimeCheck == 0) {
				intPrimeDivisionCount++;
			}
		}
	}

	if (intPrimeDivisionCount >= 1) {
		return false;
		//cout << "Not a prime!" << endl;
	}

	return true;
}

int main()
{
	int intNumber = 0;

	for (int intRange = 1; intRange <= 10000; intRange++) {
		intNumber = intRange;

		if (isPrime(intNumber)) {
			cout << ", " << intNumber;
		}
	}

}


