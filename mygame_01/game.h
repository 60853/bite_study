#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define ROW 3
#define COL 3

//���̳�ʼ����������
void InitBoard(char board[ROW][COL], int row, int col);

//���̴�ӡ��������
void DisplayBoard(char board[ROW][COL], int row, int col);

//������庯������
void PlayerMove(char board[ROW][COL], int row, int col);

//�������庯������
void ComputerMove(char board[ROW][COL], int row, int col);

//�ж���Ӯ��������
char IsWin(char board[ROW][COL], int row, int col);

int IsFull(char board[ROW][COL], int row, int col);