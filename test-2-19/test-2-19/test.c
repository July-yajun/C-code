#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>

//int main()
//{
//	//int a = 10;
//	//if (a = 3)//单独一个=不表示相等，==表示相等，！=表示不等
//	//{
//	//	printf("hh\n");
//	//}
//
//
//	//&&逻辑与--并且
//	//||逻辑或--或者
//	//int a = 10;
//	//int b = 20;
//	//if (a && b)
//	//{
//	//	printf("hh\n");
//	//}
//	
//
//	//条件操作符  三目操作符
//	//int a = 10;
//	//int b = 20;
//	//int r = a > b ? a : b;
//	//printf("%d\n", r);
//
//
//	//逗号表达式--逗号隔开的一串表达式---从左到右依次计算，整个表达式最后的结果是最后一个表达式的结果
//	//int a = 10;
//	//int b = 20;
//	//int c = 0;
//	////       c=8        a=28        5
//	//int d = (c = a - 2, a = b + c, c - 3);
//	//printf("%d\n", d);
//
//
//	//下标引用
//	//int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };//[]--固定语法   创建数组时内部为常量
//	//int n = 3;
//	//arr[n]=20;//[]---下标引用操作符   arr和3就是[]内的操作数    访问元素的时候内部可以为变量
//	
//	return 0;
//
//}



//函数调用操作符
//int Add(int x, int y)
//{
//	int z = 0;
//	z = x = y;
//	return z;
//}
//int main()
//{
//	int sum = Add(2, 3);//()为函数调用操作符   Add，2, 3都是()操作数
//
//	return 0;
//}




//关键字typedef  对类型重命名
//typedef unsigned int uint;
//typedef struct Node
//{
//	int data;
//	struct Node* next;
//}Node;
//
//int main()
//{
//	unsigned int num = 0;
//	uint num2 = 1;
//	struct Node n;
//	Node n2;
//
//	return 0;
//}



//static  修饰局部变量/全局变量/函数
#include<stdio.h>

//void test()//void---不需要任何返回
//{
//	//static修饰局部变量
//	static int a = 1;//加上static修饰局部变量a后，其出了作用域不销毁    本质上，static修饰局部变量时改变了其存储位置（放入静态区），影响了其生命周期，变为和程序生命周期一样长
//	a++;//a自增
//	printf("%d", a);
//}
//
//int main()
//{
//	int i = 0;
//	while (i < 10)
//	{
//		test();
//		i++;
//	}
//
//	return 0;
//}


//static修饰全局变量

//extern int g_val;//声明外部符号
//
//int main()
//{
//	printf("%d\n", g_val);
//	return 0;
//}


//static修饰函数

//函数具有外部链接属性
//extern int Add(int x, int y);
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int z = Add(a, b);
//	printf("%d\n", z);
//
//	return 0;
//}



//register——寄存器

//int main()
//{
//	//寄存器变量
//	register int num = 3;//建议3放置于寄存中，速度快
//
//	return 0;
//}




