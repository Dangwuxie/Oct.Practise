#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
#include <stdbool.h>
#include "test.h"
int main()
{
	//int val;//保存出栈的元素
	STACK S;//定义一个栈变量
	init(&S);//初始化这个栈
	push(&S, 1);//压栈
	push(&S, 2);
	push(&S, 3);
	push(&S, 4);
	push(&S, 5);
	push(&S, 6);
	traverse(&S);//遍历
	/*if (pop(&S, &val))//出栈
	{
		printf("出栈成功!出栈元素为%d \n", val);
		printf("-------------------------------------------------------\n");
	}
	else
	{
		printf("出栈失败！\n");
	}*/
	//traverse(&S);
	clear(&S);//清空
	printf("-------------------------------------------------------\n");
	printf("清空后栈中元素为：");
	printf("栈中元素为：\n");
	traverse(&S);
	system("pause");
	return 0;
}
void init(PSTACK ps)
{
	ps->ptop = (PNODE)malloc(sizeof(NODE));//创建一个空栈
	if (NULL == ps->ptop)
	{
		printf("success\n");
		exit(-1);
	}
	else
	{
		ps->pBottom = ps->ptop;//栈底指针跟栈顶指针都指向这个新建的空节点
		ps->ptop->pnext = NULL;
	}
}
void push(PSTACK ps, int val)//压栈
{
	PNODE pNew = (PNODE)malloc(sizeof(NODE));//新建一个节点
	pNew->data = val;//新节点数据域等于val
	pNew->pnext = ps->ptop;//新节点指针域指向栈顶指针所指向的节点，就是前面栈底跟栈顶同时指向的空节点，这样就实现压栈了
	ps->ptop = pNew;//然后栈顶元素上移，始终指向就是最后入栈的节点
}
void traverse(PSTACK ps)//遍历
{
	PNODE p = ps->ptop;//遍历是从栈顶依次输出，所以创建一个指针，指向栈顶指针所指向的节点
	while (p!=ps->pBottom)//当p所指向的节点不是栈底指针指向的节点时
	{
		printf("%d\n", p->data);//输出p所指向的节点的数据域的值
		p = p->pnext;//然后指针p重新指向下一个节点
	}
}
//bool pop(PSTACK ps, int * pval)//出栈一个元素
//{
//	if (empty(ps))//先判断栈是否为空
//	{
//		return false;
//	}
//	else//不为空时
//	{
//		PNODE r = ps->ptop;//创建一个新的指针r，指向栈顶指针所指向的节点
//		*pval = r->data;//将该节点的数据域赋值给val
//		ps->ptop = r->pnext;//栈顶指针重新指向r所指向的下一个节点，
//		free(r);//释放r所指向的节点，就是刚才的栈顶节点
//		r = NULL;//清空
//		return true;
//	}
//}
bool empty(PSTACK ps)//判断栈是否为空
{
	if (ps->ptop == ps->pBottom)
		return true;
	else
		return false;
}
void clear(PSTACK ps)//清空栈内元素
{
	if (empty(ps))
	{
		return ;
	}
	else
	{
		PNODE p = ps->ptop;//创建一个指针，指向当前栈顶指针指向的节点
		PNODE q = NULL;//创建一个中间指针
		while (p!=ps->pBottom)//当p所指向的节点不是栈底指针所指向的节点时
		{
			q = p->pnext;//先将p所指向的下一个节点赋给q
			free(p);//然后删除该节点
			p = q;//然后将q指向的节点赋给p,也就是p重新指向了p的下一个节点
		}
		ps->ptop = ps->pBottom;//循环完了之后，栈底指针跟栈底指针指向同一个节点
	}
}