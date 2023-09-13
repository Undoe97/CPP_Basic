#include<iostream>

using namespace std;

void InputOutput(){
  int num;
  cin >> num;
  cout << num << endl; //end line
}
void Const(){
  int value1 = 100;
  value1 = 200;

  int const value2 = 200;
  // value2 = 100;

  short Num1 = 10; // 2^16
  int Num2 = 20;   // 2^32
  long Num3 = 30;  // 2^64

  cout << Num1 << Num2 << Num3 << endl;
}
void DataType(){
   //실수형 데이터
  float Num4 = 1.0f;
  double Num5 = 3.1415926535;

  cout << Num4 << Num5 << endl;

  //문자형 데이터
  //문자 한 개는 ''로 문자 여러 개는 ""로
  char Text1;
  char Text2;
  Text1 = 'D';
  Text2 = 'O';

  cout << Text1 << Text2 << endl;

  bool condition1, condition2;
  condition1 = -3;
  condition2 = false;
  cout << condition1 << endl << condition2 << endl;
}