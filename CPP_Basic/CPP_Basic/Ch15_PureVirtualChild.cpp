#include <iostream>
#include "Ch15_PureVirtualChild.h"
using namespace std;

void PureVirtualChild::Print() {

	cout << "Pure Virtual Child Class" << endl;
}

void PureVirtualChild::PrintClass() {
	cout << "Pure Virtual Parent Override" << endl;
}