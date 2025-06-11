#pragma once
#include <iostream>

using std::cout;
using std::endl;
using std::cin;
using std::string;


class GameObject
{
#pragma region ���� ������
	// Ŭ���� ���ο� ���ԵǾ� �ִ� �Ӽ��� ���� ������ �����ϴ� �������̴�.
	// Ŭ���� ������ �� �ƹ��͵� �������� ������ �⺻������ private�� �����ȴ�. 
	// private, protected, public 3������ �����ڰ� �ִ�.
	// public : Ŭ���� ���ο� ������ ����ϰ� �ִ� Ŭ������ ����� ��ü������ ����� ����ϴ� �������̴�.
	// protected : Ŭ���� ���ο� ������ ����ϰ� �ִ� Ŭ���������� ������ ����ϴ� �������̴�.
	// private : Ŭ���� ���� ��, ���θ� ����� �� �ִ� ���� �������̴�.


#pragma endregion
private:
	int x;
	int y;
	int z;


protected:
	static int count;
public:

	void SetX(int value)
	{


		if (value >= 100)
		{
			cout << "Exeception" << endl;
		}
		else
		{
			x = value;
		}
	}

	const int& GetX()
	{
		return x;
	}

	void SetY(int value)
	{

		if (value >= 100)
		{
			cout << "Exeception";
		}
		else
		{
			y = value;
		}
	}

	const int& GetY()
	{
		return y;
	}

	void SetZ(int value)
	{
		if (value >= 100)
		{
			cout << "Exeception";
		}
		else
		{
			z = value;
		}
	}

	const int& GetZ()
	{
		return z;
	}

	// static�� Ȱ���� ���� �Լ� 
	void Increase()
	{
		count = count + 1;
	}

};

// ������Ͽ� ���� ������
// ���� ��� �Լ��� Ȱ���� ����
class BaseballPlayer
{
private:
	string name;
	static int teamScore;	// ���� ��� ���� ���� -> ���ο��� �ʱ�ȭ �� �ϱ�
public:
	BaseballPlayer() = default;
	BaseballPlayer(string name) : name(name) {}		// BaseballPlayer ������

	void SetHitTheBall();	// ��Ÿģ ���� ����

	static int GetTeamScore();	// ���� ��� �Լ��� Ȱ��

	~BaseballPlayer();

};






