#include "Utility.h"

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
	/*int size = 5;*/		// 6개가 넘어가면 안된다구용..? 예외처리해야한다ㄱ구용..? 
	int index;
	T list[SIZE];
public:
	//Container() {}
	//Container(int size) : size(size) {}

	Container()		// 주석 달면서 다시 공부하기 
	{
		int index = 0;
		for (int i = 0; i < SIZE; i++)
		{
			list[i] = NULL;
		}
	}

	const T& operator [] (int count)
	{
		
		return list[count];
	}

	void Add(T data)
	{
		if (index < SIZE)
		{
			list[index++] = data;
		}
		else
		{
			cout << "Index Out of Range" << endl;
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

	Container<int> container;

	container.Add(10);
	container.Add(20);
	container.Add(30);
	container.Add(40);
	container.Add(50);

	for (int i = 0; i < SIZE; i++)
	{
		cout << container[i] << endl;
	}
#pragma endregion

}


