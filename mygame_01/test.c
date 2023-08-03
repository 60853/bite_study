#define _CRT_SECURE_NO_WARNINGS 

#include "game.h"

void menu() 
{
	printf("**************************************\n");
	printf("************** 1.三子棋 **************\n");
	printf("************** 0.退  出 **************\n");
	printf("**************************************\n");

}

void game()
{
	char ret = 0;
	char board[ROW][COL] = { 0 };
	//初始化棋盘的函数
	InitBoard(board,ROW,COL);
	DisplayBoard(board,ROW,COL);

	while (1)
	{
		PlayerMove(board, ROW, COL);
		//判断输赢
		ret = IsWin(board, ROW, COL);
		if (ret != 'C') {
			break;
		}
		DisplayBoard(board, ROW, COL);
		ComputerMove(board, ROW, COL);
		//判断输赢
		ret = IsWin(board, ROW, COL);
		if (ret != 'C') {
			break;
		}
		DisplayBoard(board, ROW, COL);
	}
	if (ret == '*') {
		printf("玩家获胜\n");
	}
	else if (ret == '#') {
		printf("电脑获胜\n");
	}
	else
	{
		printf("平局\n");
	}
	DisplayBoard(board, ROW, COL);
	//玩家赢 - '*' 
	//电脑赢 - '#' 
	//平局 - 'Q'
	//继续 - 'C'

}

int main()
{
	srand((unsigned int)time(NULL));

	int input = 0;

	do
	{
		menu();
		printf("请选择:\n");
		scanf("%d", &input);

		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("输入错误，请重新输入\n");
			break;
		}

	} while (input);

	return 0;
}