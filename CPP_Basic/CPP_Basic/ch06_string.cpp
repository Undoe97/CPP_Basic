#include<iostream>
#include<string>
using namespace std;

void String(){
  char a = 'a';
  char Hello[5] = {'H','E','L','L','O'};
  char World[6] = "WORLD"; // '\0' 문자가 마지막에 포함됨
  char b[] = "Hello World!";

  int Size = sizeof(b);
  for(int i=0; i<Size-1; i++){
    cout << b[i]+1 <<endl;
  }
}

void IndexChar(){
  string S;
  int i;
  cin >> S;
  cin >> i;

  cout << S[i-1];
  
}

void AlphaNumber(){
  char S[101];
  cin >> S;
  
  char alpha[] = "abcdefghijklmnopqrstuvwxyz";
  int alphaSize = sizeof(alpha)-1;

  int Check[alphaSize];
  for(int i=0; i<alphaSize; i++){
    Check[i] = -1;
  }
  
  for(int i=0; i<(sizeof(S)-1); i++){
    for(int j=0; j<(sizeof(alpha)-1); j++){
      if(S[i] == alpha[j]){
        if(Check[j] == -1){
        Check[j] = i;
        }
      }
    }
  }
  for(int i=0; i<30; i++){
    cout << Check[i] << " ";
    
  }
}