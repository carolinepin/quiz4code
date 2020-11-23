#ifndef THINGS_H
#define THINGS_H

#include <iostream>
#include "CarbonFootprint.h"

class Building : public CarbonFootprint { 
private:
	double electricty;
	double hoursOpperated; 
public:
	Building();
	double findKWH();
	double getCarbonFootPrint()  override;
};

class Car :public CarbonFootprint {
private:
	double MilesPerGallon;
	double MilesDrivenToday;
public:
	Car();
	double getGallonsPerDay();
	double getCarbonFootPrint() override;
};

class Bike : public CarbonFootprint {
private:
	double bikingSpeed;
	double BikeTripDuration;
public:
	Bike();
	double milesRode();
	double getCarbonFootPrint() override;
};

#endif