#include "Resource.h"

Resource::~Resource()
{
	cout << "Release Resource" << endl;
}

void Resource::Share(shared_ptr<Resource> oil)
{
	cout << "���� Ƚ�� : " << oil.use_count() << endl;
	mineral = oil;
}


