// RogueLike Imp

#include "RogueLike.h"



void RogueLike::play()
{
	
	level.load("SmallLevel1.txt", player, monster);
	

	level.print();
	
	
	
	while (true)
	{
		level.print();
		level.movePlayer(player);
		level.moveMonster(monster);
	}
	
}
