#include "Scooter.h"

void Scooter::Move()
{
	cout << "�̸� : " << name << endl;
	cout << "���� : " << fuel << endl;
	cout << "�ӵ� : " << speed << endl;

	cout << endl;
}

Scooter::~Scooter()
{
	cout << "Scooter �Ҹ��� ȣ��" << endl;
}
