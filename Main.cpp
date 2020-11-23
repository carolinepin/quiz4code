#include <iostream>
#include "Things.h"
using namespace std;

int main() {
	double total = 0;
	Building YourBuilding;
	Car YourCar;
	Bike YourBike;
	Building* UrBuildingPtr = &YourBuilding;
	Car* UrCarPtr = &YourCar;
	Bike* UrBikePtr = &YourBike;
	CarbonFootprint* YourImpact[3] = { UrBuildingPtr, UrCarPtr,UrBikePtr };
	cout << "These are the statistics for a person's impact in pounds of CO2" << endl;
	for (int i = 0; i < 3; i++) {
		cout << endl;
		total = total + YourImpact[i]->getCarbonFootPrint();
		cout << endl;
	}

	cout << endl << endl<< "\tTotal CO2 a human produces on average: "<< total << endl;

};