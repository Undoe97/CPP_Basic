#include<iostream>
#include<string>
using namespace std;

void StringClass() {
	string Text1 = "Hello World!";
	string Text2 = "Hello Happy World!";

	cout << (Text1 < Text2) << endl;
	cout << (Text1 > Text2) << endl;
	cout << (Text1 == Text2) << endl;
	cout << (Text1 + Text2) << endl;

	cout << Text1.append(Text2) << endl;
}