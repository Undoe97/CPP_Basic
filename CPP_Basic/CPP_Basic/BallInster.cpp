#include <iostream>
using namespace std;

void BallInsert() {
	int BasketCount;
	cout << "바구니의 개수를 입력 : ";
	cin >> BasketCount;

	int InsertCount;
	cout << "공 넣는 횟수를 입력 : ";
	cin >> InsertCount;

	int* pBasket = new int[BasketCount];
	for (int i = 0; i < BasketCount - 1; i++) {
		pBasket[i] = 0;
	}
	int StartBasketNumber, EndBasketNuber, BallNumber;

	

	for (int i = 0; i < InsertCount; i++) {
		cout << "시작 바구니 번호 : ";
		cin >> StartBasketNumber;
		cout << "끝 바구니 번호 : ";
		cin >> EndBasketNuber;
		cout << "넣을 공 번호 : ";
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
	cout << "바구니의 개수를 입력 : ";
	cin >> BasketCount;

	int InsertCount;
	cout << "공 맞바꾸는 횟수를 입력 : ";
	cin >> InsertCount;

	int* pBasket = new int[BasketCount];
	for (int i = 0; i < BasketCount; i++) {
		pBasket[i] = i+1;
	}
	int LeftBasketNumber, RightBasketNuber, temp;

	for (int i = 0; i < InsertCount; i++) {
		cout << "왼쪽 바구니 번호 : ";
		cin >> LeftBasketNumber;
		cout << "오른쪽 바구니 번호 : ";
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

