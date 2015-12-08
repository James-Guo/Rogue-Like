// Level header
#pragma once

#include <iostream>
#include <fstream>
#include <string>
#include <cstdio>            //printf
#include <vector>
#include <conio.h> 			// _getch() or getch()

#include "Player.h"
#include "Monster.h"

using namespace std;

class Level
{
	vector <string> board;
	
	void helpMove(int x, int y, Player &player);
	void helpMove(int x, int y, Monster &monster);
	public:		
		void load(string lvl, Player &player, Monster &monster);
		void print();
		
		void setTile(int x, int y , char tile);
		void movePlayer(Player &player);
		void moveMonster(Monster &monster);
		
	
};
