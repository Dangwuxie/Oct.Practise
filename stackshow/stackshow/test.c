#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
#include <stdbool.h>
<<<<<<< HEAD
#include "test.h"
//void initStack(PSTACK ps);
//void push(PSTACK ps, int val);

void init(PSTACK ps)//初始化栈
{
	ps->ptop = (PNODE)malloc(sizeof(NODE));//新建一个空的头节点，栈的尾指针一直指向这个头节点
	if (NULL == ps->ptop)//判断新建的节点是否分配成功
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
		printf("分配失败！\n");
		exit(-1);
	}
<<<<<<< HEAD
	else//如果头节点创建成功，那么刚开始栈中没有元素的时候头指针跟尾指针指向的是同一个节点，并且该节点的指针域为空
=======
	else
>>>>>>> 524c32577a6a91a4ff6e61be3a3eab62f2012481
	{
		ps->pBottom = ps->ptop;
		ps->ptop->pnext = NULL;

	}
}
<<<<<<< HEAD
void push(PSTACK ps, int val)//入栈
{
	PNODE pNew = (PNODE)malloc(sizeof(NODE));//创建一个新的节点，连接头节点
	pNew->data = val;
	pNew->pnext = ps->ptop;//新节点的数据域为入栈的元素，指针域指向栈头指针指向的头节点
	ps->ptop = pNew;//然后头指针重新指向新节点

}
void traverse(PSTACK ps)//遍历栈
{
	PNODE p = ps->ptop;//创建一个PNODE的指针，指向头指针所指向的节点
	while (p != ps->pBottom) //当p不指向尾节点时
	{
		printf("%d", p->data);//输出该节点的数据域
		p = p->pnext;//p指向前面一个节点
	}
	printf("\n");//回车换行
	return;
}
bool empty(PSTACK ps)//判断栈是否为空
{
	if (ps->pBottom == ps->ptop)//如果头指针跟尾指针指向同一个节点
	{
		return true;//返回真
	}
	else
	{
		return false;//否则返回假
	}
}
bool pop(PSTACK ps, int * pval)//出栈一个节点
{
	if (empty(ps))//先判断栈是否为空
	{
		return false;
	}
	else//若不为空，则出栈
	{
		PNODE r = ps->ptop;//创建一个新的指针指向头指针指向的节点
		*pval = r->data;//该节点的数据域赋值给*pval
		ps->ptop = r->pnext;//头指针指向前一个节点
		free(r);//释放r指向的节点
		r = NULL;//清空
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
		printf("出栈成功!出栈元素为%d \n",val);
	}
	else
	{
		printf("出栈失败！\n");
	}
	traverse(&S);
<<<<<<< HEAD
	clear(&S);//清空
	printf("栈中元素为：\n");
	traverse(&S);
	system("pause");
	return 0;
}
void clear(PSTACK ps)//清空
{
	if (empty(ps))//判断
	{
		return;
	}
	else//若不为空
	{
		PNODE p = ps->ptop;//创建一个指针指向头指针指向的节点
		PNODE q = NULL;//再创建一个指针，中间变量
		while (p!=ps->pBottom)//当p指向的节点不是尾指针指向的节点时，说明没有完全出栈
		{
			q = p->pnext;
			free(p);
			p = q;
		}
		ps->ptop = ps->pBottom;//出栈完成后，头指针必须跟尾指针指向同一个节点
	}
}
=======
	system("pause");
	return 0;
}
>>>>>>> 524c32577a6a91a4ff6e61be3a3eab62f2012481
