#include "Utility.h"
#include "Packet.h"
#include "Resource.h"

int main()
{
#pragma region 스마트 포인터 (Smart Pointer)
	// 따로 헤더가 필요한가 
#pragma region 메모리 소유권
	/*
	* 메모리 소유권?
	*
	* unique_ptr	->
	* shared_ptr
	* weak_ptr
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

	// 서로 참조해서 소멸자가 아닌 참조한 카운트 2가 나와야하는데 2랑 소멸자랑 같이 나와버리네? 
	shared_ptr <Resource> oil = make_shared <Resource>();
	//shared_ptr <Resource> mineral = oil;
	shared_ptr <Resource> mineral = make_shared <Resource>();
	oil->Share(mineral);
	
	

#pragma endregion

#pragma region weak pointer

#pragma endregion


#pragma region R value L value
	// R value vs L value 개념이랑 차이? 
	// 대입 연산자 기준 오른쪽 왼쪽으로 나눈다? 머여 이게 

#pragma endregion



#pragma endregion

	return 0;
}