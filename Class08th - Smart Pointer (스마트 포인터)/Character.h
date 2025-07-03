#pragma once
#include "Util.h"

class Character
{
	weak_ptr<Character> E;
public:
	Character() {}
	void Parter(const weak_ptr<Character>& P);
	~Character();
	//
};

