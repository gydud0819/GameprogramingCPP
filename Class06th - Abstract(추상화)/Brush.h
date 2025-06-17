#pragma once
#include "Paint.h"


class Brush : public Paint
{
public:
	Brush() {}
	
	 virtual void Draw() override;
	 virtual ~Brush() override;
};

