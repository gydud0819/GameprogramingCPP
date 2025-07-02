#pragma once
#include "Utility.h"
class Resource
{
public:
	shared_ptr<Resource> mineral;
	Resource() {}
	~Resource();
	void Share(shared_ptr<Resource> oil);		// 둘다 쓰는게 아닌가 음,,,,
};

