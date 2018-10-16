#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
	/*char arr1[40];
	int i = 0;
	int top = 0;
	printf("please input a string :");
	gets(arr1);
	int flag = 0;
	for (i = 0; i <( sizeof arr1 / sizeof (arr1[0])); i++)
	{
		if (arr1[0] == ')')
			flag = 1;
        if (arr1[i] == '(')
			top++;
		else if (arr1[i] == ')')
			top--;
		
	}
	if (top == 0 && flag == 0)
		printf("Æ¥Åä£¡\n");
	else
		printf("²»Æ¥Åä£¡\n");*/

	char arr2[40];
	int flag = 0;
	int top = 0;
	int i = 0;
	printf("please input a string :");
	gets(arr2);
	for (i = 0; i < sizeof arr2 / sizeof arr2[0]; i++)
	{
		if (arr2[i] == '(')
			top++;
		else
		{
			if (top = 1 && arr2[i] == ')')
				top--;
			else
				flag = 1;
		}
	}
	if (top != 0)
		printf("Æ¥Åä\n");
	else
		printf("²»Æ¥Åä\n");
	system ("pause");
	return 0;
}