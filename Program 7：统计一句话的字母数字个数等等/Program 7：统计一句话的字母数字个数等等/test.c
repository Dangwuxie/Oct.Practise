#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//��Ŀ������һ���ַ����ֱ�ͳ�Ƴ�����Ӣ����ĸ���ո����ֺ������ַ��ĸ�����
//����������while��䣬����Ϊ������ַ���Ϊ'\n';
int main()
{
	char arr[100] = { 0 };//����һ���ַ�����
	gets(arr);//����һ���ַ�
	int i = 0;//�ַ������±�
//	puts(arr);//����ַ�����
	int others = 0;//�����ַ�����
	int digit = 0;//��¼���ָ���
	int SmallLeter = 0;//��¼Сд��ĸ����
	int capital = 0;//��¼��д��ĸ����
	int space = 0;//��¼�ո���
	for ( i = 0; i < strlen(arr); i++)//�������ж��������һ���ַ���ĸ����ַ��������ӵ�һ���ַ���ʼ
	{	
		//printf("%c", arr[i]);
		//if (arr[i] != '\n')
		//{
			if (arr[i] >= '0' && arr[i] <= '9')//�ж��Ƿ�Ϊ����
			{
				digit++;
			}
			else if (arr[i] == ' ')//�ж��Ƿ�Ϊ�ո�
			{
				space++;
			}
			else if (arr[i] >= 'a' && arr[i] <= 'z')//�ж��Ƿ�ΪСд��ĸ��Ҳ��������д(arr[i] - 0) >= 97 && (arr[i] - 0) <= 122
			{
				SmallLeter++;
			}
			else if ((arr[i] - 0) >= 65 && (arr[i] - 0) <= 90)//�ж��Ƿ�Ϊ��д��ĸ
			{
				capital++;
			}
			else//�������ַ���ʱ��
			{
				others++;
			}
	//	}
		
	}
	printf("The digit'number is %d\n", digit);//���ͳ�Ƶĸ���
	printf("The space's number is %d\n", space);
	printf("The SmallLeter's number is %d\n", SmallLeter);
	printf("The capital's number is %d\n", capital);
	printf("The others's number is %d\n", others);
	//while (arr[i]!='\n')
	system("pause");
	return 0;
}