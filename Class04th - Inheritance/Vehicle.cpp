#include "Vehicle.h"

Vehicle::Vehicle()
{
	cout << "Created Vehicle" << endl;
}

void Vehicle::Move()
{
	cout << "�̸� : " << name << endl;
	cout << "�ӵ� : " << speed << endl;
	
}

Vehicle::~Vehicle()
{
	cout << "Vehicle �Ҹ��� ȣ��" << endl;
}
