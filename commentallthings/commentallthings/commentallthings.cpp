// commentallthings.cpp : Defines the entry point for the console application.
//
/*
Chris MacDougald
ITSE-1307 Spring 2019
20190205

	This program is designed to demonstrate the various aspects of comments.

	Pseudo Code:
		Display some output on the screen to demonstrate point of exercise.

	*/

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	//General code comment for an block of code
	cout << "Example Output for Comments" << endl; //Inline for point to an exact line
	cout << "===========================" << endl;

/*
	cout << "Example Output for Comments" << endl; //Inline for point to an exact line
	cout << "===========================" << endl;
//*/

// /*
	cout << "Example Output for Blocked Comments" << endl; //Inline for point to an exact line
	cout << "===================================" << endl;
// */
    return 0;
}

