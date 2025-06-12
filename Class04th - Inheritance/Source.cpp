#include "Util2.h"
#include "../Program/Scooter.h"
#include "../Program/Monster.h"
#include "../Program/Boat.h"
#include "../Program/Bicycle.h"

int main()
{
#pragma region 멤버 이니셜 라이저
	/*
	* 클래스의 생성자(constructor)가 호출될 때 클래스의 멤버 변수들을 생성자 본문에 들어가기 전에 초기화하는 특별한 구문이다.
	* 생성자 선언부와 본문 사이에 콜론(:)을 사용하여 작성하고 각 멤버 변수는 변수명(초기값) 형태로 나열한다.
	*
	* 생성자 본문 실행 전에 초기화 - 객체가 생성되는 동시에 멤버 변수들이 값이 할당된다
	* 상수(const) 멤버, 참조자 멤버 초기화 필수 - const로 선언된 멤버 변수나 참조자 멤버 변수는 반드시 멤버 이니셜라이저를 통해서만 초기화할 수 있다.
	* 성능상의 이점 - 멤버 이니셜라이저를 사용하면 멤버 변수를 한 번만 초기화하기 때문에 생성자 본문에서 대입하는 것보다 불필요한 연산이 줄어들어 성능이 개선된다.
	* 초기화 순서 - 나열한 순서와 상관없이 실제 초기화는 클래스에 멤버 변수가 선언된 순서대로 진행된다.
	* ↓
	* 생성자 이니셜라이저에서 선언할때 순서에 상관없이 써도 되긴하지만 웬만해선 선언한대로 초기화 하는 것이 좋다.
	*/

	/*
	* 멤버 이니셜라이저가 필요한 상황
	* const 멤버 변수 초기화할 때
	* 참조자 멤버 변수 초기화할 때
	* 멤버 객체가 매개변수를 필요로 하는 생성자를 가질 때
	* 상속 관계에서 부모 클래스의 생성자 호출이 필요할 때
	*/

	// 멤버 이니셜라이저 예시 코드
	//Cookie cookie("라즈베리 쿠키");
	//cookie.ShowInfo();

#pragma endregion

#pragma region 상속
	// 상위(부모) 클래스의 속성을 하위(자식) 클래스가 사용할 수 있도록 설정해주는 기능이다.
	// 클래스의 상속 관계에서 상위 클래스는 하위 클래스의 속성을 사용할 수 없고, 하위 클래스는 상위 클래스의 메모리를 포함한 상태로 메모리의 크기가 결정된다.
	// 선언 : void Func(); -> header.h
	// 정의 : void Func() { cout << " " << endl;} -> .cpp
	// 헤더에 정의를 하면 나중에 컴파일 시간이 늘어나면서 오래걸린다. 선언과 정의는 따로 하는 것이 좋다.
	// 생성자는 부모 클래스부터 차례로 생성되고 소멸자는 자식 클래스부터 소멸된다. 생성자=선입선출 소멸자=후입선출

	//Goblin goblin("고블린", 100, 5, 100);
	//goblin.Stats();
	////cout << sizeof(goblin) << endl;
	//
	//Junior_Golem junior_golem("주니어 골렘", 200, 10, 55);
	//junior_golem.Stats();
	////cout << sizeof(junior_golem) << endl;
	//
	//Slime slime("슬라임", 50, 1);
	//slime.Stats();
	////cout << sizeof(slime) << endl;
	//
	//cout << "=================================" << endl;

	//Vehicle vehicle;

	//Scooter scooter(50, "스쿠터", 100.0f);
	//scooter.Move();
	//
	//Boat boat(250, "보트", 200.0f);
	//boat.Move();
	//
	//Bicycle bicycle(25, "자전거");
	//bicycle.Move();
	//
	//cout << "==================" << endl;


#pragma endregion

	return 0;
}