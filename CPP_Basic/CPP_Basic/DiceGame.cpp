#include <iostream>

using namespace std;

void Dice(int a, int b, int c, int d) {
	int DiceNumber[4] = { a, b, c, d };
	int temp;

	for (int i = 4; i > 0; i--) {
		for (int j = 0; j < i; i++) {
			if (temp = DiceNumber[j] > DiceNumber[j + 1]) {
				temp = DiceNumber[j];
				DiceNumber[j] = DiceNumber[j + 1];
				DiceNumber[j + 1] = temp;
			}
		}
	}

	for (int i = 0; i < 4; i++) {
		cout << DiceNumber[i] << " : ";
	}
	

}