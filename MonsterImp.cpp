// Monster imp file
#include "Monster.h"

#include <stdlib.h> 
#include <ctime>

Monster::Monster()
{
	attack = 4;
	health = 5;
	strength = 2;
}

void Monster::getPosition(int &X, int &Y)
{
	X = x;
	Y = y;
	
}

void Monster::setPosition(int X, int Y)
{
	x = X;
	y = Y;
	
}


void Monster::determineMovement()
{
	srand( time( 0 ) );
	int randomNumberGenerated = rand() % 4;
	
	
}
