// crmRomanNumeral.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include "RomanNumeral.h"

int main()
{
	RomanNumeral objNumeral;
	RomanNumeral objNumeralTwo;
	objNumeral.set("MMIV");
	objNumeralTwo.set("MMIV");
	
    std::cout << objNumeral.getValue() << std::endl; 
	std::cout << objNumeral.isEqual(&objNumeralTwo);
}

