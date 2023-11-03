#define _CRT_SECURE_NO_WARNINGS
#include "game.h"
#include "color.h"

//���̳�ʼ��������ʵ��
void InitBoard(char board[ROWS][COLS], int rows, int cols,char set) {
	int i = 0;
	int j = 0;

	for ( i = 0; i < rows; i++)
	{
		for ( j = 0; j < cols; j++)
		{
			board[i][j] = set;
		}
	}
}

//���̴�ӡ������ʵ��
void DisplayBoard(char board[ROWS][COLS], int row, int col) {
	int i = 0;
	int j = 0;
	printf("-----------------ɨ����Ϸ--------------------\n");

	printf("   ");
	for ( j = 1; j <= row; j++)
	{
		printf(COLOR_GREEN "%d " COLOR_RESET, j);
	}
	printf("\n");
	printf("\n");
	for ( i = 0; i < row; i++)
	{
		printf(COLOR_GREEN "%d  " COLOR_RESET, i + 1);
		for ( j = 0; j < col; j++)
		{
			if (board[i + 1][j + 1] == 'M') 
			{
				/*printf("\033[1;31m M \033[0m");*/
				printf(COLOR_RED "M " COLOR_RESET);
			}
			else
			{
				printf("%c ", board[i + 1][j + 1]);
			}
		}
		printf("\n");
	}
	printf("-----------------ɨ����Ϸ--------------------\n");
}

//�������׵����ú���������
void SetMine(char board[ROWS][COLS], int row, int col) 
{
	int count = MINECOUNT;
	//x~1-9
	//y~1-9

	while (count)
	{
		int x = rand() % row + 1;
		int y = rand() % col + 1;

		if (board[x][y]== '0') {
			board[x][y] = '1';
			count--;
		}
	}
}

int get_mine_count(char mine[ROWS][COLS], int x, int y) 
{
	return (mine[x - 1][y - 1] + 
		mine[x][y - 1] + 
		mine[x + 1][y - 1] +
		mine[x + 1][y] +
		mine[x + 1][y + 1] + 
		mine[x][y + 1] + 
		mine[x - 1][y + 1] + 
		mine[x - 1][y] - 
		8 * '0');
}

void RevealCell(char revealed[ROWS][COLS], char mine[ROWS][COLS], char show[ROWS][COLS], int x, int y)
{
	if (x < 1 || x > ROW || y < 1 || y > COL) {
			return;
	}

	int count = get_mine_count(mine, x, y);
	if (revealed[x][y]) {
		return;
	}

	revealed[x][y] = 1;

	if (count == 0) {
		RevealCell(revealed, mine, show, x - 1, y - 1);
		RevealCell(revealed, mine, show, x - 1, y);
		RevealCell(revealed, mine, show, x - 1, y + 1);
		RevealCell(revealed, mine, show, x, y - 1);
		RevealCell(revealed, mine, show, x, y + 1);
		RevealCell(revealed, mine, show, x + 1, y - 1);
		RevealCell(revealed, mine, show, x + 1, y);
		RevealCell(revealed,mine, show, x + 1, y + 1);
	}
	
	show[x][y] = count + '0';
}

void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col) 
{
	int x = 0;
	int y = 0;
	int z = 0;

	int win = 1;

	while (win<row*col-MINECOUNT)
	{
		printf("������Ҫ�Ų������>");
		scanf("%d %d %d", &x, &y, &z);

		if (x >= 1 && x <= row && y >= 1 && y <= col && z >= 0 && z <= 1)
		{
			if (show[x][y] != '*' && show[x][y] != 'M') {
				printf("�������Ѿ����Ų���ˣ������ظ��Ų�\n");
			}
			else
			{
				if (z == 1 && show[x][y] == '*') {
					show[x][y] = 'M';
					DisplayBoard(show, ROW, COL);
				}
				else if (z == 1 && show[x][y] == 'M')
				{
					show[x][y] = '*';
					DisplayBoard(show, ROW, COL);
				}
				else
				{
					//�������
					if (mine[x][y] == '1')
					{
						printf("���ź�������ը����\n");
						DisplayBoard(mine, ROW, COL);
						break;
					}
					//���������
					else
					{
						int m = 0;
						/*win++;
						int count = get_mine_count(mine, x, y);
						show[x][y] = count + '0';
						DisplayBoard(show, ROW, COL);*/
						char revealed[ROWS][COLS] = { 0 };
						RevealCell(revealed,mine, show, x, y);
						DisplayBoard(show, ROW, COL);
						for (int i = 1; i <= row; i++)
						{
							for (int j = 0; j <= col; j++)
							{
								if(show[i][j]!='*'&&show[i][j]!='M')
								{
									m++;
								}
							}
						}
						win = m;
					}
				}
				
			}
		}
		else
		{
			printf("�����������Ƿ�������������\n");
		}	
	}
	if(win == row * col - MINECOUNT)
	{
		printf("��ϲ�����׳ɹ��������Ϸʤ��~~~\n");
		DisplayBoard(mine, ROW, COL);
	}
}