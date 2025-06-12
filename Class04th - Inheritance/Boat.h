#pragma once
#include "Vehicle.h"
class Boat : public Vehicle
{
	float fuel;
public:
	Boat() {}
	Boat(int speed, string name, float fuel) : Vehicle(speed, name), fuel(fuel) {}

	void Move() override;

	~Boat();
};

