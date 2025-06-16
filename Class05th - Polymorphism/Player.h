#pragma once
#include "Utility.h"
class Player			// 최상위 부모 클래스
{
	string name;
	string position;
	
public:
	Player() = default;
	Player(string name, string position) : name(name), position(position) {}

	void ShowInfo();
};

class Pitcher : virtual public Player
{
public:
	Pitcher() {}
	Pitcher(string name, string position) : Player(name, position) {}
};

class Batter : virtual public Player
{
public:
	Batter() {}
	Batter(string name, string position) : Player(name, position) {}
};

// 다중 상속과 다이아몬드 상속 모두를 포함하고 있다. 
// 해결 방법 : 상속할 때 virtual 키워드를 붙인다.
class TwoWayPlayer : public Pitcher, public Batter
{
public:

	TwoWayPlayer() = default;
	TwoWayPlayer(string name, string position) : Player(name, position), Pitcher(), Batter() {}

};

	

