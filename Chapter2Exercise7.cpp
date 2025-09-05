/*
*File: Chapter2Exercise7
*Programmer: Carter Pride
*Date: 09/25
*/
//Write a C++ program to determine the amount that the current ocean level will rise in 5, 7, and 10 years. The level rises 1.5 millimeters per year.

#include <iostream>
using namespace std;
int main()
{
	double oceanlevel;
	double annualrateofrise = 1.5;
	double levelafter5years = oceanlevel + annualrateofrise * 5;
	double levelafter7years = oceanlevel + annualrateofrise * 7;
	double levelafter10years = oceanlevel + annualrateofrise * 10;

	cout << "Please enter the current ocean level in millimeters" << endl;
	cin >> oceanlevel;
	cout << "The ocean level after 5 years will be" << levelafter5years << endl;
	cout << "The ocean level after 7 years will be" << levelafter7years << endl;
	cout << "The ocean level after 10 years will be" << levelafter10years << endl;
	return 1;
}

