���α׷���(���̹�) ǥ���
���α׷��� ������ ��ҹ��� ����
�������� ����
����, �Լ�, Ŭ���� ���� �̸��� ���� �� ���� ���� ���ܾ ����� �� ������ �ܾ ����
�Ϲ����� ���� : unreal engine function variable

-Snake Case : UNREAL_ENGINE_FUNCTION_VARIABLE
-Kebab Case : unreal-engine-function-varialbe
-Camel Case : unrealEngineFunctionVariable
-Pascal Case : UnrealEngineFunctionVarialbe

���α׷��־�� ���ι� : �����Ư��, ���, ������Ư��

## ��ɾ�, �����

## ������ ����
### -����
#### ������
#### �Ǽ���
### -����

bit, byte
8bit == 1byte
-bit : ��ǻ�� �������� �ּ� ����
-byte : ��ǻ�� ������ �ǹ��� �ּ� ����

��ǻ�Ͱ� ����ϴ� ���� ���� : 2����(0, 1)
1bit -> 0,1 ���� ���� -> 2���� ���� ����

���Կ��� : =
���ͷ� ������� ������ ����

�������� :
-Ư�� ���� ���� ũ�⸸ŭ ����, ���� ����
- ++, --

������ :
-��/������ �Ǵ��ϴ� ����
-AND && , OR || , NOT !

���׿��� :
-���ǽ��� True�� ���� ���� ����, False�̸� ���� ���� ����

## ���ǹ� :
if(ǥ����){
  ǥ������ ���� �� �����ϴ� �κ�
}
else if{

}
else{

}

switch(){
case1:
  ���๮
  break;
case2:
  ���๮
  break;
defalut:
  ���๮
  break;
}

## for ����
for(����1; ����2; ����3)
����1 : for ó�� ����� �� �� ���� ����
����2 : for �ݺ����� ����� ������ ������ ��
����3 : ������

while
���ǽ��� ���� ���� �ݺ� ����

do while
�ڵ� ����� �� �� ������ �� ���� ��

# Ŭ����
- ��ü ���� ���α׷��� ��ǥ���� ���
- ����ü�κ��� ���׷��̵�� ���
- ����ü : ���������� ������ ����ü
- Ŭ���� : ������ �Լ��� ������ ����ü

- ��ü���� ���α׷����� Ư¡
	- �߻�ȭ
	- ĸ��ȭ
	- ��������
	- ��Ӽ�
	- ������

- Ŭ������ ����
	- ���� : ��� ����(������Ƽ)
	- �Լ� : ��� �Լ�(�޼ҵ�)

- Ŭ������ �ǹ�
	- Ŭ����
		- ���赵	 
	- ��ü(�ν��Ͻ�) : 
		- Ŭ������ ���ؼ� ������ ��ü

## ����

### ����ü ����
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
#### Ŭ���� ����
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

## ������(Constructor)�� �Ҹ���(Destructor)

### ������
- Ŭ���� Ÿ���� ������ ������ �� �ʱ�ȭ�ϴ� �Լ�
- �ʱ�ȭ ��� : �ʱ�ȭ�� ����� �� �����ؼ� �ٸ� ��� ����
### �Ҹ���
- Ŭ���� ���ӻ��� ���߰ų� ���α׷� ����� �����Ǿ��� Ŭ������ ������
- �Ҹ� ��� : Ŭ���� �Ҹ��� ����� �� �����ؼ� �ٸ� ��� ����