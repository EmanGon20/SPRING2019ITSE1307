// crmchp5ex4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	const int INTROWS = 6;
	const int INTCOLUMNS = 7;
	int intX = 6;
	int intY = 4;

	for (unsigned int intRow = 1;
		intRow <= INTROWS;
		intRow++) {
		
		cout << "Row: " << intRow << "\t";

		for (unsigned int intColumn = 1;
			intColumn <= INTCOLUMNS;
			intColumn++) {
			if (intRow == intX && intColumn == intY) {
				cout << "R ";
			}
			else {
				cout << "X ";
			}
		}
		cout << endl;
	};
    return 0;
}

