#include<iostream>

using namespace std;

void BubbleSort(){
  int Number[10] = {3, 9, 2, 4, 5, 7, 8, 1, 10, 6};
  int temp;
  
  for(int i=9; i>0; i--){
    for(int j=0; j<i; j++){
      if(Number[j] < Number[j+1]){
        temp = Number[j];
        Number[j] = Number[j+1];
        Number[j+1] = temp;
      }
    }
  }
  for(int i=0; i<10; i++){
    cout << Number[i] << " ";
  }

  
}