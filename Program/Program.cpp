#include "Utility.h"

int main()
{
#pragma region 반복자 (iterator)
	/*
	* vector, list, deque, map, set에 포함되어 있음
	*/

	vector<int> v;
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	v.push_back(50);

	// 벡터 반복자 사용 방법 (선언을 해줘야 사용할 수 있는듯)
	vector<int>::iterator vectorIterator;

	// 일반 for문 쓰듯이 쓰면되는건가? 
	for (vectorIterator = v.begin(); vectorIterator != v.end(); vectorIterator++)		// < 대신 != 쓰는 이유가 잇나? 마지막 인덱스에 잇는 원소 뒤가 end()여서 != 쓰는건가 
	{
		cout << *vectorIterator << " ";
	}
#pragma endregion


	return 0;
}