#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
#include <stdbool.h>
<<<<<<< HEAD
#include "test.h"
//void initStack(PSTACK ps);
//void push(PSTACK ps, int val);

void init(PSTACK ps)//��ʼ��ջ
{
	ps->ptop = (PNODE)malloc(sizeof(NODE));//�½�һ���յ�ͷ�ڵ㣬ջ��βָ��һֱָ�����ͷ�ڵ�
	if (NULL == ps->ptop)//�ж��½��Ľڵ��Ƿ����ɹ�
=======
//void initStack(PSTACK ps);
//void push(PSTACK ps, int val);
typedef struct Node
{
	int data;
	struct Node * pnext;
}NODE,*PNODE;
typedef struct Stack
{
	PNODE ptop;
	PNODE pBottom;
}STACK,*PSTACK;

void init(PSTACK ps)
{
	ps->ptop = (PNODE)malloc(sizeof(NODE));
	if (NULL == ps->ptop)
>>>>>>> 524c32577a6a91a4ff6e61be3a3eab62f2012481
	{
		printf("����ʧ�ܣ�\n");
		exit(-1);
	}
<<<<<<< HEAD
	else//���ͷ�ڵ㴴���ɹ�����ô�տ�ʼջ��û��Ԫ�ص�ʱ��ͷָ���βָ��ָ�����ͬһ���ڵ㣬���Ҹýڵ��ָ����Ϊ��
=======
	else
>>>>>>> 524c32577a6a91a4ff6e61be3a3eab62f2012481
	{
		ps->pBottom = ps->ptop;
		ps->ptop->pnext = NULL;

	}
}
<<<<<<< HEAD
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
=======
void push(PSTACK ps, int val)
{
	PNODE pNew = (PNODE)malloc(sizeof(NODE));
	pNew->data = val;
	pNew->pnext = ps->ptop;
	ps->ptop = pNew;

}
void traverse(PSTACK ps)
{
	PNODE p = ps->ptop;
	while (p != ps->pBottom)
	{
		printf("%5d", p->data);
		p = p->pnext;
	}
	printf("\n");
	return;
}
bool empty(PSTACK ps)
{
	if (ps->pBottom == ps->ptop)
	{
		return true;
	}
	else
	{
		return false;
	}
}
bool pop(PSTACK ps, int * pval)
{
	if (empty(ps))
	{
		return false;
	}
	else
	{
		PNODE r = ps->ptop;
		*pval = r->data;
		ps->ptop = r->pnext;
		free(r);
		r = NULL;
>>>>>>> 524c32577a6a91a4ff6e61be3a3eab62f2012481
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
<<<<<<< HEAD
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
=======
	system("pause");
	return 0;
}
>>>>>>> 524c32577a6a91a4ff6e61be3a3eab62f2012481
