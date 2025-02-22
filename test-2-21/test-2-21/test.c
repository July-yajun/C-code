#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


//指针
// 
//int main()
//{
//	int a = 10;//向内存申请4个字节存储10
//	//&a;//取地址操作符
//	//printf("%p\n", &a);//打印出来的a的地址
//	int* p = &a;//p就是指针变量（地址也称为指针）----存放指针/地址的变量就是指针变量
//	//int---说明p指向对象是int类型的     *---说明p是指针变量
//	*p = 20;//解引用操作符，意思为通过p中存放的地址，找到p指向的对象，*p就是p指向的对象
//	printf("%d\n", a);
//
//	//char ch = 'w';
//	//char* pc = &ch;//pc---指针变量
// 
// int *p1,*p2,*p3;
//	
//	return 0;
//}


//int main()
//{
//	//不管是什么类型的指针，都是在创建指针变量
//	//指针变量用来存放地址
//	//指针变量大小取决于一个地址存放的时候需要多大空间
//	//32为机器上的地址：32bit位---4byte---指针变量大小为4个字节
//	//64为机器上的地址：64bit位---8byte---指针变量大小为8个字节
//
//	printf("%zu\n", sizeof(char*));//4
//	printf("%zu\n", sizeof(short*));
//	printf("%zu\n", sizeof (int*));
//	printf("%zu\n", sizeof(float*));
//	printf("%zu\n", sizeof(double*));
//
//	return 0;
//}




//结构体

//学生
//struct Stu
//{
//	//成员
//	char name[20];
//	int age;
//	char sex[10];
//	char tele[12];
//};
//
//void print(struct Stu*ps)
//{
//	/*printf("%s %d %s %s\n", (*ps).name, (*ps).age, (*ps).sex, (*ps).tele);*/
//	printf("%s %d %s %s\n", ps->name ,ps-> age ,ps->sex ,ps->tele );//结构体指针变量->成员名
//}
//int main()
//{
//	struct Stu s = { "zhangsan",20,"nan","1111111111" };
//	//printf("%s %d %s %s\n", s.name, s.age, s.sex, s.tele);//结构体对象.成员名（.操作符）
//	print(&s);
//	return 0;
//}



//define 不是关键字，是预处理指令

////计算a除以b的整数商和余数
//int main()
//{
//	int a = 0;
//	int b = 0;
//	//输入
//	scanf("%d %d",&a,&b);
//	//计算
//	int m=a/b;
//	int n = a % b;
//	//输出
//	printf("%d %d\n",m,n);
//
//	return 0;
//}



//C语言初阶
// 
//控制语句：
//分支语句    if      switch
//循环语句    while   for      do while


//int main()
//{
//	//if (3 == 5)
//	//	printf("hh\n");
//
//	//int age = 10;
//	//if (age > 18)
//	//	printf("成年\n");
//
//	//int age = 10;
//	//if (age < 18)
//	//{
//	//	printf("未成年\n");
//	//	printf("不能饮酒\n");
//	//}
//
//	//else
//	//	printf("成年\n");
//
//	int age = 10;
//	scanf("%d", &age);
//
//	if (age < 18)
//		printf("青少年\n");
//	else if (age >= 18 && age < 28)
//		printf("青年\n");
//	else if (age >= 28 && age <40)
//		printf("中年\n");
//	else if (age >= 40 && age < 100)
//		printf("老年\n");
//	else  
//		printf("老寿星\n");
//
//	//0表示假  非0表示真
// 
//	return 0;
//}


//代码分隔：1 变量的命名（有意义，规范）
int main()
{
	int a = 0;
	int b = 2;
	if (a == 1)
	{
		if (b == 2)
			printf("hh\n");
		else
			printf("qq\n");
	}//这两个才是一组 可以不加大括号，但是容易看错

	return 0;
}



