#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <assert.h>
#include <ctype.h>

enum Turn { NONE = 0, A = 1, B = 10, DRAW = -1 };
void init_board(int board[3][3]);
void show_board(int board[3][3]);
enum Turn winner(int board[3][3]);
enum Turn flip(enum Turn player);
void tic(int board[3][3], enum Turn* player);
void congratulation(enum Turn who);
int main()
{
	enum Turn player = A;
	enum Turn who = NONE;
	int b[3][3];
	init_board(b);
	show_board(b);
	while ((who = winner(b)) == NONE && who != DRAW) {
		tic(b, &player);
		show_board(b);
	}
	congratulation(who);
	return 0;
}
void init_board(int board[3][3])
{
	int i = 0, j = 0;
	for (i = 0; i < 3; ++i)
		for (j = 0; j < 3; ++j)
			board[i][j] = NONE;
}
char pebble(enum Turn pos)
{
	switch (pos) {
	case 0: return ' ';
	case 1: return 'O';
	case 10: return 'X';
	default: assert(0);
	}
}
void show_board(int board[3][3])
{
	int i = 0, j = 0;
	printf("     1   2   3\n");
	printf("   +---+---+---+\n");
	for (i = 0; i < 3; ++i) {
		printf(" %c | ", 'A' + i);
		for (j = 0; j < 3; ++j) {
			printf("%c | ", pebble(board[i][j]));
		}
		printf("\n   +---+---+---+\n");
	}
}
enum Turn winner(int board[3][3])
{
	int sum[8] = { 0 };
	int i = 0, j = 0;
	for (i = 0; i < 3; ++i) 
	{
		for (j = 0; j < 3; ++j) 
		{
			sum[i] += board[i][j];
			sum[3 + i] += board[j][i];
		}
		sum[6] += board[i][i];
		sum[7] += board[i][2 - i];
	}
	// 승자를 찾음
	for (i = 0; i < 8; ++i) 
	{
		if (sum[i] == A * 3) return A;
		if (sum[i] == B * 3) return B;
	}
	// 게임이 진행중인가 판별
	for (i = 0; i < 8; ++i) 
	{
		if (sum[i] == A * 2 || sum[i] == A * 1) return NONE;
		if (sum[i] == B * 2 || sum[i] == B * 1) return NONE;
		if (sum[i] == 0) return NONE;
	}
	return DRAW;
}
enum Turn flip(enum Turn player)
{
	return (player == A) ? B : A;
}
char player_name(enum Turn player)
{
	return (player == A) ? 'A' : 'B';
}
char pebble_shape(enum Turn player)
{
	return (player == A) ? 'O' : 'X';
}
int is_wrong_place(int board[3][3], int row, int col)
{
	return ((row < 0 || row > 2) || (col < 0 || col > 2)) ? 1 : (board[row][col] != NONE);
}
void tic(int board[3][3], enum Turn* pp)
{
	char row, col;
	enum Turn player = *pp;
	do 
	{
		char buf[80];
		printf("선수 %c: 어디에 두시겠습니까(예: b3) ? ",
		player_name(player));
		scanf("%c%c", &row, &col);
		gets(buf);
		row -= (isupper(row)) ? 'A' : 'a';
		col -= '1';
	} 
	while (is_wrong_place(board, row, col) && printf("Wrong position !\n"));
	board[row][col] = player;
	*pp = flip(player);
}

void congratulation(enum Turn player)
{
	switch (player) 
	{
	case A:
	case B:
		printf("\n");
		printf("*************************************\n");
		printf("*** 축하합니다! 선수 %c(%c) 승리! ***\n", player_name(player), pebble_shape(player));
		printf("*************************************\n");
		printf("\n");
		break;
	default:
		printf("\n");
		printf("*************************************\n");
		printf("*** 아쉽네요. 무승부입니다. ***\n");
		printf("*************************************\n");
		printf("\n");
		break;
	}
}
