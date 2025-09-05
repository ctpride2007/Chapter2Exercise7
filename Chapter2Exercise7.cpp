/*
*File: Chapter2Exercise7
*Programmer: Carter Pride
*Date: 09/25
*/
//Function: Write a C++ program to determine the amount that the current ocean level will rise in 5, 7, and 10 years. The level rises 1.5 millimeters per year.

#include <iostream>
using namespace std;
int main()
{
	double oceanlevel;
	double annualrateofrise = 1.5;
	double levelafter5years;
	double levelafter7years;
	double levelafter10years;


	cout << "Please enter the current ocean level in millimeters " << endl;
	cin >> oceanlevel;
	levelafter5years = oceanlevel + annualrateofrise * 5;
	levelafter7years = oceanlevel + annualrateofrise * 7;
	levelafter10years = oceanlevel + annualrateofrise * 10;

	cout << "The ocean level after 5 years will be " << levelafter5years << endl;
	cout << "The ocean level after 7 years will be " << levelafter7years << endl;
	cout << "The ocean level after 10 years will be " << levelafter10years << endl;
	//Here I realized that I did too much, so my asssignment will have un-needed information.
	cout << "The ocean level will be " << annualrateofrise * 5 << " millimeters higher after 5 years." << endl;
	cout << "The ocean level will be " << annualrateofrise * 7 << " millimeters higher after 7 years." << endl;
	cout << "The ocean level will be " << annualrateofrise * 10 << " millimeters higher after 10 years." << endl;

	return 1;
}

