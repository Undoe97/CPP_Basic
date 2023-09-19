#pragma once
#include <iostream>
using namespace std;
class Vehicle {
	int Year;
	
public:
	int Price;
	//생성자 명시적 선언
	//Default + Constructor
	Vehicle();
	Vehicle(int Year, int Price) {
		Year = Year;
		Price = Price;

		cout << "출고 자동차 연식 : ";
		PrintYear();
	}
	~Vehicle() {
		cout << "소멸자" << endl;
	}
	void PrintYear();
	void PrintPrice();
	void EditYear(int newYear);


};