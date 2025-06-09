#include <iostream> // cpp에서 사용하는 입출력 스트림 헤더파일
// 스트림 : 데이터를 송수신하는 연결체제?
/*
* 삽입 연산자 : <<
* 추출 연산자 : >> 
* 
* %d, %f와 같은 형식지정자를 cpp에서 사용 안해도됨
* 
* C : 절차지향
* C++ : 멀티패러다임 언어
*/

using namespace std;

int data = 20;



namespace Player
{
	float time = 5.0f;

	void Function()
	{
		std::cout << "Player Function" << std::endl;
	}
}

namespace Library
{
	const char* manual = "manual";

	void Function()
	{
		std::cout << "Library Function" << std::endl;
	}
}

using namespace Library;	

// 간결하게 사용하고 싶으면 using namespace std; 보다 아래처럼 쓰는게 더 효율적이라고 하던데 왜였는지 기억이 안나네 
using std::cout;
using std::cin;
using std::endl;


int main()
{
#pragma region 스트림
	// 시간의 흐름에 따라 연속적으로 발생하는 데이터의 흐름이다.
	// 스트림은 운영체제에 의해 생성되고 스트림 자체에 버퍼라는 임시 메모리 공간이 존재한다.
	// 추출 연산자 std::cin >> 

	//int a = 5;
	//
	//std::cout << "A " << a << std::endl;
	//std::cout << "Program" << std::endl;
	//
	//std::cout << std::endl;
	//
	//int count = 0;			// 초기화 해줘야 덜 에러 나겠지
	//std::cin >> count;		// C에서 scanf_s 역할을 cpp에서 cin이 그 역할을 대신한다.
	//
	//for (int i = 1; i <= count; i++)	// 10까지?
	//{
	//	std::cout << "PlayStation " << i << std::endl;
	//}

	// 원하는 값만큼 출력? 
	

#pragma endregion

#pragma region 범위 지정 연산자
	// 여러 범위에서 사용되는 식별자를 구분하는 데 사용하는 연산자이다.
	// 범위 지정 연산자는 전역 변수와 같은 이름의 지역 변수가 선언되었을 때 
	// 가장 가까운 범위의 선언된 변수의 이름을 사용하는 범위 규칙이 존재하기 때문에 전역 변수가 호출되지 않는다. 
	// 전역 변수에 선언된 같은 이름의 변수?를 선언하고싶을땐 ::변수를 하면 전역 변수도 출력할 수 있다. 
	// 변수 이름이 다르면 굳이 ::안써도 되나? 

	//int data = 10;	// 얘가 우선순위 
	//
	//std::cout << "지역변수에 있는 data의 값 : "<< data << std::endl;
	//std::cout << "전역변수에 있는 data의 값 : "<< ::data << std::endl;

#pragma endregion

#pragma region 이름 공간(namespace)
	// 속성을 구분할 수 있도록 유효 범위를 설정하는 영역이다.
	// 이름 공간 사용법 : namespace + 사용할 이름
	// 메인함수 내에 선언하는 방법 : 지정한 이름 공간::+변수나 함수 사용

	//Player::Function();
	//Function();
	//
	//cout << endl;
	//
	//cout << "   " << endl;

#pragma endregion

#pragma region 동적 할당
	// new로 heap 공간에 사용하고 delete로 해제한다. 
	// 사용 방법 : new(자료형) -> 소괄호 써도되고 안써도됨 근데 난 쓸래
	// cpp에서 동적할당 사용하고 해제하는 방법 : delete(변수);
	// 동적배열 사용방법 : new + 자료형[5]; 
	// 배열 포인터 쓰고 해제할 때 delete [ ] 변수 이름 사용하기 

	//int* pointer = new int; // 이게 맞아요???????????????????? 긴가민가하네 ㅇㅅㅇ 
	//*pointer = 100;
	//
	//cout << "*pointer 변수 값 : " << *pointer << endl;
	//
	//cout << endl;
	//
	//delete pointer;		// 메모리 해제 
	//
	//
	//// 10 20 30 40 50 
	//pointer = new int[5];
	//
	//for (int i = 0; i < 5; i++)
	//{
	//	cout << "*pointer 변수 값 : " << (i + 1) * 10 << endl;
	//}
	//
	//delete [ ] pointer;		// 메모리 해제,  [ ] 써줘야 함


#pragma endregion

#pragma region 시퀀스 포인트
	/*
	* C, C++에서 연산의 순서와 부작용의 적용 시점을 정의하는 개념
	* ;, &&, ||, ',' 등에서 시퀀스 포인트가 존재
	* 
	* 중요한 이유
	* 정의되지 않은 동작을 유발한다. (예상치 못한 값이나 결과가 나온다?)
	* 
	* 
	* 
	* 
	* 
	* 
	*/

	int i = 0;

	i = i++ + ++i;

	cout << i << endl;
#pragma endregion

	// 정적 변수, 함수, 클래스, 참조자 

#pragma endregion

}


