// crmchp6ex2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

string generatePlayerName() {
	static int intNumberOfPlayers = 0;
	intNumberOfPlayers++;
	return "Player " + to_string(intNumberOfPlayers);
}

int getNextInventoryNumber() {
	static int intInventoryNumber = 1000;
	intInventoryNumber += 7;
	return intInventoryNumber;
}

int addToSum(int intpNumberToAdd) {
	static int intSum = 0;
	intSum += intpNumberToAdd;
	return intSum;
}

int main()
{
    cout << "Static in Functions Example" << endl;

	int intNumberToAdd = 5;
	int intCounter = 1;
	cout << addToSum(intNumberToAdd) << endl;
	cout << addToSum(intNumberToAdd) << endl;
	cout << addToSum(intNumberToAdd) << endl;
	cout << addToSum(7) << endl;
	
	cout << getNextInventoryNumber() << endl;
	cout << getNextInventoryNumber() << endl;
	cout << getNextInventoryNumber() << endl;
	cout << getNextInventoryNumber() << endl;

	do {
		intCounter++;
		cout << getNextInventoryNumber() << endl;
	} while (intCounter < intNumberToAdd);
	
	cout << generatePlayerName() << endl;
	cout << generatePlayerName() << endl;
	cout << generatePlayerName() << endl;
	cout << generatePlayerName() << endl;
}