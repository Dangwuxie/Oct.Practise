#define _CRT_SECURE_NO_WARNINGS 1
//��Ŀ���ŵ����⣬��һ�����ӣ��ӳ��������������ÿ���¶���һ������
//��С���ӳ����������º�ÿ��������һ�����ӣ��������Ӷ�����
//��ÿ���µ���������Ϊ���٣�
#include <stdio.h>
#include <stdlib.h>
//�˷���Ϊ���õݹ�ʵ��
int Fibo(int n) //����Fibo����
{
	if (n == 1)return 1;//��һ������Ϊ1
	if (n == 2)return 1;//�ڶ�������Ϊ1
	if (n > 2)//�ӵ���������ʼ��ÿһ������ǰ�������ĺ�
	{
		return Fibo(n - 1) + Fibo(n - 2);//β�ݹ���ú���
	}
}
int main()
{
	int i, m, n;
	printf("please input n:");
	scanf("%d", &n);//����Ҫ��ӡ��쳲��������еĸ������ӵ�һ������ʼ�ģ�
	printf("The Fibolacci is:");
	for (i = 1; i <= n; i++)//����forѭ����������n���ַ�
	{
		m = Fibo(n);//����Fibo����
		printf("%d\n", m);
	}
	system("pause");
	return 0;
}
//�����õݹ�
int main()
{
	int a = 1,b = 1;//����ǰ��������
	int n = 0;
	int m = 0, i = 1;//�����������
	printf("please input n:");
	scanf("%d", &n);
	printf("The Fibolicci is:\n");
	for ( i = 1; i <= n; i++)//����forѭ��������n��Fibolicci����
	{
		while (i<3)//�޶���ǰ�������ֶ���һ
		{
			printf("%d\n", a);
			i++;
		}
		while ( i>=3 && i<=n )//�ӵ�������ʼ��ÿһ�����ֶ���ǰ��������֮��
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