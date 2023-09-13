#include<iostream>

using namespace std;

void Receipt(){

  int TotalPrice, TotalCount, Price, Count; 
  int SumPrice = 0;

  cin >> TotalPrice;
  cin >> TotalCount;

  for(int i=0; i<TotalCount; i++){
    cin >> Price >> Count;
    SumPrice += Price * Count;
  }

  cout << ( (TotalPrice == SumPrice) ?  "Yes" : "No");
  
}

void Star(){
  int Count = 0;
  cin >> Count;

  for (int i = 1; i <= Count; i++) {
	 for (int j = 1; j <= i; j++) {
		cout << '*';
	 }
	 cout << "\n";
  }

  for (int i = 1; i <= Count; i++) {
	  for (int j = 1; j <= Count - i; j++) {
		cout << ' ';
	  }
	  for (int k = 1; k <= i; k++) {
		cout << '*';
    }
	 cout << "\n";
  }
  
}