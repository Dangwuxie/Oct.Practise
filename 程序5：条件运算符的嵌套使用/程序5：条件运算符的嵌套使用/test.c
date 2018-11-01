#define _CRT_SECURE_NO_WARNINGS 1
//利用条件运算符的嵌套来完成此试题：学习成绩>=90分的用A表示
//60-89的用B表示，60分以下的用C表示
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int i = 0;
	printf("please input a num:\n");
	scanf("%d", &i);
	(i >= 90) ? (printf("A\n")) :( (i >= 60 && i <= 89) ? (printf("B\n")) : (printf("C\n")));
	system("pause");
	return 0;
}