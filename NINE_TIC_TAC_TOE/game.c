/* Andry RAFAM ANDRIANJAFY - December 2018

9x9 TIC TAC TOE game. Implemented under Linux Ubuntu 16.04 LTS.

GCC Version 6.5.0 && GNU Debugger GDB 8.2 */


#include <stdio.h>
#include <stdlib.h>
#include "color.h"
#include "header.h"

/*Main program*/			
int main()
{
	char board[10][10] = { {'*','0','1','2','3','4','5','6','7','8'},
					   {'0','.','.','.','.','.','.','.','.','.'}, 
					   {'1','.','.','.','.','.','.','.','.','.'},
					   {'2','.','.','.','.','.','.','.','.','.'},
					   {'3','.','.','.','.','.','.','.','.','.'},
					   {'4','.','.','.','.','.','.','.','.','.'}, 
					   {'5','.','.','.','.','.','.','.','.','.'},
					   {'6','.','.','.','.','.','.','.','.','.'},
					   {'7','.','.','.','.','.','.','.','.','.'},
					   {'8','.','.','.','.','.','.','.','.','.'} };
					  	
	print_board(board);	
	int x,y; // x and y are the coordinates
	int turn = 1;	
	for (int count = 0; count < 81 ; count++)
	{
		if (turn == 1)
		{
			label1 : do {
				fprintf(stdout, Green "\nPlayer 1 input your coordinates ");
				fprintf(stdout,Reset);
				fprintf(stdout, "( separate by space ) >> ");
				scanf("%d", &x);
				scanf("%d", &y);
				print_board(board);
			} while ((x < 0|| x > 8) || (y < 0 || y > 8));
			printf("\n");
				
			if (attack1(x,y,board)) // Check if a square is already filled
			{
				print_board(board);
				printf("\n");
				fprintf(stdout, "You've already played that move. Try another coordinates.\n");				
				goto label1;
			} 
			else if (attack_O(x,y,board)) // If player 1 attack player 2 piece; player 2 win.
			{
				print_board(board);
				printf("\n");
				fprintf(stdout, Red "Player_2 already played that move. Try another coordinates.\n");
				fprintf(stdout, Reset);
				goto label1;
			}	
			board[x+1][y+1] = 'X';
								
			print_board(board);	

			/* Check if player 1 has won */
			if (check_board(board))
			{
				fprintf(stdout, Green "\nPLAYER 1 WIN !!!\n\n");
				fprintf(stdout, Reset);								
				return EXIT_SUCCESS;
			}
			turn += 1;		
		}
		
		else if (turn == 2)
		{
			label2 : do {
				fprintf(stdout, Yellow "\nPlayer 2 input your coordinates ");
				fprintf(stdout, Reset);
				fprintf(stdout, "( separate by space ) >> ");	
				scanf("%d", &x);
				scanf("%d", &y);
				print_board(board);
			} while ((x < 0|| x > 8) || (y < 0 || y > 8));
			
			printf("\n");
				
			if (attack2(x,y,board)) // Check if a square is already filled
			{
				print_board(board);
				printf("\n");				
				fprintf(stdout, "You've already played that move. Try another coordinates.\n");
				goto label2;
			}
			else if (attack_X(x,y,board)) // If player 2 attack player 1 piece; player 1 win.
			{
				print_board(board);
				printf("\n");
				fprintf(stdout, Red "Player_1 already played that move. Try another coordinates.\n");
				fprintf(stdout, Reset);
				goto label2;
			}
			board[x+1][y+1] = 'O';
	
			print_board(board);

			/* Check if player 2 has won */
			if (check_board(board))
			{	
				fprintf(stdout, Yellow "\nPLAYER 2 WIN !!!\n\n");
				fprintf(stdout, Reset);								
				return EXIT_SUCCESS;
			}
			turn -= 1;		
		}
	}
	fprintf(stdout, "\n\n[ NULL ] \n\n");
	return EXIT_SUCCESS;
}

		

		
	
