#include "cashFuncs.h"


double readPrice()
{
	double price;
	cin >> price;
	return price;
}

double readPay(double price)
{
	double pay;
	cin >> pay;
	return pay;
}

double readPayAgain(double price)
{
	static calls =0;
	calls++;
	if(calls >= 3) exit(0);
	return readPay(price);
	
}

currency makeChange(double pay, double price)
{
	currency chng;
	chng.pennies = chng.nickels = chng.dimes = chng.quarters = chng.dollars = 0;
	if( pay < price ) 
		throw paymentException("insufficient funds");
	else if(pay == price) throw noChangeException("No change needed");
	else
	{
		double dif = pay-price;
		chng.dollars = (int) dif;
		dif -= (double) dollars;
		dif *= 100;
		int temp = (int) dif;
		chng.quarters = temp / 25;
		temp %= 25;
		chng.dimes = temp / 10;
		temp %= 10;
		chng.nickels = temp / 5;
		temp %= 5;
		chng.pennies = temp;
	}
	return chng;
}

string printCurrency(currency c)
{
	string out;
	out.reserve(75);
	if(c.dollars) 	out += c.dollars  + " Dollars";
	if(c.quarters) 	out += ", " + c.quarters + " Quarters";
	if(c.dimes) 	out += ", " + c.dimes + " Dimes";
	if(c.nickels)	out += ", " + c.nickels + " nickels";
	if(c.pennies)	out += ", " + c.pennies + " pennies";
	return out;
}