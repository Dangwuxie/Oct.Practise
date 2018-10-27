#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
#include <stdbool.h>
#include "test.h"
int main()
{
	//int val;//�����ջ��Ԫ��
	STACK S;//����һ��ջ����
	init(&S);//��ʼ�����ջ
	push(&S, 1);//ѹջ
	push(&S, 2);
	push(&S, 3);
	push(&S, 4);
	push(&S, 5);
	push(&S, 6);
	traverse(&S);//����
	/*if (pop(&S, &val))//��ջ
	{
		printf("��ջ�ɹ�!��ջԪ��Ϊ%d \n", val);
		printf("-------------------------------------------------------\n");
	}
	else
	{
		printf("��ջʧ�ܣ�\n");
	}*/
	//traverse(&S);
	clear(&S);//���
	printf("-------------------------------------------------------\n");
	printf("��պ�ջ��Ԫ��Ϊ��");
	printf("ջ��Ԫ��Ϊ��\n");
	traverse(&S);
	system("pause");
	return 0;
}
void init(PSTACK ps)
{
	ps->ptop = (PNODE)malloc(sizeof(NODE));//����һ����ջ
	if (NULL == ps->ptop)
	{
		printf("success\n");
		exit(-1);
	}
	else
	{
		ps->pBottom = ps->ptop;//ջ��ָ���ջ��ָ�붼ָ������½��Ŀսڵ�
		ps->ptop->pnext = NULL;
	}
}
void push(PSTACK ps, int val)//ѹջ
{
	PNODE pNew = (PNODE)malloc(sizeof(NODE));//�½�һ���ڵ�
	pNew->data = val;//�½ڵ����������val
	pNew->pnext = ps->ptop;//�½ڵ�ָ����ָ��ջ��ָ����ָ��Ľڵ㣬����ǰ��ջ�׸�ջ��ͬʱָ��Ŀսڵ㣬������ʵ��ѹջ��
	ps->ptop = pNew;//Ȼ��ջ��Ԫ�����ƣ�ʼ��ָ����������ջ�Ľڵ�
}
void traverse(PSTACK ps)//����
{
	PNODE p = ps->ptop;//�����Ǵ�ջ��������������Դ���һ��ָ�룬ָ��ջ��ָ����ָ��Ľڵ�
	while (p!=ps->pBottom)//��p��ָ��Ľڵ㲻��ջ��ָ��ָ��Ľڵ�ʱ
	{
		printf("%d\n", p->data);//���p��ָ��Ľڵ���������ֵ
		p = p->pnext;//Ȼ��ָ��p����ָ����һ���ڵ�
	}
}
//bool pop(PSTACK ps, int * pval)//��ջһ��Ԫ��
//{
//	if (empty(ps))//���ж�ջ�Ƿ�Ϊ��
//	{
//		return false;
//	}
//	else//��Ϊ��ʱ
//	{
//		PNODE r = ps->ptop;//����һ���µ�ָ��r��ָ��ջ��ָ����ָ��Ľڵ�
//		*pval = r->data;//���ýڵ��������ֵ��val
//		ps->ptop = r->pnext;//ջ��ָ������ָ��r��ָ�����һ���ڵ㣬
//		free(r);//�ͷ�r��ָ��Ľڵ㣬���Ǹղŵ�ջ���ڵ�
//		r = NULL;//���
//		return true;
//	}
//}
bool empty(PSTACK ps)//�ж�ջ�Ƿ�Ϊ��
{
	if (ps->ptop == ps->pBottom)
		return true;
	else
		return false;
}
void clear(PSTACK ps)//���ջ��Ԫ��
{
	if (empty(ps))
	{
		return ;
	}
	else
	{
		PNODE p = ps->ptop;//����һ��ָ�룬ָ��ǰջ��ָ��ָ��Ľڵ�
		PNODE q = NULL;//����һ���м�ָ��
		while (p!=ps->pBottom)//��p��ָ��Ľڵ㲻��ջ��ָ����ָ��Ľڵ�ʱ
		{
			q = p->pnext;//�Ƚ�p��ָ�����һ���ڵ㸳��q
			free(p);//Ȼ��ɾ���ýڵ�
			p = q;//Ȼ��qָ��Ľڵ㸳��p,Ҳ����p����ָ����p����һ���ڵ�
		}
		ps->ptop = ps->pBottom;//ѭ������֮��ջ��ָ���ջ��ָ��ָ��ͬһ���ڵ�
	}
}