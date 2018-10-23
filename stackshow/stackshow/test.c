#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
#include <stdbool.h>
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
	{
		printf("分配失败！\n");
		exit(-1);
	}
	else
	{
		ps->pBottom = ps->ptop;
		ps->ptop->pnext = NULL;

	}
}
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
		printf("出栈成功!出栈元素为%d \n",val);
	}
	else
	{
		printf("出栈失败！\n");
	}
	traverse(&S);
	system("pause");
	return 0;
}
