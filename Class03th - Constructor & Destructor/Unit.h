#pragma once
#include "Util.h"

class Unit
{
private:
	int hp;		// 체력
	int def;	// 방어력
	string name;


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
		price = new int(0);	// 동적할당햇고 
	}

	Item(Item& item) /*: grade(grade)*/		// (Item item) -> 참조로 받아와야한다?
	{
		grade = item.grade;	// 얕은 복사
		price = new int(*item.price);	// 깊은 복사 
	}

	Item() {}

	Item(char grade, int* price): grade(grade), price(price) {} // 이게 멤버 이니셜 라이즈아님? 
	void ItemInfo();

	~Item();
};
