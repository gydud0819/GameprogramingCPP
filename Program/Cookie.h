#pragma once
#include "../include/Util2.h"

class Cookie
{
	string name;
public:
	Cookie() {}
	Cookie(string name) : name(name) {}	// name(name) 이부분이 멤버 이니셜라이저이다.

	void ShowInfo();
};

