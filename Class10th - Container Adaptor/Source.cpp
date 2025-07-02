#include "Util.h"

#pragma region 컨테이너 어댑터

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

#pragma region Queue
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
