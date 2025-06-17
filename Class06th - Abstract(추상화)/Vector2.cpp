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

 Vector2 Vector2::operator+(const Vector2& vector2) const	// 연산자 오버로딩 덧셈
{
	
	return Vector2(this->x + vector2.x, this->y + vector2.y);
	// TODO: 여기에 return 문을 삽입합니다.
}

 Vector2 Vector2::operator-(const Vector2& vector2) const		// 연산자 오버로딩 뺄셈
{
	
	return  Vector2(this->x - vector2.x, this->y - vector2.y);
	// TODO: 여기에 return 문을 삽입합니다.
}

 Vector2 Vector2::operator*(const Vector2& vector2) const		// 연산자 오버로딩 곱셈
{
	 
	 return Vector2(this->x * vector2.x, this->y * vector2.y);
	// TODO: 여기에 return 문을 삽입합니다.
}

 Vector2 Vector2::operator/(const Vector2& vector2) const		// 연산자 오버로딩 몫
{
	 
	 return Vector2(this->x / vector2.x, this->y / vector2.y);
	// TODO: 여기에 return 문을 삽입합니다.
}

 Vector2 Vector2::operator%(const Vector2& vector2) const		// 연산자 오버로딩 나머지
{
	 
	 return Vector2(this->x % vector2.x, this->y % vector2.y);
	// TODO: 여기에 return 문을 삽입합니다.
}





 Vector2 Vector2::operator-() const		// 단항 음수
 {
	 return Vector2(-x, -y);
 }

 Vector2 Vector2::operator+() const		// 단항 양수
 {
	 return Vector2(x, y);
 }

 Vector2& Vector2::operator--() 	// 전위 감소
 {
	 --x;
	 --y;
	 return *this;
	 // TODO: 여기에 return 문을 삽입합니다.
 }

 Vector2& Vector2::operator++() 	// 전위 증가
 {
	 ++x;
	 ++y;
	 return *this;
	 // TODO: 여기에 return 문을 삽입합니다.
 }

 Vector2 Vector2::operator--(int)		// 후위 감소
 {	
	 Vector2 temp = *this;  // 현재 상태 저장
	 --(*this);             // 전위 감소 호출 (위에 구현)
	 return temp;
	 
 }

 Vector2 Vector2::operator++(int)		// 후위 증가
 {
	 Vector2 temp = *this;  // 현재 상태 저장
	 ++(*this);             // 전위 감소 호출 (위에 구현)
	 return temp;
 }

 bool Vector2::operator!() const		// 논리 부정
 {
	 return (x == 0 && y == 0);
 }

 Vector2 Vector2::operator~() const		// 비트 not
 {
	 return Vector2(~x, ~y);
 }

 int& Vector2::operator*()				// 역참조(포인터)
 {
	 return x;
	 // TODO: 여기에 return 문을 삽입합니다.
 }

 Vector2* Vector2::operator&()			// 주소값 반환
 {
	 return this;
 }

 Vector2& Vector2::operator[](int index)
 {
	 //return list[index];		
	 // 클래스 내에 list라는 멤버 변수를 선언해줘야 하고 보통 템플릿 T와 많이 쓰지만 이 코드는 템플릿이 아니기에 예외로 이렇게 쓴다는 것만 알아두면 됨
	 // 대괄호 오버로딩은 내부 배열 또는 벡터같은 자료구조가 있을 때 사용함
	 // TODO: 여기에 return 문을 삽입합니다.
 }
