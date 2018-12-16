#include <stdbool.h>
#ifndef header_h_
#define header_h_

bool check_board (char board[10][10]);

bool attack1 (int x, int y, char board[10][10]);

bool attack2 (int x, int y, char board[10][10]);

bool attack_X (int x, int y, char board[10][10]);

bool attack_O (int x, int y, char board[10][10]);

void print_board (char board[10][10]);

void print_rules();

#endif
