#include "Util.h"
#include "Packet.h"
#include "Resource.h"
#include "Character.h"

void Lvalue(int& x) // 일반 참조
{
	cout << "L value 참조 : " << x << endl;

}

void Rvalue(int&& x)	// 이동 참조
{
	cout << "R value 참조 : " << x << endl;
}

int main()
{
#pragma region 스마트 포인터 (Smart Pointer)
	// 따로 헤더가 필요한가 
#pragma region 메모리 소유권
	/*
	* 메모리 소유권?
	*
	* unique_ptr	-> 하나의 객체만
	* shared_ptr	-> 여러 객체한테
	* weak_ptr		->
	*/

	// 메모리 소유권 예제 

	// ptr2 선언하고
	// 중괄호 걸고
	// ptr1 할당한 다음
	// ptr2에 100 넣고
	// ptr1을 해제해라? 

	//// 내가 한거 
	//int* ptr2 = new int;
	//int* ptr1 = ptr2;
	//{
	//	*ptr2 = 100;
	//	cout << "할당된 값 : " << *ptr1 << endl;

	//}
	//	delete ptr1; 

	// 내가 한것도 유사하긴한데 ptr1, 2가 둘다 같이 해제되서 소유권이 불분명해짐 

	// 모범 코드 (스마트 포인터를 쓰기 위한 과정)
	//int* iptr2 = nullptr;
	//{
	//	int* iptr1 = new int;
	//	iptr2 = iptr1;
	//
	//}
	//*iptr2 = 100;
	//delete iptr2;

#pragma endregion

#pragma region unique pointer
	// 특정한 객체를 하나의 스마트 포인터만 가리킬 수 있도록 되어 있는 포인터
	// 사용 방법 : uinque_ptr <자료형> 변수명; = make_unique <자료형> ();		// 잊지말자 클래스도 하나의 자료형인걸 
	// 하나의 객체만 가리킬 수 있다 == 하나의 메모리 공간만 가리킨다
	// 소유권을 넘기면 해당 포인터에는 nullptr이 들어간다.
	// 소유권 넘기는 방법 : std::move(변수)로 넘기기 

	//unique_ptr <Packet> ptr = make_unique <Packet>();		// 동적할당 한 상태
	//ptr->Receive();											// .이 아닌 ->를 직접써서 넘기기
	//unique_ptr <Packet> ref = move(ptr);					// 메모리 소유권 넘기는 방법				이걸 어떻게 게임에 적용하지 
	//ref->Receive();											// 개체가 이동되었다 그럼 이동한상태에서 써야하나 


#pragma endregion

#pragma region shared pointer
	// 하나의 자원 객체를 여러 포인터 객체가 가리킬 수 있고 모든 포인터 객체가 자원을 객체를 필요하지 않을 때 자원 코드를 해제하도록 설계되어 있는 포인터
	// shared_ptr <자료형> 변수명 = make_shared <자료형> ();
	// 강한 참조 -> 객체에 영향을 주는 참조


	// 서로 참조해서 소멸자가 아닌 참조한 카운트 2가 나올 수 있도록  
	//shared_ptr <Resource> oil = make_shared <Resource>();
	//shared_ptr <Resource> mineral = make_shared <Resource>();
	//oil->Share(mineral);
	//mineral->Share(oil);	// 서로 참조해야하기 때문에 참조를 하나 더 만들기 값은 반대로

#pragma endregion

#pragma region weak pointer
	// 자원 객체를 소유하지 않기 때문에 공유 포인터로 관리되는 객체를 가리켜서 참조 개수에 영향을 미치지 않게 하는 포인터
	// weak <자료형> 변수 = make_weak <자료형> () ;
	// 약한 참조 -> ??
	// shared를 쓰는건지 weak를 쓰는건지 ㅇㅅㅇ 
	// 소멸자가 나와야하는건가 안나와야하는건가 
	//shared_ptr<Character> p = make_shared<Character>();
	//shared_ptr<Character> e = make_shared<Character>();
	//
	//// ?
	//p->Parter(e);
	//e->Parter(p);
	//
	//cout << "참조 횟수 : " << p.use_count() << endl;
	//cout << "참조 횟수 : " << e.use_count() << endl;


#pragma endregion


#pragma region R value L value
	/*
	* L value 와 R value
	* L value
	* 메모리 주소를 가지는 것, 참조가 가능한 것을 의미
	* 대입 연산자 기준 왼쪽에 올 수 있음
	*
	* ex) int x = 5;	'x'가 L value
	*
	* R value
	* 임시값, 메모리에 이름이 없는 것
	* 대입 대상이 될 수 없고 오른쪽에서만 사용
	*
	* ex)
	* int x = 5;	'5'가 R value
	* int y = x++;	'x++'가 R value
	* 예외) '++x'은 L value
	*
	* 대입 연산자 기준
	* int x = 5;	'x'는 L value, '5'는 R value
	*
	* 정리
	* int& : L value 참조 -> L value 값만 받음
	* int&& : R value 참조 -> R value 값만 받음
	* const int& : 상수 참조 -> L-value와 R-value 모두 받을 수 있음 (R-value의 경우 임시 객체를 생성해줌)
	*/
	//int x = 4;
	//Lvalue(x);		// x는 이름 있는 변수 -> L value
	//Rvalue(23);		// 23은 임시값 -> R value
	//Rvalue(x + 23);	// 'x + 5'는 계산 결과 -> R value
	//Rvalue(move(x)); // std::move(x)는 x를 R-value로 간주만 하고 실제 이동은 move 함수 속 생성자/대입 연산자가 수행함

	// 에러 예시(컴파일 오류)
	// Lvalue(30);     //  30은 R-value인데 L-value 참조 함수에 전달함
	// Rvalue(a);      //  x는 L-value인데 R-value 참조 함수에 전달함

#pragma endregion

	// sfml 2D게임 만들기 (팀으로)
	// sfml로 서바이벌 맵을 설계할 수 잇나..?

#pragma endregion

	return 0;
}