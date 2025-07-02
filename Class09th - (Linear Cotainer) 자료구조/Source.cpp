#include "Util.h"

int main()
{
#pragma region STL(Standrad Templte Library)
	// 선형 컨테이너 : vector, deque, list, string
	// 컨테이너 어댑터 : stack, queue, priority_queue
	// 연관 컨테이너 : set, map, anoreded_set, anoreded_map   
#pragma endregion

#pragma region 선형 컨테이너

#pragma region vector Container

	//vector<int> vector;		// 가변 배열 
	//
	//vector.reserve(10);		// dlrp anjdu 
	//
	//vector.push_back(10);
	//vector.push_back(20);
	//vector.push_back(30);
	//vector.push_back(40);
	//vector.push_back(50);
	//
	//vector.pop_back();
	//vector.pop_back();
	//
	//for (int i = 0; i < vector.size(); i++)
	//{
	//	cout << "vector 값 : " << vector[i] << " " << endl;
	//}

#pragma endregion

#pragma region list Container
	//list<int> list;
	//
	//// [20]
	//list.push_back(20);
	//// [20]->[30]
	//list.push_back(30);
	//// [10]->[20]->[30]
	//list.push_front(10);
	//
	//// [20]->[30]
	//list.pop_front();
	//
	//
	//list.assign(3, 10);
	//
	//for (auto it :list)
	//{
	//	cout<< it << endl;
	//}
	//
	//cout << "list size : " << list.size() << endl;

#pragma endregion

#pragma region string
	//string name;
	//
	////cout << &name << endl;
	//
	//
	//name = "CookieRun";
	//cout << name.append(" Kingdom") << endl;
	//cout << name.capacity() << endl;	// 기본이 15?
	////cout << name << endl;
	//
	//name = "Beast Eeast";
	//cout << name << endl;
	//cout << name.capacity() << endl;	


#pragma endregion

#pragma endregion

	return 0;
}
