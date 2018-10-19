#define _CRT_SECURE_NO_WARNINGS 1
#include "game2.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void menu()
{
	printf("**************************\n");
	printf("**********1.play**********\n");
	printf("**********0.exit**********\n");
	printf("**************************\n");
}
void game()
{
	char board[Row][Col] = { 0 };
	Initboard(board, Row, Col);
	Displayboard(board, Row, Col);
	while (1)
	{
		Player(board, Row, Col);//人走
		Displayboard(board, Row, Col);//展示
		char ret = Iswin(board,Row,Col);
		if (ret == 'X')
		{
			printf("玩家赢！\n");
			break;
		}
		else if (ret == '0')
		{
			printf("电脑赢了，你输了！\n");
		}
		else if (ret == 'Q')
		{
			printf("厉害了，平局！\n");
		}
		Computer(board, Row, Col);//机走
		Displayboard(board, Row, Col);//展示

	}
	//ret = Iswin();//判断人是否赢了；
	
}
void Initboard(char board[Row][Col], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}
}
void Displayboard(char board[Row][Col], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			printf("-%c-", board[i][j]);
			if (j <col - 1)
			{
				printf("|");
			}
		}
		printf("\n");
		if (i<row - 1)
		{
			for (j = 0; j < col; j++)
			{
				printf("---");
				if (j < col - 1)
				{
					printf("|");
				}
			}
		}
		printf("\n");		
	}
}
void Player(char board[Row][Col],int row,int col)
{
	//int t = 0;
	int x = 0, y = 0;
	while (1)
	{
		printf("玩家走>>\n");
		printf("请输入要走的坐标：");
		scanf("%d%d", &x, &y);
		if (board[x-1][y-1] == ' ')
		{
			board[x - 1][y - 1] = 'X';
			break;
		}
		else
		{
			printf("该坐标已经使用，请重新输入坐标：\n");
		}
	}
}
void Computer(char board[Row][Col], int row, int col)
{
	int x = 0, y = 0;
	printf("电脑走>>\n");
	srand((unsigned)time(NULL));
	
	while (1)
	{
		x = (rand() % row);
		y = (rand() % col);
		if (board[x][y] == ' ')
		{
			board[x][y] = '0';
			break;
		}
	}
}
char Iswin(char board[Row][Col], int row, int col)
{
	int i = 0;
	for ( i = 0; i < row; i++)
	{
		if (board[i][0]==board[i][1]&&board[i][0]==board[i][2]&&board[i][0]=='X')
		{
			return board[i][0];
		}
	}
	for (i = 0; i < col; i++)
	{
		if (board[0][i]==board[1][i]&&board[1][i]==board[2][i]&&board[0][i]=='X')
		{
			return board[0][i];
		}
	}
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2]&&board[0][0]=='X')
	{
		return board[0][0];
	}
	if (board[2][0] == board[1][1] && board[1][1] == board[0][2] && board[0][2] == 'X')
	{
		return board[2][0];
	}
	int let = Isfull(board, Row, Col);
	if (let == 1)
	{
		return 'Q';
	}
}
int Isfull(char board[Row][Col], int row, int col)
{
	int i = 0, j = 0,count = 0;
	for ( i = 0; i < row; i++)
	{
		for ( j = 0; j < col; j++)
		{
			if (board[i][j]==' ')
			{
				count++;
			}
		}
	}
	if (count == 0)
	{
		return 1;
	}
}