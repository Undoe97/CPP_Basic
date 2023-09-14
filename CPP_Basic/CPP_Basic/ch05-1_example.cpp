#include<iostream>
using namespace std;

void CountNumber(){
  int Counter = 0;
  cout << "숫자 개수를 입력하세요 : ";
  cin >> Counter;

  //int Number[Counter];
  int* pNumber = new int[Counter];
      for(int i=0; i<Counter; i++){
        cout << "수 데이터를 입력해주세요 : ";
        cin >> pNumber[i];
  }
  int FindNumber;
      cout << "찾을 수를 입력해주세요 : ";
      cin >> FindNumber;

  int FindCount = 0;
      for(int i=0; i<Counter; i++){
        if(FindNumber == pNumber[i]){
          FindCount++;
        }
      }
      cout << "찾는 수의 개수는  " << FindCount << "개 입니다.";
}

void MissingNumber(){
  
  
}