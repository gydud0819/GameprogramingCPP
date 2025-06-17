#pragma once
#include "util.h"

class Paint
{
protected:
	int thickness;
public:
	Paint() = default;
	Paint(int thickness) : thickness(thickness) {}

	virtual void Draw() = 0;

	virtual ~Paint();
};

