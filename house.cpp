	#include "house.h"
	
	House::House()
	{
		houseColor = "Blue";
		numBathrooms = 1;
		numBedrooms = 2;
		squareFeet = 900;
		
	}
	
	House::House(string color, int numbath, int numBeds, double sqFt)
	{
		House::houseColor = color;
		House::numBathrooms = numbath;
		House::numBedrooms = numBeds;
		House::squareFeet = sqFt;
	}
	
	//destructor
	House::~House()
	{
		cout << "\nIn the Destructor... ";
	}
	
	//accessor methods
	string House::getColor() { return House::houseColor;}
	int House::getNumBath() { return House::numBathrooms;}
	int House::getNumBed() { return House::numBedrooms;}
	double House::getSqFt(){ return House::squareFeet;}

	//mutator methods
	void House::setColor(string c)
	{
		House::houseColor = c;
	}

	void House::setNumBath(int bath)
	{
		House::numBathrooms = bath;
	}
	
	void House::setNumBed(int bed)
	{
		House::numBedrooms = bed;
	}
	
	void House::setSqFt(double sqft)
	{
		House::squareFeet = sqft;
	}