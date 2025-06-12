#include "Bicycle.h"

void Bicycle::Move()
{
	cout << "이름 : " << name << endl;
	cout << "속도 : " << speed << endl;
	cout << endl;
}

Bicycle::~Bicycle()
{
	cout << "Bicycle 소멸자 호출" << endl;
}
