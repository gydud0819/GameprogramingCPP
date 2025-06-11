#pragma once
#include "Util.h"

class Unit
{
private:
	int hp;		// ü��
	int def;	// ����


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
		price = new int(0);	 
	}

	Item(Item& item) /*: grade(grade)*/		// (Item item) -> ������ �޾ƿ;��Ѵ�.
	{
		grade = item.grade;
		price = new int(*item.price);
	}

	void ItemInfo();
	

	~Item();
};

// ��� �̴ϼ� ����� ���� ���� ���� 
class Item2
{
private:
	string grade;		// -> string�� �ڵ����� ���� ���簡 ������
	int* price;
public:
	Item2() {}

	Item2(string grade, int price) : grade(grade)	
	{
		//this->price�� ����Ű�°� Ŭ���� ���� �� private�� ������ int* price, new int(price)�� ������ �Ű�����
		this->price = new int(price);	// Ŭ���� ���� ������ �����̸��̶� �����ڿ� ������ �̸��� ������ ������ �� �յ��� ����Ѵ�.
		//price = new int(*_price);	// this�� ����ϱ� ���ŷο�� �����ڿ��� �ʱ�ȭ �Ҷ� ���� �̸��� _�� ���̰ų� �ϸ��

	}

	Item2(const Item2& other);	// ���� ������, ���縸 �ؾ��ϱ� ������ const�� ���̱�

	void ShowItem();

	~Item2();

};
