
#include "Unit.h"

void Unit::Stats()
{
	cout << "hp : " << hp << endl;
	cout << "def : " << def << endl;
}

Unit::~Unit()
{
	cout << "¼Ò¸êÀÚ »ý¼ºµÊ" << endl;
}

void Item::ItemInfo()
{
	cout << "grade : " << grade << endl; // ? 
	cout << "price : " << price << endl;
}



Item::~Item()
{
	//cout << "¼Ò¸êÀÚ »ý¼ºµÊ" << endl;

	//delete price;

}


// ¸â¹ö ÀÌ´Ï¼È ¶óÀÌÁî¸¦ ÅëÇÑ ±íÀº º¹»ç ¿¹½Ã
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
