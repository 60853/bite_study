#define _CRT_SECURE_NO_WARNINGS 
#include "game.h"

//棋盘初始化函数实现
void InitBoard(char board[ROW][COL], int row, int col) {
	int i = 0;
	int j = 0;
	for ( i = 0; i < row; i++)
	{
		for ( j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}
}

//棋盘打印函数实现
void DisplayBoard(char board[ROW][COL], int row, int col) {
	int i = 0;
	for (i = 0; i < row; i++)
	{
		//打印数据
		//printf(" %c | %c | %c \n", board[i][0], board[i][1], board[i][2]);
		for (int j = 0; j < col; j++)
		{
			printf(" %c ",board[i][j]);
			if (j < col - 1) {
				printf("|");
			}
		}
		printf("\n");
		//打印分隔符
		/*if (i < row - 1) {
			printf("---|---|---\n");
		}*/
		if (i < row - 1) {
			int j = 0;
			for ( j = 0; j < col; j++)
			{
				printf("---");
				if (j < col - 1) {
					printf("|");
				}
			}
		}
		printf("\n");
	}
}

//玩家下棋函数实现
void PlayerMove(char board[ROW][COL], int row, int col) {
	int x = 0;
	int y = 0;

	printf("玩家下棋:\n");
	while (1)
	{
		printf("请输入坐标:>");
		scanf("%d %d", &x, &y);
		if (0 < x && x <= row && 0 < y && y <= col) {
			if (board[x - 1][y - 1] == ' ') {
				board[x - 1][y - 1] = '*';
				break;
			}
			else
			{
				printf("该坐标被占用，请重新输入\n");
			}
		}
		else
		{
			printf("输入坐标不合法，请重新输入\n");
		}
	}
}

//电脑下棋函数实现
void ComputerMove(char board[ROW][COL], int row, int col) {
	int x = 0;
	int y = 0;

	printf("电脑下棋\n");
	
	while (1)
	{
		x = rand() % row;	//0~row
		y = rand() % col;	//0~col
		if (board[x][y] == ' ') {
			board[x][y] = '#';
			break;
		}
	}
}

//判断输赢函数实现
char IsWin(char board[ROW][COL], int row, int col)
{
	//判断行
	int i = 0;
	int j = 0;
	for ( i = 0; i < row; i++)
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ') {
			return board[i][0];
		}
	}
	
	//判断列
	for (j = 0; i < col; j++)
	{
		if (board[0][j] == board[1][j] && board[1][j] == board[2][j] && board[0][j] != ' ') {
			return board[0][j];
		}
	}

	//判断对角线
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != ' ') {
		return board[0][0];
	}
	if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[1][1] != ' ') {
		return board[0][2];
	}
	
	//没人赢
	if (IsFull(board, ROW, COL) == 1) {
		return 'Q';
	}
	return 'C';
}

int IsFull(char board[ROW][COL], int row, int col) {

	int i = 0;
	int j = 0;
	for ( i = 0; i < row; i++)
	{
		for ( j = 0; j < col; j++)
		{
			if (board[i][j] == ' ') {
				return 0;
			}
		}
	}
	return 1;
}