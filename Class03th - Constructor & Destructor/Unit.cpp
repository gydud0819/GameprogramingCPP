
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