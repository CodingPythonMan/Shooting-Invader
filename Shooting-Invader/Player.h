#pragma once

#define PLAYER_ATTACK_PERIOD 10

//--------------------------------------------------------------------
// 아군 구조체 선언
//--------------------------------------------------------------------
struct PLAYER
{
	int _hp;					// 플레이어 HP

	int _x;						// 플레이어 좌표
	int _y;

	int _attackCoolTime;
	int _visible;				// 플레이어 생존 여부
};

//--------------------------------------------------------------------
// 게임 시작시 전체 데이터 초기화용.
//--------------------------------------------------------------------
void Player_Initial(void);

//--------------------------------------------------------------------
// Player X 이동
//--------------------------------------------------------------------
void Player_xMove(int move);

//--------------------------------------------------------------------
// Player Y 이동
//--------------------------------------------------------------------
void Player_yMove(int move);

//--------------------------------------------------------------------
// Player 미사일 어택
//--------------------------------------------------------------------
void Player_MissileAttack();

//--------------------------------------------------------------------
// Player 업데이트
//--------------------------------------------------------------------
bool Player_Update(void);

//--------------------------------------------------------------------
// Player 그리기
//--------------------------------------------------------------------
void Player_Draw(void);