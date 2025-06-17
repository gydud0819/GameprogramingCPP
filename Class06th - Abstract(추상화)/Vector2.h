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
	// ���� ������ �����ε�
	 Vector2 operator + (const Vector2& vector2) const;
	 Vector2 operator - (const Vector2& vector2) const;
	 Vector2 operator * (const Vector2& vector2) const;
	 Vector2 operator / (const Vector2& vector2) const;
	 Vector2 operator % (const Vector2& vector2) const;
												 
	 // ���� ������ �����ε�
	 Vector2 operator - () const;		// ���� ����
	 Vector2 operator + () const;		// ���� ���
	 Vector2& operator -- ();			// ���� ����
	 Vector2& operator ++ ();			// ���� ����
	 Vector2 operator--(int);			// ���� ����
	 Vector2 operator++(int);			// ���� ����
	 bool operator ! () const;			// �� ����
	 Vector2 operator ~ () const;		// ��Ʈ not
	 int& operator * ();				// ������(������)
	 Vector2* operator&();				// �ּҰ� ��ȯ


};

