#pragma once
#include "Utility.h"
class Player			// �ֻ��� �θ� Ŭ����
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

// ���� ��Ӱ� ���̾Ƹ�� ��� ��θ� �����ϰ� �ִ�. 
// �ذ� ��� : ����� �� virtual Ű���带 ���δ�.
class TwoWayPlayer : public Pitcher, public Batter
{
public:

	TwoWayPlayer() = default;
	TwoWayPlayer(string name, string position) : Player(name, position), Pitcher(), Batter() {}

};

	

