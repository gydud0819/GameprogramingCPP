#pragma once
#include "Item.h"
class Potion : public Item
{
public:
	Potion() {}
	virtual void Use() override;
	~Potion();
};

class HealPotion : public Potion
{
	int hp;
public:
	HealPotion() = default;
	HealPotion(int hp) : hp(hp) {}

	void Use() override;
};

