#pragma once
#include <string>
#include <iostream>

class Contact
{
public:
	Contact();
	~Contact();
private:
	std::string strFirstName;
	std::string strLastName;
	std::string strPhoneNumber;
public:
	void setFirstName(std::string strpFirstName);
	std::string getFirstName();
	void inputFirstName();
	void setLastName(std::string strpLastName);
	std::string getLastName();
	void inputLastName();
	void input();
	std::string toString();
};

