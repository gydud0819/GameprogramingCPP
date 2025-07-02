#include "Resource.h"

Resource::~Resource()
{
	cout << "Release Resource" << endl;
}

void Resource::Share(shared_ptr<Resource> oil)
{
	this->mineral = oil;
	cout << oil.use_count() << endl;
}


