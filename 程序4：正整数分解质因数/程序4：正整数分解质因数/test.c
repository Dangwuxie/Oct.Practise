#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int n = 0;//n用来接收用户要分解质因数的正整数
	int k = 2;//先取一个最小的质数2。（质数定义：大于1的自然数中，除了1和他本身以外不再有其他因数）
	printf("please input a number:");
	scanf("%d", &n);//接收
	while (n>k)//当被除数大于除数时，进入循环判断是否还有存在的因数，
	{
		if (n%k == 0)//如果被除数n整除除数k，输出k
		{
			printf("%5d", k);
			n = n / k;//将n除以k后的商重新作为被除数，继续判断是否还有因数
		}
   else if (n%k != 0)//如果被除数不能整除当前小于它的除数，那么除数加1，
		{
			k++;//除数加一后继续while循环，判断因数
		}
	}//当被除数等于除数时，说明从2到它本身已经没有可以整除2的数了，退出循环
	if (n==k)
	{
		printf("%5d\n", n);//输出最后没有任何多余因子的因数
	}
	system("pause");
	return 0;
}