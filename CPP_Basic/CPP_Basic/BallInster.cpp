#include <iostream>
using namespace std;

void BallInsert() {
	int BasketCount;
	cout << "�ٱ����� ������ �Է� : ";
	cin >> BasketCount;

	int InsertCount;
	cout << "�� �ִ� Ƚ���� �Է� : ";
	cin >> InsertCount;

	int* pBasket = new int[BasketCount];
	for (int i = 0; i < BasketCount - 1; i++) {
		pBasket[i] = 0;
	}
	int StartBasketNumber, EndBasketNuber, BallNumber;

	

	for (int i = 0; i < InsertCount; i++) {
		cout << "���� �ٱ��� ��ȣ : ";
		cin >> StartBasketNumber;
		cout << "�� �ٱ��� ��ȣ : ";
		cin >> EndBasketNuber;
		cout << "���� �� ��ȣ : ";
		cin >> BallNumber;

		for (int j = StartBasketNumber-1; j <= EndBasketNuber-1; j++) {
			pBasket[j] = BallNumber;
		}
	}

	for (int i = 0; i < BasketCount; i++)
	{
		cout << pBasket[i] << " ";
	}
}

void BallSwap() {
	int BasketCount;
	cout << "�ٱ����� ������ �Է� : ";
	cin >> BasketCount;

	int InsertCount;
	cout << "�� �¹ٲٴ� Ƚ���� �Է� : ";
	cin >> InsertCount;

	int* pBasket = new int[BasketCount];
	for (int i = 0; i < BasketCount; i++) {
		pBasket[i] = i+1;
	}
	int LeftBasketNumber, RightBasketNuber, temp;

	for (int i = 0; i < InsertCount; i++) {
		cout << "���� �ٱ��� ��ȣ : ";
		cin >> LeftBasketNumber;
		cout << "������ �ٱ��� ��ȣ : ";
		cin >> RightBasketNuber;
		
		//swap
		temp = pBasket[LeftBasketNumber-1];
		pBasket[LeftBasketNumber-1] = pBasket[RightBasketNuber-1];
		pBasket[RightBasketNuber-1] = temp;


	}

	for (int i = 0; i < BasketCount; i++)
	{
		cout << pBasket[i] << " ";
	}
}

