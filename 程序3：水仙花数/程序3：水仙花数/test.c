#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
	
	int x = 0;//����һ����1��99999����
	int j = 0;//������ˮ�ɻ����ĸ���
	for (x = 1; x < 99999; x++)//��ʼѭ������1��99999Ѱ��
	{
		int k = x;//����һ����������x��ֵ������������ѭ����ı�x������ֵ����Ϊ����Ҫ�����Ƚ�
		int i = 0;//�����±�
		int index = 1;//x��λ����Ҳ����ÿһλ�Ĵη���
		int a[10] = {0};//����һ�������������x��ÿһλ
		double num = 0;//����һ����������x��ÿһλ�Ĵη��ĺ�
		while (k>9)//�ж�λ����index��1��ʼ������0��ʼ����Ϊ��xʣ��һλʱ��������ѭ�����������һλҲ��һλ
		{
			a[i]= k % 10;
			k = k / 10;
			index++;
			i++;
		}
		i++;
		a[i] = k;//i�������Σ�����x���һλ
		int length = i;//�������±��������������������ѭ��
		for ( i = 0; i <= length; i++)
		{
			num += pow(a[i], index);	//ѭ��ÿ����һ�Σ�ÿһλ�����Ĵη��������		 
		}
		if (num == x)//�ж��Ƿ�Ϊˮ�ɻ���
		{
			printf("%d\n", x);
			j++;//��¼����
		}
	}
	printf("ˮ�ɻ���һ��%d��",j);
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
		int count = 1;//��¼λ��
		int num = 0;
		int tmp = i;
     //�ж�λ�������η�����
		while (tmp>9)
		{
			count++;
			tmp /= 10;
		}
	 //��ÿһλ�Ĵη���
		tmp = i;
		while (tmp)
		{
			num += pow(tmp%10, count);//ÿ��ȡi��ĩβ����������ϴη���
			tmp /= 10;//��ȥ���һλ
		}		
		if (num == i)//�ж��Ƿ�Ϊˮ�ɻ���
		{
			printf("%d\n", i);
			j++;
		}
	}
	printf("ˮ�ɻ���һ��%d��\n", j);
	system("pause");
	return 0;
}