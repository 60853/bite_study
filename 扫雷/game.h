#pragma once
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define ROW 9
#define COL 9

#define ROWS ROW+2
#define COLS COL+2

#define MINECOUNT 10

//棋盘初始化函数的声明
void InitBoard(char board[ROWS][COLS], int row, int col,char set);
//棋盘打印函数的声明
void DisplayBoard(char board[ROWS][COLS], int row, int col);
//棋盘中雷的设置函数的声明
void SetMine(char board[ROWS][COLS], int row, int col);

void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col);
