프로그래밍(네이밍) 표기법
프로그래밍 언어에서는 대소문자 구분
가독성과 연관
변수, 함수, 클래스 등의 이름을 정할 때 여러 개의 영단어를 사용할 때 각각의 단어를 구분
일반적인 문장 : unreal engine function variable

-Snake Case : UNREAL_ENGINE_FUNCTION_VARIABLE
-Kebab Case : unreal-engine-function-varialbe
-Camel Case : unrealEngineFunctionVariable
-Pascal Case : UnrealEngineFunctionVarialbe

프로그래밍언어 공부법 : 언어적특성, 명령, 수학적특성

## 명령어, 예약어

## 데이터 종류
### -숫자
#### 정수형
#### 실수형
### -문자

bit, byte
8bit == 1byte
-bit : 컴퓨터 데이터의 최소 단위
-byte : 컴퓨터 데이터 의미의 최소 단위

컴퓨터가 사용하는 숫자 진법 : 2진법(0, 1)
1bit -> 0,1 저장 가능 -> 2가지 저장 가능

대입연산 : =
리터럴 상수값을 변수에 대입

증감연산 :
-특정 정수 값의 크기만큼 증가, 감소 연산
- ++, --

논리연산 :
-참/거짓을 판단하는 연산
-AND && , OR || , NOT !

삼항연산 :
-조건식이 True면 앞의 값이 선택, False이면 뒤의 값이 선택

## 조건문 :
if(표현식){
  표현식이 참일 때 실행하는 부분
}
else if{

}
else{

}

switch(){
case1:
  실행문
  break;
case2:
  실행문
  break;
defalut:
  실행문
  break;
}

## for 구문
for(구문1; 구문2; 구문3)
구문1 : for 처음 실행될 때 한 번만 실행
구문2 : for 반복문이 실행될 때마다 조건을 비교
구문3 : 증감식

while
조건식이 참인 동안 반복 실행

do while
코드 블록을 한 번 실행한 후 조건 비교

# 클래스
- 객체 지향 프로그램의 대표적인 기법
- 구조체로부터 업그레이드된 기법
- 구조체 : 변수만으로 구성된 집합체
- 클래스 : 변수와 함수로 구성된 집합체

- 객체지향 프로그래밍의 특징
	- 추상화
	- 캡슐화
	- 정보은닉
	- 상속성
	- 다형성

- 클래스의 구성
	- 변수 : 멤버 변수(프로퍼티)
	- 함수 : 멤버 함수(메소드)

- 클래스의 의미
	- 클래스
		- 설계도	 
	- 객체(인스턴스) : 
		- 클래스를 통해서 생성된 실체

## 선언

### 구조체 선언
```
struct Car
{
	char Name[30];
	char Model[30];
	int Year;
	int TireSize;
	char Color;
}

void Drive(char name[30]){}
void Break(char name[30]){}
void Parking(char name[30]){}
void Rear(char name[30]){}

Car BMW = { "X7", "xDrive40i", 2023, 23, "Black" };
Car Jeep = { "Rubicon", "Moutain", 2021, 26, "Blue" };

cout << BMW.Year << endl;
Dirve(Rubicon);
```
#### 클래스 선언
```
class Car
{
	char Name[30];
	char Model[30];
	int Year;
	int TireSize;
	char Color;

	void Drive(){}
	void Break(){}
	void Parking(){}
	void Rear(){}
}

Car Sonata;

cout << Sonata.year << endl;
Sonata.Drive();

Car Ray;
cout << Ray.year << endl;
Ray.Drive();
```

## 생성자(Constructor)와 소멸자(Destructor)

### 생성자
- 클래스 타입의 변수가 생성될 때 초기화하는 함수
- 초기화 기능 : 초기화가 진행된 후 연계해서 다른 기능 동작
### 소멸자
- 클래스 쓰임새가 다했거나 프로그램 종료시 생성되었던 클래스를 해제함
- 소멸 기능 : 클래스 소멸이 진행된 후 연계해서 다른 기능 동작