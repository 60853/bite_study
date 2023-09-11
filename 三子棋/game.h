#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define ROW 3
#define COL 3

//棋盘初始化函数声明
void InitBoard(char board[ROW][COL], int row, int col);

//棋盘打印函数声明
void DisplayBoard(char board[ROW][COL], int row, int col);

//玩家下棋函数声明
void PlayerMove(char board[ROW][COL], int row, int col);

//电脑下棋函数声明
void ComputerMove(char board[ROW][COL], int row, int col);

//判断输赢函数声明
char IsWin(char board[ROW][COL], int row, int col);

int IsFull(char board[ROW][COL], int row, int col);