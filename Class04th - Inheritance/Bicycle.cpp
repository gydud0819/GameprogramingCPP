#include "Bicycle.h"

void Bicycle::Move()
{
	cout << "�̸� : " << name << endl;
	cout << "�ӵ� : " << speed << endl;
	cout << endl;
}

Bicycle::~Bicycle()
{
	cout << "Bicycle �Ҹ��� ȣ��" << endl;
}
