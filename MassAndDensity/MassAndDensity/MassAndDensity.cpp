// Jeremy Harrell
// ITSE 1307
// Programming Problem mass and density 
// Programming density to do Mass over Volume 

#include "stdafx.h"
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;


int main()
{
	//Setting up the mass and volume
	double mass = 1;
	double volume = 1;
	double density = mass / volume;

	//setting up the input 
	cout << "Enter Mass: ";
	cin >> mass;

	cout << "Enter Volume: ";
	cin >> volume; 

	//calculating the density 
	cout << "The Density is: " << mass / volume << endl;
	
    return 0;
}

