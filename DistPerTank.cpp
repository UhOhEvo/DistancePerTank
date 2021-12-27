// HEADER
/*Student Name: Thomas Sanger
Lab Assignment: Lab01_01
Project Name: Restuarant Bill
File Name: RestuarantBill.cpp
Description: Calculate the tax and tip of a dinner bill
Limitations or issues: Fixed values only, no user input
Credits: Instructor walked us through this in lab
*/

// Preprocessor directive placed here
#include <iostream>
using namespace std;

// Function prototypes placed here

// External variable declarations placed here

// Global variable declarations placed here

// Global constants declarations placed here

int main()
{
	// fixed variables
	float gasTank = 20;
	float cityMPG = 21.5;
	float hwyMPG = 26.8;

	// calculation variables
	double cityAvg;
	double hwyAvg;

	// calculations
	cityAvg = gasTank * cityMPG;
	hwyAvg = gasTank * hwyMPG;

	// print statements
	cout << "This program calculates miles per gallon for a fixed number of gallons.\n" << endl;
	cout << "A car has a 20 gallon fuel tank.\n";
	cout << "This car gets " << cityMPG << " miles per gallon in the city\nand " << hwyMPG << " miles per gallon on the highway. That means:\n" << endl;
	cout << "In town, the car can average a distance of\n" << cityAvg << " miles on a full tank.\n" << endl;
	cout << "On the highway, the car can average a distance of\n" << hwyAvg << " miles on a full tank.\n" << endl;



	system("pause");
	return 0;
}

/*
PROOF:

This program calculates miles per gallon for a fixed number of gallons.

A car has a 20 gallon fuel tank.
This car gets 21.5 miles per gallon in the city
and 26.8 miles per gallon on the highway. That means:

In town, the car can average a distance of
430 miles on a full tank.

On the highway, the car can average a distance of
536 miles on a full tank.

Press any key to continue . . .
*/