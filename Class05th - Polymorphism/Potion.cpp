#include "Potion.h"

void Potion::Use()
{
	cout << "일반 물약은 그냥 물이었다." << endl;
}

Potion::~Potion()
{

}

void HealPotion::Use()	// Potion에 있는 함수를 오버로딩 
{
	hp = +5;
	cout << "체력이 5 올랐다." << endl;
}
