#define _CRT_SECURE_NO_WARNINGS// vs中scanf()不能使用的解决办法或用scanf_s()
#include <stdio.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0 
#define OK 1
#define ERROR 0
#define OVERFLOW -2
#define LIST_INIT_SIZE 100
#define LIST_GROW_SIZE 10
typedef int Status;//线性表存储空间的初始分配量
typedef int ElemType;//线性表存储空间的分配增量(当存储空间不够时要用到)

typedef struct
{
	ElemType *elem;//存储空间的基地址
	int length;//当前线性表的长
	int list_size;//当前分配的存储容量
}SqList;

//构造一个空的线性表L。
Status InitList(SqList &L)
{
	L.elem = (ElemType *)malloc(LIST_INIT_SIZE * sizeof(ElemType));
	if (!L.elem)
	{
		exit(OVERFLOW);
	}

	L.length = 0;
	L.list_size = LIST_INIT_SIZE;
}

//若L为空表，则返回TRUE,否则返回FALSE。
Status ListEmpty(SqList L)
{
	if (0 == L.length)
	{
		return TRUE;
	}
	return FALSE;
}

//返回L中数据元素个数。
Status ListLength(SqList L)
{
	return L.length;
}

//用e返回L中第i数据个元素的值。
Status GetElem(SqList L, int i, ElemType &e)
{
	if (i<1 || i>L.length)
	{
		exit(OVERFLOW);
	}
	e = L.elem[i - 1];
	return OK;
}



//在L中第i个位置之前插入新的数据元素e，L的长度加1。
Status ListInsert(SqList &L, int i, ElemType e)
{	//i: 1<=i<=L.length+1
	if (i < 1 || i > L.length+1)
	{
		return ERROR;
	}
	//如果长度不够便扩容
	if (L.length >= L.list_size)
	{
		ElemType *newbase = (ElemType *)realloc(L.elem, (LIST_GROW_SIZE + L.list_size) * sizeof(ElemType));
		if (!newbase) 
		{
			exit(OVERFLOW);
		}
		L.elem = newbase;
		L.list_size += LIST_GROW_SIZE;
	}
	//标记插入的内容
	ElemType *q = &L.elem[i - 1];
	ElemType *p;
	//将后面的元素往后移
	for (p = &(L.elem[L.length - 1]); p > q; p--)
	{
		*(p + 1) = *p;
	}
	*q = e;
	++L.length;
	return OK;
}
//删除L的第i个数据元素，并用e返回其值，L的长度减1。
Status ListDelete(SqList &L, int i, ElemType &e)
{
	if (i<1 || i>L.length)
	{
		return ERROR;
	}
	//标记删除的位置
	ElemType *p = &L.elem[i - 1];
	e = *p;
	ElemType *q = L.elem + L.length - 1;
	//将后面的元素往前移一位
	for (++p; p <= q; ++p)
	{
		*(p-1) = *p;
	}
	--L.length;
	return OK;
}

//将L重置为空表（清空)。
Status ClearList(SqList &L)
{
	L.length = 0;
	return OK;
}

//销毁线性表L。
Status DestroyList(SqList &L)
{
	free(L.elem);
	L.length = 0;
	L.list_size = 0;
	return OK;
}

int main()
{
	//实验功能
	SqList sqlist;
	ElemType t;

	InitList(sqlist);//建一个空表

	int i;
	for (i = 10; i<20; i++)
	{
		ListInsert(sqlist, i - 9, i);//给空表插入10个数值

	}

	//打印表的数值
	printf("生成的列表为:\n");
	for (i = 1; i <= sqlist.length; i++)
	{
		ElemType temp;

		GetElem(sqlist, i, temp);//获取第i个数值

		printf("%d ", temp);
	}

	ListDelete(sqlist, 5, t);//删除第五个元素

	printf("\n第五个元素%d已删除\n当前列表为:\n", t);
	for (i = 1; i <= sqlist.length; i++)
	{
		ElemType temp;
		GetElem(sqlist, i, temp);
		printf("%d ", temp);
	}

	ClearList(sqlist);//清空表
	if (ListEmpty(sqlist))//判断是否为空表
	{
		printf("\n列表已清空\n强行访问列表查看前10个元素的值\n");
	}
	else
	{
		printf("列表未清空\n");
	}
	//强行访问列表查看其值
	for (i = 0; i < 10; i++)
	{
		printf("%d ", sqlist.elem[i]);
	}
	printf("\n");

	DestroyList(sqlist);//摧毁列表
	printf("列表已摧毁\n强行访问列表查看前10个元素的值：\n");
	//强行访问列表查看其值
	for (i = 0; i < 10; i++)
	{	
		printf("%d ", sqlist.elem[i]);	
	}
	printf("\n结束\n");
	system("pause");
	return 0;
}
/*运行结果：
    生成的列表为:
    10 11 12 13 14 15 16 17 18 19
    第五个元素14已删除
    当前列表为:
    10 11 12 13 15 16 17 18 19
    列表已清空
    强行访问列表查看前10个元素的值
    10 11 12 13 15 16 17 18 19 19
    列表已摧毁
    强行访问列表查看前10个元素的值：
    -572662307 -572662307 -572662307 -572662307 -572662307 -572662307 -572662307 -572662307 -572662307 -572662307
    结束
    请按任意键继续. . .
*/

