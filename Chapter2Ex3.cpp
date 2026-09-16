// Name: Logen Wolfe
// Date: 9/16/2026
// Program: Chapter2Ex3.cpp
// Description: Write a program that computes the sales tax and total price on a $95 purchase.
// Assume the state sales tax is 6.5 percent and the county sales tax is 2 percent.
// Display the purchase price, total tax, and total price on the screen.

#include <iostream>
#include <iomanip>

using namespace std;


int main()
{
	double StatesTax;
	double CountryTax;
	double TotalTax;
	double TotalPrice;
	double PurchasePrice;


		PurchasePrice = 95.00;
		StatesTax = 0.065;
		CountryTax = 0.02;
		TotalTax = PurchasePrice * (StatesTax + CountryTax);
		TotalPrice = PurchasePrice + TotalTax;




		cout << "Purchase Price: $" << PurchasePrice << endl;
		cout << "Total Tax: $" << TotalTax << endl;
		cout << "Total Price: $" << TotalPrice << endl;
		cout << "Always make sure to look closely at prices! Nowadays, taxes are a pain.." << endl;

		return 0;
}

