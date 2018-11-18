#include <stdio.h>
#include <stdlib.h>
#include "color.h"
#include "header.h"

void print_rules ()
{
	fprintf(stdout,Red "\n\t[ BELOW ARE THE RULES ]\n\n");
	fprintf(stdout,Reset);
	fprintf(stdout,Green "- Player 1 on a Green side ");
	fprintf(stdout, Reset); fprintf(stdout,"/");
	fprintf(stdout,Yellow " Player 2 on a Yellow side.\n");
	fprintf(stdout, Reset);
	fprintf(stdout,"- Coordinates are read from left to right (Line,Column). Examples: (0,1) means 0th line - 1st column. (6,2) means 6th line - 2nd column.\n");
	fprintf(stdout,"- Attacking opponent's position lead to defeat. Example: If Player_2 plays (0,1); Player_1 can't play (0,1).\n");
	fprintf(stdout,"\n===========================================\n\n");	
	return;
}


void print_board (char board[10][10])
{
	system("clear");	
	
	
	fprintf(stdout,"\n========== 9x9 TIC TAC TOE GAME ==========\n");
	print_rules();
	fprintf(stdout, Reset);			
	
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if (board[i][j] == 'X')
				fprintf(stdout, Green "%c ", board[i][j]);
			else if (board[i][j] == 'O')
				fprintf(stdout, Yellow "%c ", board[i][j]);
			else
				fprintf(stdout, "%c ", board[i][j]);
			fprintf(stdout, Reset);
		}
		fprintf(stdout,"\n");
	}
	return;		
}




	

