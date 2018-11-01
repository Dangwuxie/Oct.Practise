#define _CRT_SECURE_NO_WARNINGS 1
//题目：输入两个正整数，m和n，求其最大公约数和最小公倍数；
//利用辗转相除法
//a。最大公约数：（最大公因数）就是几个数共有的因数中最大的一个。
//例如12和18，
//12的因数有1，12，2，6，3，4.
//18的因数有1，18，2，9，3，6.
//共有的因数有1，2，3，6
//所以6就是最大公约数
//b.最小公倍数：就是几个数共有的倍数中最小的一个
//例如4和6
//4的倍数有4，8，12，16，20......
//6的倍数有6，12，18，24，30......
//4和6的共有公倍数有12，18......
//所以4和6的最小公倍数是12.
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
	int a = 0, b = 0;
	printf("please input two positive integer :");
	scanf("%d   %d", &a, &b);
//先求最大公因数；
//辗转相除法
	int t = 0;
	int num = 0;
	num = (a*b);
	if (a<b)
	{
		t = a;
		a = b;
		b = t;
	}
	while ( a%b != 0)
	{
		t = a % b;
		b = a;
		a = t;
	}
	printf("The gcd is %d \n", t);	
	int lcm = num / t;
	printf("The lcm is %d\n", lcm);
//相减法
//这个方法的思想是：
//a.如果a>b,a=a-b;
//b.如果b>a,b=b-a;
//假如a=b,那么其值就是最初两个数的最大公约数；
//如果a!=b,那么一直循环，一直相减。
	//while (a != b)
	//{
	//	if (a > b)
	//		a = a - b;
	//	if (b > a)
	//		b = b - a;
	//}
	//printf("The gcd is %d :", a);
//
//下面求最小公倍数：
//最小公倍数=两整数的乘积/最大公约数
	
	system("pause");
	return 0;
}