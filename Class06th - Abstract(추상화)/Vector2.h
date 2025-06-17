#pragma once
#include "util.h"
class Vector2
{
	int x, y;

public:
	Vector2() {}
	Vector2(int x, int y);
	//Vector2(int x, int y) : x(x), y(y) {}

	void Pos();

	//Vector2 operator + (const Vector2& other);
	// 이항 연산자 오버로딩
	 Vector2 operator + (const Vector2& vector2) const;
	 Vector2 operator - (const Vector2& vector2) const;
	 Vector2 operator * (const Vector2& vector2) const;
	 Vector2 operator / (const Vector2& vector2) const;
	 Vector2 operator % (const Vector2& vector2) const;
												 
	 // 단항 연산자 오버로딩
	 Vector2 operator - () const;		// 단항 음수
	 Vector2 operator + () const;		// 단항 양수
	 Vector2& operator -- ();			// 전위 감소
	 Vector2& operator ++ ();			// 전위 증가
	 Vector2 operator--(int);			// 후위 감소
	 Vector2 operator++(int);			// 후위 증가
	 bool operator ! () const;			// 논리 부정
	 Vector2 operator ~ () const;		// 비트 not
	 int& operator * ();				// 역참조(포인터)
	 Vector2* operator&();				// 주소값 반환


};

