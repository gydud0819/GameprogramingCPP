#pragma once
#include "Util.h"

class Unit
{
private:
	int hp;		// 체력
	int def;	// 방어력


public:
	Unit()	// 생성자  -> 사용자가 직접 생성
	{
		hp = 50;
		def = 30;
		cout << "Created Unit" << endl;
	}

	//Unit() = default;		-> 컴파일러 자동 생성 

	void Stats();

	~Unit();	// ~붙이면 소멸자
};

class Item
{
private:
	//string grade;
	char grade;
	int* price;
public:
	Item()
	{
		grade = 'A';
		price = new int(0);	 
	}

	Item(Item& item) /*: grade(grade)*/		// (Item item) -> 참조로 받아와야한다.
	{
		grade = item.grade;
		price = new int(*item.price);
	}

	void ItemInfo();
	

	~Item();
};

// 멤버 이니셜 라이즈를 통한 깊은 복사 
class Item2
{
private:
	string grade;		// -> string은 자동으로 깊은 복사가 가능함
	int* price;
public:
	Item2() {}

	Item2(string grade, int price) : grade(grade)	
	{
		//this->price가 가리키는건 클래스 내부 즉 private에 선언한 int* price, new int(price)는 생성자 매개변수
		this->price = new int(price);	// 클래스 내에 선언한 변수이름이랑 생성자에 선언한 이름이 같을때 구분할 수 잇도록 사용한다.
		//price = new int(*_price);	// this를 사용하기 번거로우면 생성자에서 초기화 할때 변수 이름에 _를 붙이거나 하면됨

	}

	Item2(const Item2& other);	// 복사 생성자, 복사만 해야하기 때문에 const를 붙이기

	void ShowItem();

	~Item2();

};
