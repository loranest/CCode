#ifndef HOUSE_H
#define HOUSE_H
#include <string>
#include <iostream>
using namespace std;

class House
{
private:
	string houseColor;
	int numBathrooms;
	int numBedrooms;
	double squareFeet;
	
public:
	//constructors
	House();
	House(string, int, int, double);
	
	//destructor
	~House();
	
	//accessor methods
	string getColor();
	int getNumBath();
	int getNumBed();
	double getSqFt();
	
	//mutator methods
	void setColor(string);
	void setNumBath(int);
	void setNumBed(int);
	void setSqFt(double);
};

#endif //HOUSE_H
	
	