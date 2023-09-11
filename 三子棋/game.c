#define _CRT_SECURE_NO_WARNINGS 
#include "game.h"

//���̳�ʼ������ʵ��
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

//���̴�ӡ����ʵ��
void DisplayBoard(char board[ROW][COL], int row, int col) {
	int i = 0;
	for (i = 0; i < row; i++)
	{
		//��ӡ����
		//printf(" %c | %c | %c \n", board[i][0], board[i][1], board[i][2]);
		for (int j = 0; j < col; j++)
		{
			printf(" %c ",board[i][j]);
			if (j < col - 1) {
				printf("|");
			}
		}
		printf("\n");
		//��ӡ�ָ���
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

//������庯��ʵ��
void PlayerMove(char board[ROW][COL], int row, int col) {
	int x = 0;
	int y = 0;

	printf("�������:\n");
	while (1)
	{
		printf("����������:>");
		scanf("%d %d", &x, &y);
		if (0 < x && x <= row && 0 < y && y <= col) {
			if (board[x - 1][y - 1] == ' ') {
				board[x - 1][y - 1] = '*';
				break;
			}
			else
			{
				printf("�����걻ռ�ã�����������\n");
			}
		}
		else
		{
			printf("�������겻�Ϸ�������������\n");
		}
	}
}

//�������庯��ʵ��
void ComputerMove(char board[ROW][COL], int row, int col) {
	int x = 0;
	int y = 0;

	printf("��������\n");
	
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

//�ж���Ӯ����ʵ��
char IsWin(char board[ROW][COL], int row, int col)
{
	//�ж���
	int i = 0;
	int j = 0;
	for ( i = 0; i < row; i++)
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ') {
			return board[i][0];
		}
	}
	
	//�ж���
	for (j = 0; i < col; j++)
	{
		if (board[0][j] == board[1][j] && board[1][j] == board[2][j] && board[0][j] != ' ') {
			return board[0][j];
		}
	}

	//�ж϶Խ���
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != ' ') {
		return board[0][0];
	}
	if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[1][1] != ' ') {
		return board[0][2];
	}
	
	//û��Ӯ
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