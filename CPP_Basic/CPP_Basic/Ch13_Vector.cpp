#include <iostream>
#include <vector>
using namespace std;
void VectorClass() {

	vector<int> vd1; // 배열 생성 : 원소 개수, 내용 모두 지정되지 않음
	vector<int> vd2(3); // 원소 개수 지정됨
	vector<int> vd3(3, 2); // 원소 개수와 내용 모두 지정됨
	
	vd1.push_back(10);
	cout << vd1.front() << endl;
	vd1.push_back(55);
	cout << vd1[1] << endl;
	vd1.push_back(77);
	cout << vd1.size() << endl;
	vd1.pop_back();
	cout << vd1.size() << endl;
	cout << vd1.back() << endl;
	cout << vd1.capacity() << endl;

}