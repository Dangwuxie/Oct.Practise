#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//题目：输入一行字符，分别统计出其中英文字母、空格、数字和其他字符的个数。
//分析：利用while语句，条件为输入的字符不为'\n';
int main()
{
	char arr[100] = { 0 };//创建一个字符数组
	gets(arr);//输入一串字符
	int i = 0;//字符数组下标
//	puts(arr);//输出字符数组
	int others = 0;//其他字符计数
	int digit = 0;//记录数字个数
	int SmallLeter = 0;//记录小写字母个数
	int capital = 0;//记录大写字母个数
	int space = 0;//记录空格数
	for ( i = 0; i < strlen(arr); i++)//遍历，判断所输入的一行字符里的各类字符个数，从第一个字符开始
	{	
		//printf("%c", arr[i]);
		//if (arr[i] != '\n')
		//{
			if (arr[i] >= '0' && arr[i] <= '9')//判断是否为数字
			{
				digit++;
			}
			else if (arr[i] == ' ')//判断是否为空格
			{
				space++;
			}
			else if (arr[i] >= 'a' && arr[i] <= 'z')//判断是否为小写字母，也可以这样写(arr[i] - 0) >= 97 && (arr[i] - 0) <= 122
			{
				SmallLeter++;
			}
			else if ((arr[i] - 0) >= 65 && (arr[i] - 0) <= 90)//判断是否为大写字母
			{
				capital++;
			}
			else//是其他字符的时候
			{
				others++;
			}
	//	}
		
	}
	printf("The digit'number is %d\n", digit);//输出统计的个数
	printf("The space's number is %d\n", space);
	printf("The SmallLeter's number is %d\n", SmallLeter);
	printf("The capital's number is %d\n", capital);
	printf("The others's number is %d\n", others);
	//while (arr[i]!='\n')
	system("pause");
	return 0;
}