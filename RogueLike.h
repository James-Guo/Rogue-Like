// Roguelike header
#pragma once

#include "Level.h"
#include "Player.h"
#include "Monster.h"
class RogueLike
{
	Level level;
	Player player;
	Monster monster;
	
	public:
		void play();
		void playerMove();
			
};
