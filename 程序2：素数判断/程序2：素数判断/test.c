#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main()
{
	int n = 101;
	int i = 0;
	int j = 0;
	for ( n = 101; n < 201; n+=2)//��101��ʼ����Ϊż�����Ǻ���������ÿ������2���ж�
	{
		for (i = 2; i <= sqrt(n); i++)//���������<=������nΪ121����ô121�����ܱ�1�ͱ������������ܱ�11������������ӵ��ںţ��ᱻ��Ϊ������
		{
			if (n%i == 0)
				break;			
		}
		if (i > sqrt(n))//�ж�ѭ�����������ǰ���forѭ����2�����Ŀ�ƽ������û��������ô������һ������
		{
			printf("%5d\n", n);
			j++;//��¼��������
		}
	}
	printf("�����ĸ���Ϊ��%d��\n", j);
	system("pause");
	return 0;

}