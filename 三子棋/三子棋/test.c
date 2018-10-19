#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include "game2.h"
int main()
{
	int input = 0;
	
		menu();
		printf("请选择开始游戏或者退出：>>\n");
		scanf("%d", &input);
		while (input)
		{
			game();
			input = 0;
		}
	system("pause");
	return 0;
}