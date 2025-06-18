#include "Utility.h"

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

#pragma region 컨테이너 어댑터
	// 우왕 잣댓당 오또케 수정해야하집? 어디서부터 손대야 할지 1도 모르겠당 히힛
	// 청심환 몇개 먹어야 긴장이 안될까
#pragma region stack
	// 후입선출

	//stack<int> stack;
	//
	//stack.push(10);
	//stack.push(20);
	//stack.push(30);
	//stack.push(40);
	//
	//// 위에서부터 뽑고 출력한다
	//
	//// 개수만큼 돌려서 출력해야하니까 while이 좀 더 나은거 같기도한데 
	//// 이중for문 쓰면 한번만 써도 되는거같긴한데 모르겟네 헷갈린다 
	//for (int i = 0; i < stack.size(); i++)
	//{
	//	for (int i = 0; i < 2; i++)
	//	{
	//		cout << stack.top() << endl;
	//		stack.pop();
	//	
	//	}
	//}

	/*for (int i = 0; i < stack.size(); i++)
	{
		cout << stack.top() << endl;
		stack.pop();
		cout << stack.top() << endl;
		stack.pop();
	}*/

	/*while (stack.empty() == false)
	{
		cout << stack.top() << endl;
		stack.pop();
	}*/

#pragma endregion

#pragma region Queue Container
	// 선입 선출 : 먼저 들어온 데이터가 먼저 나감 
	queue<int> queue;

	queue.push(10);
	queue.push(20);
	queue.push(30);
	queue.push(40);
	queue.push(50);

	while (queue.empty() == false)
	{
		cout << queue.front() << endl;
		queue.pop();
	}
		
#pragma endregion


#pragma endregion

	return 0;
}
