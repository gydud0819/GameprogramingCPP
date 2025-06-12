#pragma once	// 지우면 안됨
#include "Util2.h"
class Vehicle
{
protected:
	int speed;
	string name;
public:
	Vehicle();

	Vehicle(int speed, string name) : speed(speed), name(name) {}

	virtual void Move();

	~Vehicle();
};





