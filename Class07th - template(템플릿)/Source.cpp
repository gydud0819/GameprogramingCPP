#include "Util.h"

#define SIZE 5

template<typename T>
bool Same(T x, T y)		// bool은 1 byte
{

	if (x == y)		// 이렇게 하라구용..?

		return true;

	else

		return false;


	return x == y;	// 이렇게 써도됨

}

//template<typename S>
//bool Same(S left, S right)		// 문자열 길이가 같으면 된다구용..? 
//{
//	return left == right;	// ????????????????
//}

// 둘이 먼 차이임 

//template<>
//bool Same(const char* x, const char* y)
//{
//	return strlen(x) == strlen(y);
//}


// 템플릿 클래스 예제				진짜 몬말인지 모르겟다 집에가서 다시 해봐야겟다  
template <typename T>
class Container
{
	int index;				// private로 선언했으므로 Container의 멤버 변수
	T list[SIZE];			// 배열의 크기를 SIZE 만큼 정의함
public:
	//Container() {}
	//Container(int size) : size(size) {}

	Container()		// 주석 달면서 다시 공부하기 
	{
		index = 0;						// 멤버 변수 index를 0으로 초기화 (현재 저장된 요소 개수를 의미)
		for (int i = 0; i < SIZE; i++)		// SIZE만큼 돌리되
		{
			list[i] = NULL;					// 이때 list[i]는 NULL로 초기화함.  list[i]가 가리키는 게 아무것도 아닌 NULL을 가리켜야 함(쓰레기값이 들어갈 수 있기 때문에)
			// 템플릿 타입 T가 포인터가 아니면 NULL을 넣는 게 맞지 않을 수 있음
		}
	}
	// T& 앞에 const를 붙이는 이유 : 함수 밖에서 값을 수정하지 못하게 하려고
	// 함수도 인덱스를 받아야 해서 파라미터(매개인자)가 int
	const T& operator [] (int count)		// 연산자 대괄호 오버로딩 operator [] -> 배열은 아니지만 배열처럼 사용하겠다는 일종의 함수 
	{

		return list[count];					// 연산자 오버로딩 같은 경우 return으로 반환해야 하고 여기서 list는 count번째 요소를 반환한다. 
		// (count가 정해져있지 않기때문에 얼마만큼 정해져있는지 모름)
	}

	void Add(T data)		// 원래라면 int data였음. 그러나 값이 변형되기에 T로 반환하고 data
	{
		if (index < SIZE)	// 현재 index가 5로 정의한 배열의 크기 size보다 작으면
		{
			list[index++] = data;	// 현재 index 위치에 data를 넣고, index를 1 증가시킨다

			// list[index] = data;	// 위의 방식이 헷갈리면 이렇게 생각하기
			// index = index + 1;
		}
		else
		{
			cout << "Index Out of Range" << endl;		// 배열의 요소가 넘어갔을 때 출력하는 경고
		}
	}
};

int main()
{
#pragma region 템플릿
	// 데이터 형식에 의존하지 않고 하나의 값이 여러 다른 데이터 형식을 가질 수 있는 기술에 중점을 두어 재사용성을 높일 수 있는 기능
	// 템플릿 사용방법 : template<typename T>

	//cout << Same<int>(3, 3) << endl;
	//cout << Same<char>('N', 'C') << endl;
	//cout << Same<float>(3.3f, 4.4f) << endl;

#pragma endregion

#pragma region 템플릿 특수화
	// 특정 자료형에 대해 다르게 처리하고 싶은 경우 특정한 자료형만 다른 형식으로 동작시키는 기능
	// 

	//cout << Same("apple", "bababa")<<endl;
	//cout << Same("apple", "apple")<<endl;

	//Container<int> container;
	//
	//container.Add(10);
	//container.Add(20);
	//container.Add(30);
	//container.Add(40);
	//container.Add(50);
	//
	//for (int i = 0; i < SIZE; i++)
	//{
	//	cout << container[i] << endl;
	//}
#pragma endregion

}


