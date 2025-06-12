#include "Scooter.h"

void Scooter::Move()
{
	cout << "이름 : " << name << endl;
	cout << "연료 : " << fuel << endl;
	cout << "속도 : " << speed << endl;

	cout << endl;
}

Scooter::~Scooter()
{
	cout << "Scooter 소멸자 호출" << endl;
}
