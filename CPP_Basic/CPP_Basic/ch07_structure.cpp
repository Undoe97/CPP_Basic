#include<iostream>
using namespace std;
 
void Structure(){

  struct inflatable{
    char name[20];
    float volume;
    double price;
  };
  inflatable People = { "Tom", 0.75, 15.235 };

  struct sesac{
  char name[20];
  char address[100];
  int age;
  };

  sesac Banjang;
  Banjang = { "Jane", "서울시", 25 };
}

void ChangeValue(int a){
  a = 0;
}

int ChangeValue2(){
  return 0;
}

int c = 10;
void CallByValue(){
  ChangeValue(c);
  c = ChangeValue2();
}

void Enum(){
  //enum : 열거형 데이터 타입
  enum day {Sun, Mon, Tue, Wed, Thu, Fri, Sat}; //열거형 상수

  day DayName;

  DayName = Mon;

  cout << DayName << endl;

  
}

void TwoDimetion(){
  int number[3][2] = {{1, 2},{3 ,4},{5, 6}};

  cout << number[0][0];
  cout << number[2][1];

  for(int i=0; i<3; i++){
    for(int j=0; j<2; j++){
      cout << number[i][j] << endl;
    }
  }
  
}