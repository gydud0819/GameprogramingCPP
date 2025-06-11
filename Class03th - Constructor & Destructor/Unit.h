#pragma once
#include "Util.h"

class Unit
{
private:
	int hp;		// ü��
	int def;	// ����
	string name;


public:
	Unit()	// ������  -> ����ڰ� ���� ����
	{
		hp = 50;
		def = 30;
		cout << "Created Unit" << endl;
	}

	//Unit() = default;		-> �����Ϸ� �ڵ� ���� 

	void Stats();

	~Unit();	// ~���̸� �Ҹ���
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
		price = new int(0);	// �����Ҵ��ް� 
	}

	Item(Item& item) /*: grade(grade)*/		// (Item item) -> ������ �޾ƿ;��Ѵ�?
	{
		grade = item.grade;	// ���� ����
		price = new int(*item.price);	// ���� ���� 
	}

	Item() {}

	Item(char grade, int* price): grade(grade), price(price) {} // �̰� ��� �̴ϼ� ������ƴ�? 
	void ItemInfo();

	~Item();
};
