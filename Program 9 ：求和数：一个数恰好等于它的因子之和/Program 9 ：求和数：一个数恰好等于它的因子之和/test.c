#define _CRT_SECURE_NO_WARNINGS 1
//��ĿҪ��һ�������ǡ�õ�����������֮�ͣ�������ͳ�Ϊ "���� "��
//����6=1��2��3.����ҳ�1000���ڵ�����������   
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int i = 0, j = 0 ;
	for ( i = 1; i < 1000; i++)//�ҳ���1--1000�е�����
	{
		int sum = 0;//sum�������������ܺͣ�������Ҫ���������
		for (j = 1; j < i; j++)
		{
			if (i % j == 0)//���i�ܹ�����j��˵��j��i��һ������������sum�С�
			{
				sum += j;
			}
		}
		if (sum == i)
		{
			printf("%d�Ǹ������������ֱ�Ϊ", sum);
			for (j = 1; j < i; j++)//�ٱ���һ�飬�г��������������
			{
				if (i % j == 0)
				{
					sum += j;
					printf("  %d", sum);
				}				
			}
			printf("\n");
		}
	}
	system("pause");
	return 0;
}