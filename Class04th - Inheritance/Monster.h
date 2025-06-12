#pragma once
#include "Util2.h"

class Monster
{
protected:
	string name;
	int hp;
	int def;
public:
	Monster(string name, int hp, int def) : name(name), hp(hp), def(def) {}

	// �⺻ �����ڷ� �ʱ�ȭ �̰� �� ������ ������ ������ 
//public:
//	Monster()
//	{
//		name = "monster";
//		hp = 10;
//		def = 20;
//	}
	
};

class Goblin : public Monster	// ����ϴ� ���
{
	int attack;
public:

	Goblin(string name, int hp, int def, int attack) : Monster(name, hp, def), attack(attack) {} //  Monster(name, hp, def) ����Ҷ� �θ� Ŭ���� �̸� ���� �����Ѱ� ���ʷ� ����)
	void Stats();
};

class Junior_Golem : public Monster
{
	int attack;
public:

	Junior_Golem(string name, int hp, int def, int attack) : Monster(name, hp, def), attack(attack) {}
	void Stats();
};

class Slime : public Monster
{
public:

	Slime(string name, int hp, int def) : Monster(name, hp, def) {}
	void Stats();
};