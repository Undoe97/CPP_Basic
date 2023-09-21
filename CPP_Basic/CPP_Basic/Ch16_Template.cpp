#include <iostream>

using namespace std;

int SumNum(int a, int b) {
	int Sum = a + b;
	return Sum;
}

float SumNum(float a, float b) {
	float Sum = a + b;
	return Sum;
}

template <typename T>
T SumType(T a, T b) {
	return (a + b);
}

