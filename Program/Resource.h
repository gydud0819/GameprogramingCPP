#pragma once
#include "Utility.h"
class Resource
{
public:
	shared_ptr<Resource> mineral;
	Resource() {}
	~Resource();
	void Share(shared_ptr<Resource> oil);		// �Ѵ� ���°� �ƴѰ� ��,,,,
};

