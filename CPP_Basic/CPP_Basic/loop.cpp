#include <iostream>

using namespace std;

void ForWord(){
  //i 변수를 쓰는 이유 : integer, iterable
  for(int i=0; i<10; i++){
    cout << i;
  }
  cout << endl;
  int StepSum = 0;
  for(int i=1; i <= 10; i++){
    StepSum +=i;
  }
  cout << StepSum << endl;

  for(int i=2; i<=3; i++){
    for(int j=1; j<=9; j++){
      cout << i << " X " << j << " = " << i*j << endl;
    }
  }
}
void Password(){
  int IdNumber = 1234;
  int InputId = 0;
  while(true){
    cout << "비밀번호를 입력하세요 : ";
    cin >> InputId;

    if(InputId == IdNumber){
      cout << "로그인 성공" << endl;
      break;
      
    }
    else{
      cout << "다시 입력하세요" << endl;
    }
  }

}
int GuGuDan(int Dan){
  int result = 0;
  
  for(int i=1; i<=9; i++){
    result += Dan * i;
  }
  return result;
}

void VarScope(int Number){
  int FunctionValue = 20;
  if(true){
    int BlockValue = 30;
    //cout << "전역변수값 : " << GlobalValue << endl;
    cout << "함수지역변수값 : " << FunctionValue << endl;
    cout << "블록지연변수값 : " << BlockValue << endl;
    cout << "파라미터값 : " << Number << endl;
  }
 // cout << "전역변수값 : " << GlobalValue << endl;
  cout << "함수지역변수값 : " << FunctionValue << endl;
  //cout << "블록지연변수값 : " << BlockValue << endl;
  cout << "파라미터값 : " << Number << endl;
}