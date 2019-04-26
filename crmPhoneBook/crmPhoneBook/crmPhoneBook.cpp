// crmPhoneBook.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include "Contact.h"
#include "PhoneBook.h"

void printMenu() {
	std::cout << "Welcome to Phone Book" << std::endl;
	std::cout << "=====================" << std::endl;
	std::cout << "(a)dd a contact" << std::endl;
	std::cout << "(e)dit a contact" << std::endl;
	std::cout << "(d)elete a contact" << std::endl;
	std::cout << "(p)rint contacts" << std::endl;
	std::cout << "e(x)terminate all contacts" << std::endl;
	std::cout << "(q)uit" << std::endl;
}

int getIndex(PhoneBook objpPhoneBook) {
	objpPhoneBook.printContacts();
	int intIndex = 0;
	do {
		std::cout << "Please enter the number next to the contact: ";
		std::cin >> intIndex;
	} while (intIndex <= 0);
	return intIndex;
}

int main()
{
	PhoneBook objPhoneBook;
	Contact objContact;
	char chrMenuChoice = ' ';
	int intContact = 0;

	do {
		printMenu();
		std::cin >> chrMenuChoice;
		chrMenuChoice = tolower(chrMenuChoice);
		switch (chrMenuChoice) {
		case 'a':
			objContact.input();
			objPhoneBook.addContact(objContact);
			break;
		case 'e':
			intContact = getIndex(objPhoneBook);
			intContact--;
			objPhoneBook.editContact(intContact);
			break;
		case 'd':
			intContact = getIndex(objPhoneBook);
			intContact--;
			objPhoneBook.deleteContact(intContact);
			break;
		case 'p':
			objPhoneBook.printContacts();
			break;
		case 'q':
			//TO NOTHING
			break;
		case 'x':
			objPhoneBook.clearContacts();
			break;
		default:
			std::cerr << "Invalid Input";
			break;
		}

	} while (chrMenuChoice != 'q');

}