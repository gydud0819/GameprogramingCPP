#include "Utility.h"
#include "Player.h"
#include "Potion.h"
#include "Food.h"
#include "Accessories.h"

//void Square(int x)	// 제곱?
//{
//	cout << "x = " << x * x << endl;	// ?
//}
//
//
//void Square(double x)
//{
//	cout << "x = " << x * x << endl;
//
//}

int main()
{
#pragma region 다중 상속 및 문제점 
	/*
	* 하나의 클래스가 둘 이상의 상위 클래스로부터 행동이나 특성을 동시에 상속받는 것으로 여러 부모 클래스를 갖는 상속 구조이다.
	* 다중 상속을 통해 파생 클래스는 여러 기초 클래스의 기능을 모두 물려받아 사용할 수 있다.
	*
	* <문제점>
	* 이름 충돌 - 서로 다른 부모 클래스에 동일한 이름의 멤버 함수가 있을 경우, 자식 클래스에서 어떤 함수를 호출해야 할지 모호해지는 문제가 발생한다
	* 다이아몬드 상속 - 다중 상속 구조가 마치 다이아몬드 모양처럼 될 때 발생하는 문제이다.
	* ex) 클래스 D가 B와 C를 상속받고, B와 C가 모두 A를 상속받는 경우, D는 A의 멤버를 두 번 상속받게 된다.
	* 이로 인해 A의 멤버가 중복되어 모호성이 발생하고, 객체 생성 시에도 A 클래스의 생성자가 여러 번 호출되는 문제가 발생한다.
	*/

	/*
	* 해결 방법
	* 스코프 해소 연산자 - 부모 클래스 이름을 명시하여 어떤 부모의 멤버를 사용할지 명확히 할 수 있다.
	* 가상 상속(virtual Inheritance) - 가상 상속을 하면 최상위 클래스의 멤버가 중복 생성되지 않고 하나만 생성되어 모호성을 제거할 수 있다.
	*/

	// TwoWayPlayer는 Pitcher와 Batter 모두를 상속하고 있기 때문에 두 클래스가 각각 Player를 상속받으면서 Player가 중복된다.
	// 이때 컴파일러는 어떤 Player를 참조해야 할지 모호해지는 에러가 발생한다.

	//TwoWayPlayer ohtani("오타니 쇼헤이", "투타 겸업");
	//ohtani.ShowInfo();

#pragma endregion

#pragma region 다형성
	// 여러 개의 서로 다른 객체가 동일한 기능을 서로 다른 방법으로 처리하는 작업이다.
	// 다형성은 컴파일 시점에 함수와 속성이 결정되는 정적 바인딩을 하지 않고, 실행 시간에 함수와 속성이 결정될 수 있는 동적 바인딩을 가능하게 한다.
	// 정적 바인딩 - 함수 호출이 컴파일 시점에 결정되는 것	// 디버깅 전에
	// 동적 바인딩 - 함수 호출이 런타임 시점에 결정되는 것	// 실행할 때 결정

#pragma region 함수의 오버로딩(Overloading)
	// 같은 이름의 함수를 매개 변수의 자료형과 매개 변수의 수로 구분하여 여러 개를 선언할 수 있는 기능이다.
	// 함수의 오버로딩의 경우 함수의 매개 변수에 전달하는 인수의 형태를 보고 호출하기 때문에 반환형으로 함수의 오버로딩은 생성할 수 없다.

	//Square(2);
	//Square(22.5);

#pragma endregion

#pragma region 함수의 오버라이딩(Overriding)
	// 부모 클래스에 있는 함수를 자식 클래스에서 재정의하여 사용하는 기능이다.
	// 함수의 오버라이딩은 상속 관계에서만 이루어지고 자식 클래스에서 함수를 재정의 할 때 부모 클래스의 함수 형태와 일치해야 한다.

	// 객체 배열이...
	//Potion potion;
	//potion.Use();
	//cout << sizeof(Potion) << endl;
	//cout << endl;
	//
	//Food food;
	//food.Use();
	//cout << sizeof(Food) << endl;
	//cout << endl;
	//
	//Accessories accessories;
	//accessories.Use();
	//cout << sizeof(Accessories) << endl;
	//cout << endl;
	//
	//Item* itemptr[3] = {&potion, &food, &accessories};	
	//
	//for (int i = 0; i < 3; i++)
	//{
	//	itemptr[i]->Use();
	//}
	//cout << endl;
	//
	//HealPotion hp;
	//hp.Use();


#pragma endregion

#pragma region 가상 함수
// 가상 함수 테이블을 사용하여 함수가 호출되는 시간을 런타임에 결정하고, 한개 이상의 가상 함수를 포함하는 클래스가 있을 때 가상 함수 포인터가 추가된다.
// 상속하는 클래스 내에서 같은 형태의 함수로 재정의될 수 있는 함수이다.
// 가상 함수는 실행 시간에 부모 클래스에 대한 참조로 자식 클래스에 재정의된 함수를 호출할 수 있다.

	int select = 0;
	cin >> select;

	/*Potion potion;
	Food food;
	Accessories accessories;

	Item* itemptr[3] = { &potion, &food, &accessories };*/

	// 5번만 생성된다는게 무슨말이야, 동적할당 쓰는건가 while은 안써도되나
	// 번호를 누를 때 생성해야함 <- 전제 조건
	// 근데 switch에선 밑에처럼 사용이 안됨


		cout << "번호 눌러라 ex. 1, 2, 3" << endl;
	switch (select)
	{
	case 1:
	{
		Potion* potion = new Potion;
		potion->Use();
		delete potion;
	}
		break;
		
	case 2:
	{
		Food* food = new Food;
		food->Use();
		delete food;
	}
		break;
	case 3:
	{
		Accessories* accessories = new Accessories;
		accessories->Use();
		delete accessories;
	}
		break;
	case 4:
		cout << "다시 입력해주세요." << endl;
		break;
	case 5:
		cout << "다시 입력해주세요." << endl;
		break;
	case 6:
	default:
		break;
	}

#pragma endregion

#pragma endregion
	// 추상화, 가상 함수 포인터? 스마트 포인터? ㅖ? 


	return 0;
}