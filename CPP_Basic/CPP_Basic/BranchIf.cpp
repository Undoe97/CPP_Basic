#include <iostream>

using namespace std;

void OvenTimer(){
  
  int H, M, T;
  cin >> H >> M;
  cin >> T;

  H += T / 60;
  M += T % 60;

  if(M >= 60){
    H++;
    M -= 60;
  }
  if(H >= 24){
    H -= 24;
  }
  cout << H << " " << M << endl;
}

void Dice(){

  int A, B, C;
  cin >> A >> B >> C;

  if(A == B && B == C){
    cout << 10000 + A * 1000 << endl;
  }
  else if(A == B || A == C){
    cout << 1000 + A * 1000 << endl;
  }
  else if(B == C){
    cout << 1000 + B * 1000 << endl;
  }
  else{
    cout << max(max(A, B), C) << endl;
  }
}
