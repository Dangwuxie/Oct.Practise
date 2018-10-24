#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
#include <stdbool.h>
#include "test.h"
//void initStack(PSTACK ps);
//void push(PSTACK ps, int val);

void init(PSTACK ps)//��ʼ��ջ
{
	ps->ptop = (PNODE)malloc(sizeof(NODE));//�½�һ���յ�ͷ�ڵ㣬ջ��βָ��һֱָ�����ͷ�ڵ�
	if (NULL == ps->ptop)//�ж��½��Ľڵ��Ƿ����ɹ�
	{
		printf("����ʧ�ܣ�\n");
		exit(-1);
	}
	else//���ͷ�ڵ㴴���ɹ�����ô�տ�ʼջ��û��Ԫ�ص�ʱ��ͷָ���βָ��ָ�����ͬһ���ڵ㣬���Ҹýڵ��ָ����Ϊ��
	{
		ps->pBottom = ps->ptop;
		ps->ptop->pnext = NULL;

	}
}
void push(PSTACK ps, int val)//��ջ
{
	PNODE pNew = (PNODE)malloc(sizeof(NODE));//����һ���µĽڵ㣬����ͷ�ڵ�
	pNew->data = val;
	pNew->pnext = ps->ptop;//�½ڵ��������Ϊ��ջ��Ԫ�أ�ָ����ָ��ջͷָ��ָ���ͷ�ڵ�
	ps->ptop = pNew;//Ȼ��ͷָ������ָ���½ڵ�

}
void traverse(PSTACK ps)//����ջ
{
	PNODE p = ps->ptop;//����һ��PNODE��ָ�룬ָ��ͷָ����ָ��Ľڵ�
	while (p != ps->pBottom) //��p��ָ��β�ڵ�ʱ
	{
		printf("%d", p->data);//����ýڵ��������
		p = p->pnext;//pָ��ǰ��һ���ڵ�
	}
	printf("\n");//�س�����
	return;
}
bool empty(PSTACK ps)//�ж�ջ�Ƿ�Ϊ��
{
	if (ps->pBottom == ps->ptop)//���ͷָ���βָ��ָ��ͬһ���ڵ�
	{
		return true;//������
	}
	else
	{
		return false;//���򷵻ؼ�
	}
}
bool pop(PSTACK ps, int * pval)//��ջһ���ڵ�
{
	if (empty(ps))//���ж�ջ�Ƿ�Ϊ��
	{
		return false;
	}
	else//����Ϊ�գ����ջ
	{
		PNODE r = ps->ptop;//����һ���µ�ָ��ָ��ͷָ��ָ��Ľڵ�
		*pval = r->data;//�ýڵ��������ֵ��*pval
		ps->ptop = r->pnext;//ͷָ��ָ��ǰһ���ڵ�
		free(r);//�ͷ�rָ��Ľڵ�
		r = NULL;//���
		return true;
	}
}
int main()
{
	int val;
	STACK S;
	init(&S);
	push(&S, 1);
	push(&S, 2);
	push(&S, 3);
	push(&S, 4);
	push(&S, 5);
	push(&S, 6);
	traverse(&S);
	if (pop(&S, &val))
	{
		printf("��ջ�ɹ�!��ջԪ��Ϊ%d \n",val);
	}
	else
	{
		printf("��ջʧ�ܣ�\n");
	}
	traverse(&S);
	clear(&S);//���
	printf("ջ��Ԫ��Ϊ��\n");
	traverse(&S);
	system("pause");
	return 0;
}
void clear(PSTACK ps)//���
{
	if (empty(ps))//�ж�
	{
		return;
	}
	else//����Ϊ��
	{
		PNODE p = ps->ptop;//����һ��ָ��ָ��ͷָ��ָ��Ľڵ�
		PNODE q = NULL;//�ٴ���һ��ָ�룬�м����
		while (p!=ps->pBottom)//��pָ��Ľڵ㲻��βָ��ָ��Ľڵ�ʱ��˵��û����ȫ��ջ
		{
			q = p->pnext;
			free(p);
			p = q;
		}
		ps->ptop = ps->pBottom;//��ջ��ɺ�ͷָ������βָ��ָ��ͬһ���ڵ�
	}
}