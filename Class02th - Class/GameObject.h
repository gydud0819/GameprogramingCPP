#pragma once
#include <iostream>

using std::cout;
using std::endl;
using std::cin;
using std::string;


class GameObject
{
#pragma region 접근 지정자
	// 클래스 내부에 포함되어 있는 속성에 접근 범위를 제한하는 지정자이다.
	// 클래스 선언할 때 아무것도 선언하지 않으면 기본적으로 private로 지정된다. 
	// private, protected, public 3가지의 지정자가 있다.
	// public : 클래스 내부와 본인이 상속하고 있는 클래스를 비롯해 전체적으로 사용을 허용하는 지정자이다.
	// protected : 클래스 내부와 본인이 상속하고 있는 클래스까지만 접근을 허용하는 지정자이다.
	// private : 클래스 내부 즉, 본인만 사용할 수 있는 접근 지정자이다.


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

	// static을 활용한 예시 함수 
	void Increase()
	{
		count = count + 1;
	}

};

// 헤더파일에 따로 선언함
// 정적 멤버 함수를 활용한 예시
class BaseballPlayer
{
private:
	string name;
	static int teamScore;	// 정적 멤버 변수 선언 -> 메인에서 초기화 꼭 하기
public:
	BaseballPlayer() = default;
	BaseballPlayer(string name) : name(name) {}		// BaseballPlayer 생성자

	void SetHitTheBall();	// 안타친 점수 세팅

	static int GetTeamScore();	// 정적 멤버 함수로 활용

	~BaseballPlayer();

};






