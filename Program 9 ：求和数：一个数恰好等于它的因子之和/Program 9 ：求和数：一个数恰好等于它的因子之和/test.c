#define _CRT_SECURE_NO_WARNINGS 1
//题目要求：一个数如果恰好等于它的因子之和，这个数就称为 "完数 "。
//例如6=1＋2＋3.编程找出1000以内的所有完数。   
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int i = 0, j = 0 ;
	for ( i = 1; i < 1000; i++)//找出从1--1000中的完数
	{
		int sum = 0;//sum用来记因数的总和，不包括要求的数本身
		for (j = 1; j < i; j++)
		{
			if (i % j == 0)//如果i能够整除j，说明j是i的一个因数，记入sum中。
			{
				sum += j;
			}
		}
		if (sum == i)
		{
			printf("%d是个和数，因数分别为", sum);
			for (j = 1; j < i; j++)//再遍历一遍，列出这个完数的因数
			{
				if (i % j == 0)
				{
					sum += j;
					printf("  %d", sum);
				}				
			}
			printf("\n");
		}
	}
	system("pause");
	return 0;
}