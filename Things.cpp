#include <iostream>
#include "Things.h"
using namespace std;

Building::Building()
{
	electricty = 30000;
	hoursOpperated = 24;
}

double Building::findKWH()
{
	return electricty * hoursOpperated/1000;
}

double Building::getCarbonFootPrint()
{
	cout << "Average wattage a house uses: " << this->electricty << endl;
	cout << "Average hours has power : " << this->hoursOpperated << endl;
	cout << "Pounds of Carbond Dioxide Emitted: " << this->findKWH()* 1.004;
	return this->findKWH() * 1.004;
}

Car::Car()
{
	MilesPerGallon = 24.9;
	MilesDrivenToday = 50;
}

double Car::getGallonsPerDay()
{
	return MilesDrivenToday/MilesPerGallon;
}

double Car::getCarbonFootPrint()
{
	cout << "A car's Average Miles Per Gallon: " << this->MilesPerGallon << endl;
	cout << "Average Miles Driven in a day: " << this->MilesDrivenToday << endl;
	cout << "Pounds of Carbond Dioxide Emitted: " << this->getGallonsPerDay() * 19.64;
	return this->getGallonsPerDay() * 19.64;
}

Bike::Bike()
{
	bikingSpeed = 13;
	BikeTripDuration = 2;
}

double Bike::milesRode()
{
	return bikingSpeed*BikeTripDuration;
}

double Bike::getCarbonFootPrint()
{
	cout << "Average biking speed in miles per hour: " << this->bikingSpeed << endl;
	cout << "How long a person usually bikes per day: " << this->BikeTripDuration << endl;
	cout << "Pounds of Carbond Dioxide Emitted: " << this->milesRode() * 0.440925;
	return this->milesRode() * 0.440925;
}

