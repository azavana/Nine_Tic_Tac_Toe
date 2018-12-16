#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "header.h"

/* Functions which checks if a square is empty or not */

bool attack_O (int x, int y, char board[10][10])
{
	if (board[x+1][y+1] == 'O')
	{ return true; }
	else
	{ return false; }
}

bool attack_X (int x, int y, char board[10][10])
{
	if (board[x+1][y+1] == 'X')
	{ return true; }
	else
	{ return false; }
}

bool attack1 (int x, int y, char board[10][10])
{
	if (board[x+1][y+1] != '.' && board[x+1][y+1] != 'O')
	{ return true; }
	else
	{return false; }
}

bool attack2 (int x, int y, char board[10][10])
{
	if (board[x+1][y+1] != '.' && board[x+1][y+1] != 'X')
	{ return true; }
	else
	{ return false; }
}
