#pragma once
#include "Util.h"
class Resource
{
	shared_ptr<Resource> mineral;
public:
	Resource() {}
	~Resource();
	void Share(shared_ptr<Resource> oil);		// �б� �������� �Ѵٸ� const ���̱� 
};

