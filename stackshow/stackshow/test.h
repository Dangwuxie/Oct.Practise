#define _CRT_SECURE_NO_WARNINGS 1
#ifndef _TEST_H
#define _TEST_H
//栈的链式存储结构；
typedef struct Node  //创建一种类型的节点；
{
	int data;
	struct Node * pnext;
}NODE, *PNODE;
typedef struct Stack  //创建一个栈类型，里面含有两个指针，一个指向栈顶，一个指向栈底
{
	PNODE ptop;
	PNODE pBottom;
}STACK, *PSTACK;

void init(PSTACK ps);//初始化栈
void push(PSTACK ps, int val);//压栈
void traverse(PSTACK ps);//遍历栈
bool empty(PSTACK ps);//判断栈是否为空
bool pop(PSTACK ps, int * pval);//出栈
void clear(PSTACK ps);//清空栈
#endif  //_TEST_H