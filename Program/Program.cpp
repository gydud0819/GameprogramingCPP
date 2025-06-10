#include <iostream>
#include "GameObject.h"

using namespace std;

void CallbyValue(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}

int GameObject::count = 0;	

int main()
{
#pragma region 참조자
	// 하나의 변수에 또 다른 이름을 지정하는 지정자이다. (별명으로 생각하기)
	// 레퍼런스 자체의 공간은 존재하지 않는다. 
	// 복사 비용을 줄일 수 있다?

	//int x = 10;
	//int& iref = x;
	//
	//cout << "x의 값 : " << x << endl;
	//cout << "iref의 값 : " << iref << endl;
	//
	//cout << endl;
	//
	//cout << "x의 주소 : " << &x << endl;
	//cout << "iref의 주소 : " << &iref << endl;
	//
	//cout << endl;
	//
	//int leftValue = 10;
	//int rightValue = 20;
	//
	//CallbyValue(leftValue, rightValue);
	//
	//cout << "leftValue의 값 : " << leftValue << endl;
	//cout << "rightValue의 값 : " << rightValue << endl;
	
#pragma endregion

#pragma region 클래스
	// 사용자 정의 자료형으로 속성과 함수가 포함되어 있고 클래스를 통해 객체를 생성하고 접근하고 사용하는 집합체이다.
	// 클래스의 경우 클래스 내부의 있는 변수는 클래스의 메모리 영역에 포함되지만 정적 변수와 함수의 메모리는 클래스 영역에 포함되지 않는다.
	// 구조체에서 한단계 오름
	// 객체 지향 프로그래밍 (OOP)
	// 캡슐화, 상속, 다형성, 추상화 

	GameObject Obj1;

	//cout << "GameObj1.z = " << Obj1.z << endl;

	Obj1.SetX(10);
	Obj1.SetY(20);
	Obj1.SetZ(30);

	Obj1.GetX();
	Obj1.GetY();
	Obj1.GetZ();

	cout << Obj1.GetX() << endl;
	cout << Obj1.GetY() << endl;
	cout << Obj1.GetZ() << endl;

	cout << sizeof(GameObject) << " byte" << endl;

	
	/*Obj2.SetX(20);
	Obj2.SetY(20);
	Obj2.SetZ(20);

	Obj2.GetX();
	Obj2.GetY();
	Obj2.GetZ();

	cout << Obj2.GetY() << endl;
	cout << Obj2.GetY() << endl;
	cout << Obj2.GetY() << endl;

	Obj3.SetZ(67);
	Obj3.GetZ();
	cout << Obj3.GetZ() << endl;*/

#pragma endregion
	// 생성자 소멸자, 복사 생성, 깊은 복사, 얕은 복사 
	
#pragma region 정적 멤버 함수
	/*
	* 클래스에 속하지만, 특정 객체에 속하지 않고 클래스 자체에 속하는 함수
	* 클래스 이름으로 호출함 - 객체 생성을 하지 않아도 클래스 이름을 통해 직접 호출할 수 있음
	* this 포인터 없음 - 정적 함수는 객체에 속하지 않으므로 this 포인터를 사용할 수 없음
	* 정적 멤버 변수만 접근할 수 있음 - 클래스의 정적 멤버 변수에는 접근 가능하지만 비정적 멤버 변수 및 멤버 함수에는 접근할 수 없음
	*/
#pragma endregion



	return 0;
}