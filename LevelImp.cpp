// Level Imp file

#include "Level.h"

#include <stdlib.h> 
#include <ctime>

void Level::load(string lvl, Player &player, Monster &monster)
{
	string line;
	ifstream fin;
	

	fin.open(lvl);
	
	while ( !fin.eof() )
	{
		getline(fin, line);
	    board.push_back(line);
	
	}
	
	fin.close();
	
	char tile;
	
	for (int i = 0; i < board.size(); i++)
	{
		for (int j = 0; j < board[i].size(); j++)
		{
			 tile = board[i][j];
			
			switch (tile)
			{
				case '@':
					player.setPosition(j, i);
					break;
				case 'M':
					monster.setPosition(j,i);
					break;
			}
		}
	}
	
	

}


void Level::setTile(int x, int y, char tile)
{
	board[y][x] = tile;
}

void Level::helpMove(int x, int y, Player &player)
{
	player.setPosition(x, y);
	setTile(x, y , '@');

}

void Level::helpMove(int x, int y, Monster &monster)
{
	monster.setPosition(x, y);
	setTile(x, y , 'M');

}


void Level::movePlayer(Player &player)
{
	int x;
	int y;
	
	player.getPosition(x, y);
	
	printf("Enter a move command (w/s/a/d): ");
	char input = getch();
	
	switch (input)
	{
		case 'w':
		case 'W':
				
			if (y - 1 >= 0  && board[y-1][x] != '#')
			{
				helpMove(x, y - 1, player);
				setTile(x, y, '.');
			
			}
				
			break;
			
		case 'a':
		case 'A':
			if (x - 1 >= 0   && board[y][x-1] != '#')
			{
				helpMove(x - 1, y, player);
				setTile(x, y, '.');
			}
			
			break;
		
		case 's':
		case 'S':
			
			if (y + 1 < board.size()  && board[y+1][x] != '#' )
			{
				helpMove(x, y + 1, player);
				setTile(x, y, '.');
			
			}
				
			break;
					
		case 'd':
		case 'D':			
			if (x + 1 < board[y].size() && board[y][x+1] != '#')
			{
				helpMove(x + 1, y, player);
				setTile(x, y, '.');
			
			}
			
			break;
			
		default:
			printf("\n\ninvalid input\n");
		
	}
	
	
}



void Level::moveMonster(Monster &monster)
{
	
	int x;
	int y;
	
	monster.getPosition(x, y);
	
	srand( time( 0 ) );
	bool directionChosen = false;
	
	while ( !directionChosen )
	{
		int randomNumberGenerated = rand() % 4;
		
		switch (randomNumberGenerated)
		{
			case 0:
				if (y - 1 >= 0  && board[y-1][x] != '#')
				{
					helpMove(x, y - 1, monster);
					setTile(x, y, '.');
					directionChosen = true;
				}
				
				break;
			
			case 1:
				if (x - 1 >= 0   && board[y][x-1] != '#')
				{
					helpMove(x - 1, y, monster);
					setTile(x, y, '.');
					directionChosen = true;
				}
				
				break;
				
				
			case 2:
				if (y + 1 < board.size()  && board[y+1][x] != '#' )
				{
					helpMove(x, y + 1, monster);
					setTile(x, y, '.');
					directionChosen = true;
				
				}
				
			break;
				
			case 3:
				if (x + 1 < board[y].size() && board[y][x+1] != '#')
				{
					helpMove(x + 1, y, monster);
					setTile(x, y, '.');
					directionChosen = true;
				
				}
				
				break;
				
				
				
		}
		
	}
	
	
	
}

void Level::print()
{

	printf( "%s", string(100, '\n').c_str() );
	
	for (int i = 0; i < board.size(); i++)
	{
		printf("%s\n", board[i].c_str() );
	}

}


