#pragma once
#include "Util.h"
class Resource
{
	shared_ptr<Resource> mineral;
public:
	Resource() {}
	~Resource();
	void Share(shared_ptr<Resource> oil);		// 읽기 전용으로 한다면 const 붙이기 
};

