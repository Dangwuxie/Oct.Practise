#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
//交换两个数组中的元素；
/*int main()
{
	int i = 0;
	int j = 0;
	int arr1[] = { 1, 3, 5, 7, 9 };
	int arr2[] = { 2, 4, 6, 8, 10 };
	for (i = 0; i < 5; i++)
	{
		int t = 0;
		t = arr1[i];
		arr1[i] = arr2[i];
		arr2[i] = t;
	}
	for (j = 0; j < 5; j++)
	{
		printf("%5d", arr1[j]);
	}
	printf("\n");
	for (j = 0; j < 5; j++)
	{
		printf("%5d", arr2[j]);
	}
	return 0;
	system("pause");
}*/
/*
{
//计算1/1-1/2+1/3...+1/99-1/100的值；
int i = 0;
double sum = 0 ;
int flag = 1;
for (i = 1; i < 101; i++)
{
sum += flag * (1.0 / i);
flag = -flag;
}
printf("%f\n", sum);
return 0;
system("pause");
}*/
/*{
数一下1到100的所有整数中出现多少次数字9；
	int i = 0;
	int count = 0;
	for (i = 1; i < 101; i++)
	{
		if (9 == i%10)
		{
			count++;
		}
		if (9 == i / 10)
		{
			count++;
		}
	}
	printf("%d\n", count);
    return 0;
	system("pause");
}*/
