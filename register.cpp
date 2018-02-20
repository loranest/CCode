#include "cashFuncs.h"

int main()
{
	double price = 0.0; 
	double a[100];
	int i = 0;
	while(true)
	{
		cout << "\nScan Price (-1 to quit): ";
		price = readPrice();
		if(price >= 0.0)
		{
			a[i] = price;
			i++;
		}
		else 
		{
			price = 0.0;
			break;
		}
	}
	double temp  = 0.0;
	if(i > 0)
	{
		for(int j = 0; j < i ; j++) temp += a[j];	
	}
	
	price += temp;
	cout << "\nYour total bill: $" << std::fixed << std::setprecision(2) << std::setfill('0') << price << endl;
	double payment;
	cout << "\nHow much are you paying? ";
	try
	{
		payment = readPay(price);
	}
	catch (const paymentException& e)
	{
		char cancel = 'n';
		cout << "\nInsuficient funds would you like to cancel (y or n)? ";
		cin >> cancel;
		if(cancel == 'y')
		{
			cout << "\nOrder canceled.\nCall for items return to shelves\n\n";
			exit(0);
		}
		else readPayAgain(price);
	}
	catch (const noChangeException& e)
	{
		saleMade(price);
		return 0;
	}
	
}