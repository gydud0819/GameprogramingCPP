#include "Vehicle.h"

Vehicle::Vehicle()
{
	cout << "Created Vehicle" << endl;
}

void Vehicle::Move()
{
	cout << "이름 : " << name << endl;
	cout << "속도 : " << speed << endl;
	
}

Vehicle::~Vehicle()
{
	cout << "Vehicle 소멸자 호출" << endl;
}
