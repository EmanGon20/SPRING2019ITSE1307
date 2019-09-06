#include "pch.h"
#include "Contact.h"


Contact::Contact()
{
}

// Quick Comment


Contact::~Contact()
{
}


void Contact::setFirstName(std::string strpFirstName)
{
	if (strpFirstName.length() <= 0) {
		strpFirstName = "First";
	}
	strFirstName = strpFirstName;
}


std::string Contact::getFirstName()
{
	return strFirstName;
}


void Contact::inputFirstName()
{
	std::string strInputFirstName = "";
	do {
		std::cout << "Please enter a first name: ";
		std::cin >> strInputFirstName;
	} while (strInputFirstName.length() < 1);
	setFirstName(strInputFirstName);
}


void Contact::setLastName(std::string strpLastName)
{
	if (strpLastName.length() <= 0) {
		strpLastName = "Last";
	}
	strLastName = strpLastName;
}


std::string Contact::getLastName()
{
	return strLastName;
}


void Contact::inputLastName()
{
	std::string strInputLastName = "";
	do {
		std::cout << "Please enter a Last name: ";
		std::cin >> strInputLastName;
	} while (strInputLastName.length() < 1);
	setLastName(strInputLastName);
}

std::string Contact::toString()
{
	std::string strDelimiter = ", ";
	std::string strOutput = "";
	strOutput += getFirstName() + strDelimiter;
	strOutput += getLastName() + strDelimiter;
	strOutput += getFirstName();
	return strOutput;
}

void Contact::input() {
	this->inputFirstName();
	this->inputLastName();
}
