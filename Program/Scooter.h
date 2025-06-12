#pragma once
#include "Vehicle.h"
class Scooter :  public Vehicle
{
	float fuel;
public:
	Scooter() {}
	Scooter(int speed, string name, float fuel) : Vehicle(speed, name), fuel(fuel) {}

	void Move() override;

	~Scooter();
};

