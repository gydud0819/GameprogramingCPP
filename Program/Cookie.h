#pragma once
#include "../include/Util2.h"

class Cookie
{
	string name;
public:
	Cookie() {}
	Cookie(string name) : name(name) {}	// name(name) �̺κ��� ��� �̴ϼȶ������̴�.

	void ShowInfo();
};

