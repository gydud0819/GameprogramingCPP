#pragma once
#include "Vehicle.h"
class Bicycle : public Vehicle
{
public:
	Bicycle() {}
	Bicycle(int speed, string name) : Vehicle(speed, name) {}

	void Move() override;

	~Bicycle();
};

