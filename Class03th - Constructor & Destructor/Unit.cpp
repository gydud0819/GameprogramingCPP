
#include "Unit.h"

void Unit::Stats()
{
	cout << "hp : " << hp << endl;
	cout << "def : " << def << endl;
}

Unit::~Unit()
{
	cout << "家戈磊 积己凳" << endl;
}

void Item::ItemInfo()
{
	cout << "grade : " << grade << endl; // ? 
	cout << "price : " << price << endl;
}

Item::~Item()
{
	//cout << "家戈磊 积己凳" << endl;

	//delete price;

}