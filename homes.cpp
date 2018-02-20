#include "house.h"
using namespace std;

void printHouse(House);

int main()
{
	//Create an instance of the House class using default ctor
	House h1;
	
	//Create a 2nd instance providing values for color, bed etc
	House h2("Tan", 3, 2, 2500);
	
	printHouse(h1);
	printHouse(h2);
	h2.setColor("White");
	h2.setNumBath(3);
	h2.setNumBed(4);
	h2.setSqFt(3500);
	printHouse(h2);
	return 0;
}

void printHouse(House house)
{
	//Print the house info using the dot operator
	cout << "\nHouse Color: " << house.getColor()
		<< "\nNumber Bathrooms: "<< house.getNumBath()
		<<"\nNumber Bedrooms: "<< house.getNumBed()
		<<"\nTotal Square Feet: "<< house.getSqFt() << "\n\n";
}