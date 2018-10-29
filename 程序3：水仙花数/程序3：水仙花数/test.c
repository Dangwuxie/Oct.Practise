#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
	
	int x = 0;//定义一个从1到99999的数
	int j = 0;//用来记水仙花数的个数
	for (x = 1; x < 99999; x++)//开始循环，从1到99999寻找
	{
		int k = x;//定义一个变量接受x的值，不能再整个循环里改变x进来的值，因为后面要用来比较
		int i = 0;//数组下标
		int index = 1;//x的位数，也就是每一位的次方数
		int a[10] = {0};//定义一个数组用来存放x的每一位
		double num = 0;//定义一个变量接受x的每一位的次方的和
		while (k>9)//判断位数，index从1开始而不从0开始是因为当x剩下一位时不会进入此循环，但是最后一位也算一位
		{
			a[i]= k % 10;
			k = k / 10;
			index++;
			i++;
		}
		i++;
		a[i] = k;//i自增依次，放入x最后一位
		int length = i;//将数组下标数长度用来限制下面的循环
		for ( i = 0; i <= length; i++)
		{
			num += pow(a[i], index);	//循环每进来一次，每一位的数的次方都会加上		 
		}
		if (num == x)//判断是否为水仙花数
		{
			printf("%d\n", x);
			j++;//记录个数
		}
	}
	printf("水仙花数一共%d个",j);
	system("pause");
	return 0;
}
////////////////////////////////////////////////////
int main()
{
	int i = 0;
	int j = 0;
	for (i = 1; i < 99999; i++)
	{
		int count = 1;//记录位数
		int num = 0;
		int tmp = i;
     //判断位数，即次方数；
		while (tmp>9)
		{
			count++;
			tmp /= 10;
		}
	 //求每一位的次方和
		tmp = i;
		while (tmp)
		{
			num += pow(tmp%10, count);//每次取i的末尾，求出并加上次方数
			tmp /= 10;//除去最后一位
		}		
		if (num == i)//判断是否为水仙花数
		{
			printf("%d\n", i);
			j++;
		}
	}
	printf("水仙花数一共%d个\n", j);
	system("pause");
	return 0;
}