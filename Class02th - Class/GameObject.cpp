#include "GameObject.h"

// 헤더에 정의한 클래스와 함수들을 cpp에 분리해서 작성함
void BaseballPlayer::SetHitTheBall()
{
	teamScore++;	// 얻는 타점은 랜덤이지만 임의로 1점씩 늘리기로 정의
	cout << name << "이(가) 안타를 쳤다. " << "현재 팀 점수 : " << teamScore << endl;
}

int BaseballPlayer::GetTeamScore()
{
	return teamScore;	// 전체 팀 점수 반환
}
