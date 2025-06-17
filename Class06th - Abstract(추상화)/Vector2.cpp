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
	cout << "(" << x << ", " << y << ")" << endl;

	cout << endl;
}

 Vector2 Vector2::operator+(const Vector2& vector2) const	// ������ �����ε� ����
{
	
	return Vector2(this->x + vector2.x, this->y + vector2.y);
	// TODO: ���⿡ return ���� �����մϴ�.
}

 Vector2 Vector2::operator-(const Vector2& vector2) const		// ������ �����ε� ����
{
	
	return  Vector2(this->x - vector2.x, this->y - vector2.y);
	// TODO: ���⿡ return ���� �����մϴ�.
}

 Vector2 Vector2::operator*(const Vector2& vector2) const		// ������ �����ε� ����
{
	 
	 return Vector2(this->x * vector2.x, this->y * vector2.y);
	// TODO: ���⿡ return ���� �����մϴ�.
}

 Vector2 Vector2::operator/(const Vector2& vector2) const		// ������ �����ε� ��
{
	 
	 return Vector2(this->x / vector2.x, this->y / vector2.y);
	// TODO: ���⿡ return ���� �����մϴ�.
}

 Vector2 Vector2::operator%(const Vector2& vector2) const		// ������ �����ε� ������
{
	 
	 return Vector2(this->x % vector2.x, this->y % vector2.y);
	// TODO: ���⿡ return ���� �����մϴ�.
}





 Vector2 Vector2::operator-() const		// ���� ����
 {
	 return Vector2(-x, -y);
 }

 Vector2 Vector2::operator+() const		// ���� ���
 {
	 return Vector2(x, y);
 }

 Vector2& Vector2::operator--() 	// ���� ����
 {
	 --x;
	 --y;
	 return *this;
	 // TODO: ���⿡ return ���� �����մϴ�.
 }

 Vector2& Vector2::operator++() 	// ���� ����
 {
	 ++x;
	 ++y;
	 return *this;
	 // TODO: ���⿡ return ���� �����մϴ�.
 }

 Vector2 Vector2::operator--(int)		// ���� ����
 {	
	 Vector2 temp = *this;  // ���� ���� ����
	 --(*this);             // ���� ���� ȣ�� (���� ����)
	 return temp;
	 
 }

 Vector2 Vector2::operator++(int)		// ���� ����
 {
	 Vector2 temp = *this;  // ���� ���� ����
	 ++(*this);             // ���� ���� ȣ�� (���� ����)
	 return temp;
 }

 bool Vector2::operator!() const		// �� ����
 {
	 return (x == 0 && y == 0);
 }

 Vector2 Vector2::operator~() const		// ��Ʈ not
 {
	 return Vector2(~x, ~y);
 }

 int& Vector2::operator*()				// ������(������)
 {
	 return x;
	 // TODO: ���⿡ return ���� �����մϴ�.
 }

 Vector2* Vector2::operator&()			// �ּҰ� ��ȯ
 {
	 return this;
 }

 Vector2& Vector2::operator[](int index)
 {
	 //return list[index];		
	 // Ŭ���� ���� list��� ��� ������ ��������� �ϰ� ���� ���ø� T�� ���� ������ �� �ڵ�� ���ø��� �ƴϱ⿡ ���ܷ� �̷��� ���ٴ� �͸� �˾Ƶθ� ��
	 // ���ȣ �����ε��� ���� �迭 �Ǵ� ���Ͱ��� �ڷᱸ���� ���� �� �����
	 // TODO: ���⿡ return ���� �����մϴ�.
 }
