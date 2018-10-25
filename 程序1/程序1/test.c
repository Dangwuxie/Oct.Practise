#define _CRT_SECURE_NO_WARNINGS 1
//题目：古典问题，有一对兔子，从出生后第三个月起每个月都生一对兔子
//，小兔子长到第三个月后每个月又生一对兔子，假如兔子都不死
//问每个月的兔子总数为多少？
#include <stdio.h>
#include <stdlib.h>
//此方法为利用递归实现
int Fibo(int n) //定义Fibo函数
{
	if (n == 1)return 1;//第一个数字为1
	if (n == 2)return 1;//第二个数字为1
	if (n > 2)//从第三个数开始，每一个数是前两个数的和
	{
		return Fibo(n - 1) + Fibo(n - 2);//尾递归调用函数
	}
}
int main()
{
	int i, m, n;
	printf("please input n:");
	scanf("%d", &n);//输入要打印的斐波拉契数列的个数（从第一个数开始的）
	printf("The Fibolacci is:");
	for (i = 1; i <= n; i++)//利用for循环逐个输出第n个字符
	{
		m = Fibo(n);//调用Fibo函数
		printf("%d\n", m);
	}
	system("pause");
	return 0;
}
//不利用递归
int main()
{
	int a = 1,b = 1;//定义前两个数字
	int n = 0;
	int m = 0, i = 1;//定义所需变量
	printf("please input n:");
	scanf("%d", &n);
	printf("The Fibolicci is:\n");
	for ( i = 1; i <= n; i++)//利用for循环逐个输出n个Fibolicci数字
	{
		while (i<3)//限定，前两个数字都是一
		{
			printf("%d\n", a);
			i++;
		}
		while ( i>=3 && i<=n )//从第三个开始，每一个数字都是前两个数字之和
		{
			printf("%d\n", a + b);
			a = b;
			b = a + b;
			i++;
		}
	}
	system("pause");
	return 0;

}