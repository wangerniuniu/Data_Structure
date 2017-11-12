#include<stdio.h>
#include<iostream>
#define ERROR 0
#define SUCCESS 1
using namespace std;
#define MAXSIZE 7
typedef int ElemType;
typedef struct
{
	ElemType data[MAXSIZE] = {1,2,3,4,5,6,7};
	int length;

}sqlist;
//表的插入，第i位插入 e   1<=i<=a.length
int List_Insert(sqlist *L, int i, ElemType e)
{
	int k;
	if (i>L->length||i<1)
		return ERROR;
	else if (i < 1)
		return ERROR;
	else
	{
		for (k = L->length-1; k >= i - 1; k--)
		{
			L->data[k + 1] = L->data[k];
		}
		L->data[i - 1] = e;
		L->length++;
		return SUCCESS;
	}
}
//表的删除，第i位删除，表的长度减一
int List_GetElem(sqlist *L, int i,ElemType *e)
{
	if (i > L->length || i < 1 || L->length == 0)
		return ERROR;
	else
	{
		*e = L->data[i-1];
		return SUCCESS;
	}
}
//查询表的元素，第i位查询，返回给e
int List_Delete(sqlist *L, int i)
{
	int k = 0;
	if (i >= L->length)
		return ERROR;
	else
	{
		for (k = i-1; k <= L->length; k++)
		{
			L->data[k] = L->data[k + 1];
		}
		L->length--;
		return SUCCESS;
	}
}

typedef struct Node
{
	ElemType data;
	struct Node *NEXT;
}Node;
typedef struct Node *LinkedList;
int Linked_list_GetElem(LinkedList, int i, ElemType *e)
{

}
int main()
{
	sqlist a;
	int b;
	ElemType e = 10;
	a.length = 6;
	//b=ListInsert( &a, 5, e);
	//b = ListDelete(&a, 2);
	b = List_GetElem(&a, 3,&e);
	cout << "返回值" << e<< endl;
	for (int i = 0; i < a.length; i++)
		cout << a.data[i]<< endl;
	while(1);

}