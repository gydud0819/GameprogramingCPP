#pragma once
#include "Utility.h"
class Vector2
{
	int x, y;

public:
	Vector2() {}
	Vector2(int x, int y);
	//Vector2(int x, int y) : x(x), y(y) {}

	void Pos();

	//Vector2 operator + (const Vector2& other);
	const Vector2& operator + (const Vector2& vector2);
	const Vector2& operator - (const Vector2& vector2);
	const Vector2& operator * (const Vector2& vector2);
	const Vector2& operator / (const Vector2& vector2);
	const Vector2& operator % (const Vector2& vector2);

	
	//void vp1D(int x, int y);
	//void vp2D(int x, int y);
};

