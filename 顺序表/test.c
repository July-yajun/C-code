#define _CRT_SECURE_NO_WARNINGS

//线性表
// 
//不初始化数据元素，内存不刷0

#include<stdio.h>
#define MaxSize 10  //定义最大长度
typedef struct 
{
	int data[MaxSize];//用静态数组存放数据元素
	int length;//顺序表当前长度
}; SqList;//顺序表的类型定义

//基本操作————初始化一个数据表
void InitList(SqList &L)
{
	L.length = 0;//顺序表初始长度为0
}
int main()
{
	SqList L;//声明一个顺序表
	InitList(L);//初始化顺序表
	//尝试“违规”打印整个data数组
	for (int i =0; i < MaxSize; i++)
		printf("data[%d=%d\n", i, L.data[i]);
	return 0;
}



#include<stdlib.h>

#define InitSize 10//默认最大长度
typedef struct
{
	int* data;//指示动态分配数组的指针
	int MaxSize;//顺序表的最大容量
	int length;//顺序表的当前长度
}SeqList;

void InitList(SeqList &L)
{
	//用malloc函数申请一片连续的存储空间
	L.data = (int*)malloc(InitSize * sizeof(int));
	L.length = 0;
	L.MaxSize = InitSize;
}

//增加动态数组长度
void IncreaseSize(SeqList &L, int len)
{
	int* p = L.data;
	L.data = (int*)malloc((L.MaxSize + len) * sizeof(int));
	for (int i = 0; i < L.length; i++)
	{
		L.data[i] = p[i];//将数据复制到新区域
	}
	L.MaxSize = L.MaxSize + len;//顺序表最大长度增加len
	free(p);//释放原来的内存空间
}

int main()
{
	SeqList L;//声明一个顺序表
	InitList(L);//初始化顺序表
	//往顺序表中随便插入几个元素
	IncreaseSize(L, 5);
	return 0;
}



//顺序表基本操作
#include<string>

//插入 ---  ListInsert(&L,i,e)：在表中第i个位置（位序）上插入指定元素e
//用存储位置的相邻来体现数据元素之间的逻辑关系
#define MaxSize 10//定义最大长度
typedef struct
{
	ElemType data[MaxSize];//用静态的数组存放数据元素  ---用静态分配方式实现的顺序表
	int length;//顺序表当前长度
}SqList;//顺序表定义类型

bool ListInsert(SqList &L, int i, int e)//基本操作：在L的位序i处插入元素e
{
	if (i<1 || i>L.length + 1)//判断i的范围是否有效
		return false;
	if (L.length >= MaxSize)//当前储存空间已满，不能插入
		return false;
	for (int j = L.length; j >= i; j--)//将第i个元素及之后的元素后移
		L.data[j] = L.data[j - 1];//位序与下标关系
	//从后面的元素依次移动
	L.data[i - 1] = e;//在位置i处放入e
	L.length++;//长度加1
	return true;
}

int main()
{
	SqList L;//声明一个顺序表
	InitList(L);//初始化顺序表
	//...省略一些代码，插入几个元素
	ListInsert(L, 3, 3);
	return 0;
}





//删除
#define MaxSize 10//定义最大长度
typedef struct
{
	ElemType data[MaxSize];//用静态的数组存放数据元素 
	int length;//顺序表当前长度
}SqList;//顺序表定义类型

bool ListDelete(SqList &L, int i, int &e)//--&符号很重要
{
	if (i<1 || i>L.length)//判断i的范围是否有效
		return false;
	e = L.data[i - 1];
	for (int j = i; j <L.length; j++)//将第i个元素及之后的元素前移
	for (int j = i; j <L.length; j++)//将第i个元素及之后的元素前移
		L.data[j-1] = L.data[j];//位序与下标关系
	L.length--;//长度减1
	return true;
}

int main()
{
	SqList L;//声明一个顺序表
	InitList(L);//初始化顺序表
	//...省略一些代码，插入几个元素
	int e = -1;
	if (ListDelete(L, 3, e))
		printf("已删除第三个元素，删除元素值为=%d\n", e);
	else
		printf("位序i不合法，删除失败\n");

	return 0;
}



//查找 
//1 --- GetElem（L,i):按位查找   获取表中第i个位置的元素的值

#define MaxSize 10//定义最大长度
typedef struct
{
	ElemType*data;//指示动态分配数组的指针
	int MaxSize;//顺序表最大容量
	int length;//顺序表当前长度
}SqList;//顺序表定义类型

ElemType GetElem(SqList L, int t)
{
	return L.data[i - 1];//和访问普通数组方法一样
}
//由于顺序表的各个数据元素在内存中连续存放，由此可以根据起始地址和数据元素大小立即找到第i个元素   -------- 随机存取特性（O(1))


//2 --- LocateElem(l,e):按值查找  在表中查找具有给定关键字值的元素
#define MaxSize 10//定义最大长度
typedef struct
{
	int *data;//指示动态分配数组的指针
	int MaxSize;//顺序表最大容量
	int length;//顺序表当前长度
}SqList;//顺序表定义类型

//在顺序表中查找第一个元素值等于e的元素，并返回其位序
int LocateElem(SeqList L, int e)
{
	for (int i = 0; i < L.length; i++)
		if (L.data[i] == e)         //基本数据类型：int,char,double,float等可以直接用运算符 == 比较           -----     结构类型的数据不能直接用==  ---  需要依次对比各个分量来判断两个结构体是否相等（或者定义一个函数（better））
			return i + 1;
	return 0;
}