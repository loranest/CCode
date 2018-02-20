#include <iostream>
using namespace std;

struct
{
	int pennies, nickels, dimes, quarters, dollars;
} currency;

double readPrice();

double readPay(double price);

double readPayAgain(double price);

currency makeChange(double pay, double price);

string printCurrency(currency c);

void saleMade(double price);
