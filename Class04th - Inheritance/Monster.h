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

	// 기본 생성자로 초기화 이게 더 어려운거 같은데 ㅇㅂㅇ 
//public:
//	Monster()
//	{
//		name = "monster";
//		hp = 10;
//		def = 20;
//	}
	
};

class Goblin : public Monster	// 상속하는 방법
{
	int attack;
public:

	Goblin(string name, int hp, int def, int attack) : Monster(name, hp, def), attack(attack) {} //  Monster(name, hp, def) 상속할때 부모 클래스 이름 쓰고 선언한거 차례로 쓰기)
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