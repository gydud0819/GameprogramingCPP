#include "Boat.h"

void Boat::Move()
{
	cout << "�̸� : " << name << endl;
	cout << "���� : " << fuel << endl;
	cout << "�ӵ� : " << speed << endl;
	cout << endl;
}

Boat::~Boat()
{
	cout << "Boat �Ҹ��� ȣ��" << endl;
}
