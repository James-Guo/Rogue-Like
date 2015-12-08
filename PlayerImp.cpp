// Player Imp file

#include "Player.h"

Player::Player()
{
	attack = 5;
	strength = 4;
	health = 20;
}

void Player::getPosition(int &X, int &Y)
{
	X = x;
	Y = y;
	
}

void Player::setPosition(int X, int Y)
{
	x = X;
	y = Y;
	
}
