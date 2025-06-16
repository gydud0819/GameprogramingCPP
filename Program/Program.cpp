#include "Pencil.h"
#include "Brush.h"
#include "Vector2.h"

int main()
{
#pragma region 추상화
	// 함수에 특정한 내용이 구현되어 있지 않고 선언만 되어 있는 클래스이다.
	// 추상 클래스는 정의되어 있지 않은 함수가 있기에 객체를 생성할 수 없다.
	// 순수 가상 함수를 사용할 때는 소멸자 앞에도 virtual이 있어야 자식과 부모 클래스 소멸자가 모두 호출된다.
	// 

	//Paint* vptr = new Pencil;
	//vptr->Draw();
	//delete vptr;
	//
	//vptr = new Brush;
	//vptr->Draw();
	//delete vptr;

	// 이 방법으로도 해도됨
	/*Paint* vptr2 = new Brush;
	vptr2->Draw();
	delete vptr2;*/


#pragma endregion

#pragma region 연산자 오버로딩
	Vector2 point1D(3, 4);
	Vector2 point2D(1, 2);

	/*point1D.vp1D(3, 4);
	point2D.vp1D(1, 2);*/

	Vector2 dir = point1D + point2D;
	Vector2 dir2 = point1D - point2D;
	Vector2 dir3 = point1D * point2D;
	Vector2 dir4 = point1D / point2D;
	Vector2 dir5 = point1D % point2D;
	
	dir.Pos();
	dir2.Pos();
	dir3.Pos();
	dir4.Pos();
	dir5.Pos();

#pragma endregion
	// 단항 연산자, 이항 연산자 오버로딩 만들기 (단항 연산자는 검색해서 만들기)
	return 0;
}