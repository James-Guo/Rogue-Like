// Monster header file
#pragma once

class Monster
{
	// coordinates
	int x;
	int y;
	
	// stats
	int health;
	int attack;
	int strength;
	
	public:
		Monster();
		void setPosition(int X, int Y);
		void getPosition(int &X, int &Y);
		void determineMovement();
	
};
