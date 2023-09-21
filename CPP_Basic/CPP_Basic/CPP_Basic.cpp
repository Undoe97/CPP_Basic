#include <iostream>
#include <string>
#include "CPP_Basic.h"
#include "Ch10_Class.h"
#include "Vehicle.h"
#include "Animal.h"
#include "Bike.h"
#include "Atv.h"
#include "Arithmatic.h"
#include "Auto.h"
#include "Ch14_VirtualParent.h"
#include "Ch14_VirtualChild.h"
#include "Ch15_PureVirtualChild.h"
#include "Ch15_PureVirtualChild.h"
using namespace std;

//class 동적 선언
int main()
{
	/*
	//자식 클래스 생성
	Atv Moto;
	//상속받은 Bike 클래스의 멤버
	Moto.PrintTire();
	cout << Moto.Price << endl;
	//Atv 클래스 멤버
	Moto.PrintPrice();

	//함수 오버로딩
	Arithmatic Expression;
	Expression.Sum(10);
	Expression.Sum(10.123f);
	Expression.Sum(60, 70);
	
	//함수 오버라이딩
	Moto.Print();
	//생성자가 명시적으로 선언
	//자식 클래스 선언 : 명시적 선언
	Auto Mobile();
	*/

	//ArrayClass();
	//StringClass();
	//VectorClass();

	//VirtualParent* Parent = new VirtualParent;
	//VirtualChild* Child = new VirtualChild;

	//Parent->PrintClass();
	//Child->PrintClass();
	//Parent = Child;
	//Parent->PrintClass();

	//PureVirtualChild PureChild;
	//PureChild.Print();
	//PureChild.PrintClass();

	cout << SumNum(3, 2) << endl;
	cout << SumNum(3.231f, 5.645f) << endl;
	cout << SumType(3, 9) << endl;


}


