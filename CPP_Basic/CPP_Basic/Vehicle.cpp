#include <iostream>
#include "Vehicle.h"
using namespace std;

Vehicle::Vehicle() {
	cout << "Vehicle" << endl;
}


void Vehicle::PrintYear(){
	cout << Year << endl;
}

void Vehicle::PrintPrice() {
	cout << Price << endl;

}

void Vehicle::EditYear(int newYear) {
	Year = newYear;
}