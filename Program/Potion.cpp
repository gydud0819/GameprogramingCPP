#include "Potion.h"

void Potion::Use()
{
	cout << "�Ϲ� ������ �׳� ���̾���." << endl;
}

Potion::~Potion()
{

}

void HealPotion::Use()	// Potion�� �ִ� �Լ��� �����ε� 
{
	hp = +5;
	cout << "ü���� 5 �ö���." << endl;
}
