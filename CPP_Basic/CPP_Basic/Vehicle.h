#pragma once
#include <iostream>
using namespace std;
class Vehicle {
	int Year;
	
public:
	int Price;
	//������ ����� ����
	//Default + Constructor
	Vehicle();
	Vehicle(int Year, int Price) {
		Year = Year;
		Price = Price;

		cout << "��� �ڵ��� ���� : ";
		PrintYear();
	}
	~Vehicle() {
		cout << "�Ҹ���" << endl;
	}
	void PrintYear();
	void PrintPrice();
	void EditYear(int newYear);


};