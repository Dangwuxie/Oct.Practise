#define _CRT_SECURE_NO_WARNINGS 1
#ifndef _TEST_H
#define _TEST_H
//ջ����ʽ�洢�ṹ��
typedef struct Node  //����һ�����͵Ľڵ㣻
{
	int data;
	struct Node * pnext;
}NODE, *PNODE;
typedef struct Stack  //����һ��ջ���ͣ����溬������ָ�룬һ��ָ��ջ����һ��ָ��ջ��
{
	PNODE ptop;
	PNODE pBottom;
}STACK, *PSTACK;

void init(PSTACK ps);//��ʼ��ջ
void push(PSTACK ps, int val);//ѹջ
void traverse(PSTACK ps);//����ջ
bool empty(PSTACK ps);//�ж�ջ�Ƿ�Ϊ��
bool pop(PSTACK ps, int * pval);//��ջ
void clear(PSTACK ps);//���ջ
#endif  //_TEST_H