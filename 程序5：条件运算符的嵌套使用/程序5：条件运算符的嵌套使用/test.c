#define _CRT_SECURE_NO_WARNINGS 1
//���������������Ƕ������ɴ����⣺ѧϰ�ɼ�>=90�ֵ���A��ʾ
//60-89����B��ʾ��60�����µ���C��ʾ
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int i = 0;
	printf("please input a num:\n");
	scanf("%d", &i);
	(i >= 90) ? (printf("A\n")) :( (i >= 60 && i <= 89) ? (printf("B\n")) : (printf("C\n")));
	system("pause");
	return 0;
}