#include "GameObject.h"

// ����� ������ Ŭ������ �Լ����� cpp�� �и��ؼ� �ۼ���
void BaseballPlayer::SetHitTheBall()
{
	teamScore++;	// ��� Ÿ���� ���������� ���Ƿ� 1���� �ø���� ����
	cout << name << "��(��) ��Ÿ�� �ƴ�. " << "���� �� ���� : " << teamScore << endl;
}

int BaseballPlayer::GetTeamScore()
{
	return teamScore;	// ��ü �� ���� ��ȯ
}
