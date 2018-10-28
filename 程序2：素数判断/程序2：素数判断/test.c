#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main()
{
	int n = 101;
	int i = 0;
	int j = 0;
	for ( n = 101; n < 201; n+=2)//从101开始，因为偶数都是和数，所以每次自增2来判断
	{
		for (i = 2; i <= sqrt(n); i++)//这里必须是<=，比如n为121，那么121不但能被1和本身整除，还能被11整除，如果不加等于号，会被认为是素数
		{
			if (n%i == 0)
				break;			
		}
		if (i > sqrt(n))//判断循环结束，如果前面的for循环从2到他的开平方数都没有整出那么他就是一个素数
		{
			printf("%5d\n", n);
			j++;//记录素数个数
		}
	}
	printf("素数的个数为：%d个\n", j);
	system("pause");
	return 0;

}