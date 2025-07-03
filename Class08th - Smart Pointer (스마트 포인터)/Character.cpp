#include "Character.h"

void Character::Parter(const weak_ptr<Character>& P)
{
	E = P;
}

Character::~Character()
{
	cout << "Release Chracter" << endl;
}
