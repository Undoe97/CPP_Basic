#include<iostream>

using namespace std;

void Calcu(){
  int arith1 = 10;
  int arith2 = 20;

  int Sum = arith1 + arith2;
  int Sub = arith1 - arith2;
  int Mul = arith1 * arith2;
  int Div = arith1 / arith2;
  int Rest = arith1 % arith2;
  cout << Sum << endl
       << Sub << endl
       << Mul << endl
       << Div << endl
       << Rest << endl;
}
void PlusMinus(){
  int Increase = 0; //초기화
  int Decrease = 10;

  Increase = Increase + 1; // Increase += 1;
  Decrease = Decrease - 2; // Decrease -= 2;

  // Count : 개수, 1씩 증가 or 감소
  Increase++;
  Decrease--;
}
void Compare(){
  int Greater = 30;
  int Less = 10;
  //비교연산의 경우 결과값은 참 or 거짓
  cout << (Greater > Less) << endl;
  cout << (Greater < Less) << endl;

  cout << (true && true) << endl;
  cout << (true && false) << endl;

  cout << (true || true) << endl;
  cout << (true || false) << endl;
}
void Bit(){
  int Kor = 80;
  int Eng = 95;
  cout << (Kor >= 90 && Eng >= 90) << endl;

  int Bit1 = 15; // 00001111
  int Bit2 = 20; // 00010100

  int BitAnd = Bit1 & Bit2; // 00000100
  cout << BitAnd << endl;

  cout << (Bit1 << 1) << endl; // 00011110

  cout << (3 > 5 ? "Hello" : "Bye") << endl;
}