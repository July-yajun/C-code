#define _CRT_SECURE_NO_WARNINGS

//线性表
// 
//不初始化数据元素，内存不刷0

#include<stdio.h>
//#define MaxSize 10  //定义最大长度
//typedef struct 
//{
//	int data[MaxSize];//用静态数组存放数据元素
//	int length;//顺序表当前长度
//}; SqList;//顺序表的类型定义
//
////基本操作————初始化一个数据表
//void InitList(SqList &L)
//{
//	L.length = 0;//顺序表初始长度为0
//}
//int main()
//{
//	SqList L;//声明一个顺序表
//	InitList(L);//初始化顺序表
//	//尝试“违规”打印整个data数组
//	for (int i =0; i < MaxSize; i++)
//		printf("data[%d=%d\n", i, L.data[i]);
//	return 0;
//}



#include<stdlib.h>

//#define InitSize 10//默认最大长度
//typedef struct
//{
//	int* data;//指示动态分配数组的指针
//	int MaxSize;//顺序表的最大容量
//	int length;//顺序表的当前长度
//}SeqList;
//
//void InitList(SeqList &L)
//{
//	//用malloc函数申请一片连续的存储空间
//	L.data = (int*)malloc(InitSize * sizeof(int));
//	L.length = 0;
//	L.MaxSize = InitSize;
//}
//
////增加动态数组长度
//void IncreaseSize(SeqList &L, int len)
//{
//	int* p = L.data;
//	L.data = (int*)malloc((L.MaxSize + len) * sizeof(int));
//	for (int i = 0; i < L.length; i++)
//	{
//		L.data[i] = p[i];//将数据复制到新区域
//	}
//	L.MaxSize = L.MaxSize + len;//顺序表最大长度增加len
//	free(p);//释放原来的内存空间
//}
//
//int main()
//{
//	SeqList L;//声明一个顺序表
//	InitList(L);//初始化顺序表
//	//往顺序表中随便插入几个元素
//	IncreaseSize(L, 5);
//	return 0;
//}




//作业

//int main()//死循环
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{ 
//		if (i = 5)          //这里不是判断，而是赋值   -----  i=5表达式的结果是5
//			printf("%d", i);            
//	}
//	return 0;
//}


//if语句
//1.后面不止跟上一条语句，大括号内部的都可以
//2.0为假，非0表示真
//3.分支语句，可以实现单分支和多分支
//4.else匹配----就近


//switch语句
//default 子句可以切换位置
//case后的表达式只能是整形常量表达式  ----   char也属于整形家族的，因为字符存储时，存储的时ASCII值    ------  不能为float类型
//case表达式不要求顺序

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	switch (n)               //按tab可以整体缩进，shift加tab可以往前走
//	{
// 		default://可以调整顺序
//			printf("hh\n");
//			break;
//		case 1:
//			printf("1\n");
//			break;
//		case 2:
//			printf("2\n");
//			break;
//	}
//	return 0;
//}


//int func(int a)
//{
//	int b;
//	switch (a)
//	{
//	case 1:b = 30;
//	case 2:b = 20;
//	case 3:b = 16;
//	default:b = 0;
//	}
//	return b;
//}
//func(1)=0     因为没有break，就会一直进行



//int  main()
//{
//	int x = 3;
//	int y = 3;
//	switch (x % 2)//余1
//	{
//	case 1:
//			switch (y)
//			{
//			case 0:
//				printf("first");
//			case 1:
//				printf("second");
//				break;
//			default:printf("hello");//没有break，继续case2
//			}
//		case 2:
//			printf("third");
//	}
//	return 0;
//}



//编程题：从大到小输出
//写代码将三个整数从大到小输出
//如：输入231   ，输出321

//逻辑！！！！！！！！！！！！！！！！
//法1：
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	//输入
//	scanf("%d %d %d", &a, &b, &c);
//	//调整
//	int tmp = 0;
//	if (a < b)//ab中的较大值给了a
//	{
//		tmp = a;//tmp---临时变量
//		a = b;
//		b = tmp;
//	}
//	if (a < c)//ac中的较大值给了a
//	{
//		tmp = a;
//		a = c;
//		c = tmp;
//	}
//	if (b < c)//bc中的较大值给了b
//	{
//		tmp = b;
//		b = c;
//		c = tmp;
//	}
//	//输出
//	printf("%d %d %d\n", a, b, c);
//	return 0;
//}
//法2：
void Swap(int* px, int* py)
{
	int tmp = *px;
	*px = *py;
	*py = tmp;
}

int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	//输入
	scanf("%d %d %d", &a, &b, &c);
	//调整
	int tmp = 0;
	if (a < b)
	{
		Swap(&a, &b);
	}
	if (a < c)
	{
		Swap(&a, &c);
	}
	if (b < c)
	{
		Swap(&b, &c);
	}
	//输出
	printf("%d %d %d\n", a, b, c);
	return 0;
}