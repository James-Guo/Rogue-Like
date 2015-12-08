// Player header file
#pragma once

class Player
{
	// coordinates
	int x;
	int y;
	
	// stats
	int health;
	int attack;
	int strength;
	
	public:
		Player();
		void setPosition(int X, int Y);
		void getPosition(int &X, int &Y);
	
};
