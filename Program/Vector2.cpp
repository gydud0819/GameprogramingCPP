#include "Vector2.h"


//void Vector2::vp1D(int x, int y)
//{
//	this->x = x;
//	this->y = y;
//}
//
//void Vector2::vp2D(int x, int y)
//{
//	this->x = x;
//	this->y = y;
//}

Vector2::Vector2(int x, int y)
{
	this->x = x;
	this->y = y;
}

void Vector2::Pos()
{
	//cout << "x + y" << x + y << endl;
	cout << "x : " << x << endl;
	cout << "y : " << y << endl;
}

const Vector2& Vector2::operator+(const Vector2& vector2)		// ������ �����ε� ����
{
	Vector2 other(this->x + vector2.x, this->y + vector2.y);
	return other;
	// TODO: ���⿡ return ���� �����մϴ�.
}

const Vector2& Vector2::operator-(const Vector2& vector2)		// ������ �����ε� ����
{
	return Vector2(x - vector2.x, y - vector2.y);
	// TODO: ���⿡ return ���� �����մϴ�.
}

const Vector2& Vector2::operator*(const Vector2& vector2)		// ������ �����ε� ����
{
	return Vector2(x ^ vector2.x, y ^ vector2.y);
	// TODO: ���⿡ return ���� �����մϴ�.
}

const Vector2& Vector2::operator/(const Vector2& vector2)		// ������ �����ε� ��
{
	return Vector2(x / vector2.x, y / vector2.y);
	// TODO: ���⿡ return ���� �����մϴ�.
}

const Vector2& Vector2::operator%(const Vector2& vector2)		// ������ �����ε� ������
{
	return Vector2(x % vector2.x, y % vector2.y);
	// TODO: ���⿡ return ���� �����մϴ�.
}
