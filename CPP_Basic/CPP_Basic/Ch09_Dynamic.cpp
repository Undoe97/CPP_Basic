#include <iostream>
using namespace std;

void DynamicVariable() { //메모리 동적 할당
	int* pNum = new int;
	char* pValue = new char;

	*pNum = 10;
	*pValue = 'a';

	cout << "pNum : " << pNum << endl;
	cout << "pValue : " << pValue << endl;

	cout << "*pNum : " << * pNum << endl;
	cout << "*pValue : " << * pValue << endl;

	delete pNum;
	delete pValue;

	int a[3] = { 1, 2 ,3 };
	int* pa = a;

	cout << a[0] << " = " << pa[0] << endl;

	int size = 3;
	int* pArray = new int[size];

	pArray[0] = 10;


	cout << "pArray[0] : " << pArray[0] << endl;

}


