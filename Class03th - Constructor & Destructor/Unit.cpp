
#include "Unit.h"

void Unit::Stats()
{
	cout << "hp : " << hp << endl;
	cout << "def : " << def << endl;
}

Unit::~Unit()
{
	cout << "�Ҹ��� ������" << endl;
}

void Item::ItemInfo()
{
	cout << "grade : " << grade << endl; // ? 
	cout << "price : " << price << endl;
}



Item::~Item()
{
	//cout << "�Ҹ��� ������" << endl;

	//delete price;

}


// ��� �̴ϼ� ����� ���� ���� ���� ����
Item2::Item2(const Item2& other)		
{
	grade = other.grade;
	price = new int(*other.price);
}

void Item2::ShowItem()
{
	cout << "grade : " << grade << endl;
	cout << "price : " << *price << endl;
}

Item2::~Item2()
{
	delete price;
}
