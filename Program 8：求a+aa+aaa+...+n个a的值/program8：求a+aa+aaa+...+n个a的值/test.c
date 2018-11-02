#define _CRT_SECURE_NO_WARNINGS 1
//题目要求：求s=a+aa+aaa+aaaa+aaaaa+a...a的值，
//其中a是一个数字。例如：
//2+22+222+2222+22222(此时有5个数相加)，
//几个数相加由键盘控制
//我的思路如下：因为它的每一项的每一位数字都相同，那么可以用一个循环，求出想要求的那一项数
//可是题目要求是求出这一组数列前n项个数的和，那么就要求不但要求出每一项的数，还要相加
//可以加个嵌套循环，外层循环决定每次要求出的是哪一项，内层循环求出那一项数，
//内层循环结束后外层循环加上呢那一项。
//我这个做法是倒数着计算这个数列的每一位然后相加的。
//代码很low，有待改进

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
	int a = 0;
	int i = 0;
	int item = 0;
	int count = 0;
	printf("请分别输入要求的a和需要求他的前i项的和：");
	scanf("%d  %d", &a, &i);
	int items = i;
	//i代表这一数列的最高次幂就是i；
	for (i; i > 0; i--)
	{	
		int x = i ;
		for (x ; x > 0; x--)//此处加一个循环，最高次幂代表第几项，所以，例如最高次幂是3，则代表第三项，aaa。
		{
			item += 2 * pow(10, x-1);//循环结束后可以得出当前项的值，例如，x=3,则得出第三项的值；
		}	
		count += item;//从最后一项倒退着相加，最后得出总和
		item = 0;
	}
	printf("前%d项和为%d\n", items, count);
	system("pause");
	return 0;
}//2018.11.3