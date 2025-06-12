#include "Boat.h"

void Boat::Move()
{
	cout << "이름 : " << name << endl;
	cout << "연료 : " << fuel << endl;
	cout << "속도 : " << speed << endl;
	cout << endl;
}

Boat::~Boat()
{
	cout << "Boat 소멸자 호출" << endl;
}
