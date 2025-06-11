#include "Unit.h"
void Pos(int x, int y, int z = 30)
{
	cout << "x = " << x << " y = " << y << " z = " << z << endl;
}

int main()
{
#pragma region 생성자
	// 클래스의 인스턴스가 생성되는 시점에서 자동으로 호출되는 특수한 멤버 함수이다.
	// 생성자의 경우 객체가 생성될 때 단 한 번만 호출되고 생성자는 반환형이 존재하지 않기 때문에 생성자가 호출되기 전에는 객체에 대한 메모리는 할당하지 않는다.
	// 클래스 : 설계도
	// 인스턴스 : 설계도를 바탕으로 만든 결과물(객체) 객체가 인스턴스?

	//Unit unit;
	//unit.Stats();

#pragma endregion

#pragma region 소멸자
	// 객체가 소멸될 때 자동으로 소멸되는 클래스의 멤버 함수이다.
	// 소멸자는 객체가 메모리에서 해제될 때 단 한번만 호출되고 소멸자에는 매개 변수를 생성해서 사용할 수 없다.
	// 소멸자 표현 방법 : ~ + 클래스 이름();

	//Unit* U = new Unit();	// new = 동적할당 = 포인터 = * 꼭 쓰기 
	//
	//U->Stats(); 
	//
	//delete U;	//  -> new + delete 같이 쓸텐데 머고 
#pragma endregion

#pragma region 복사 생성자
	// 같은 객체를 복사하여 생성시킬 때 호출되는 생성자이다.
	// 복사 생성자를 정의하지 않고 객체를 복사하게 되면 기본 복사 생성자가 호출되기 때문에 얕은 복사로 객체가 복사된다.
	// 얕은 복사 = 주소를 참조해서 겉만 복사한다? 
	// Item item1;
	// Item item2(item1);

	//Item item1;
	//
	//item1.ItemInfo();
	//
	//Item item2(item1); // ?
	//item2.ItemInfo();


#pragma endregion

#pragma region 얕은 복사
	// 객체를 복사할 때 주소 값을 복사하여 같은 메모리 공간을 가리키게 하는 복사이다.
	// 얕은 복사의 경우 객체가 서로 같은 메모리 공간을 참조하기 때문에 하나의 객체로 값을 변경하게 되면 서로 참조된 객체도 함께 영향을 받는다.
	// delete

	//int* iptr1 = new int;
	//int* iptr2 = iptr1;
	//
	//cout << "iptr 1 주소 " << iptr1 << endl;
	//cout << "iptr 2 주소 " << iptr2 << endl;
	//
	//*iptr2 = 20;
	//
	//cout << "iptr 1 값 " << *iptr1 << endl;
	//cout << "iptr 2 값 " << *iptr2 << endl;
	//
	//cout << endl;
	//
	//delete iptr1;

	//Item item1;
	//Item item2(item1);
	//
	//item1.ItemInfo();
	//item2.ItemInfo();



#pragma endregion

#pragma region 깊은 복사
// 객체를 복사할 때 참조 값이 아닌 객체 자체를 새로 복사하여 서로 다른 메모리를 생성하는 복사이다.
// 
	// 이게 아닌 거같은ㄷ 
	//Item item1;
	//Item item2(item1);
	//
	//item1.ItemInfo();
	//item2.ItemInfo();

#pragma endregion

#pragma region 기본 매개 변수
	// 함수의 매개 변수 값에 전달되지 않을 때 미리 값을 설정하는 매개 변수이다.
	// 기본 매개 변수를 지정하려면 오른쪽에서부터 값을 지정해줘야 한다.
	// 오른쪽에서부터 값을 채워 나가야한다. 

	//Pos(10,20);



#pragma endregion



	return 0;
}