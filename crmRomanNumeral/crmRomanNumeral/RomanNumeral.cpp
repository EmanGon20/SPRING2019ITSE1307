#include "pch.h"
#include "RomanNumeral.h"


RomanNumeral::RomanNumeral()
{
	dblNumeral = 0.0f;
}


RomanNumeral::~RomanNumeral()
{
	dblNumeral = 0.0f;
}


std::string RomanNumeral::toString()
{
	return "";
}


float RomanNumeral::getValue()
{
	return this->dblNumeral;
}


std::string RomanNumeral::getString()
{
	return this->toString();
}


void RomanNumeral::set(float dblpNumber)
{
	if (dblpNumber < 0.0f) {
		dblpNumber = 0.0;
	}
	this->dblNumeral = dblpNumber;
}


void RomanNumeral::set(std::string strNumber)
{
	//"MMIV"
	 
	double dblSum = 0.0;
	double dblCurrent = 0.0;
	double dblLast = 1000.0;
	for (int intIndex = 0; intIndex < strNumber.size(); intIndex++) {
		switch (strNumber.at(intIndex)) {
			case 'M':
				dblCurrent = 1000;
				break;
			case 'V':
				dblCurrent = 5;
				break;
			case 'I':
				dblCurrent = 1;
				break;
		}
		if (dblLast < dblCurrent)
		{
			dblSum -= dblLast;
			dblSum += dblCurrent - dblLast;
		}
		else {
			dblSum += dblCurrent;
		}
		//std::cerr << "Pre:: L: " << dblLast << " C: " << dblCurrent << " S: " << dblSum << std::endl;
		dblLast = dblCurrent;
		//std::cerr << "Post:: L: " << dblLast << " C: " << dblCurrent << " S: " << dblSum << std::endl;
	}
	set(dblSum);
}


bool RomanNumeral::isEqual(RomanNumeral *objpOther)
{
	return (this->getValue() == objpOther->getValue());
}
