#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int main()
//{
//	printf("     **\n");
//	printf("     **\n");
//	printf("************\n");
//	printf("************\n");
//	printf("    *  *\n");
//	printf("    *  *\n");
//
//	return 0;
//}


//int main()
//{
//	printf("Name    Age    Gender\n");
//	printf("---------------------\n");
//	printf("Jack    18      Man\n");
//	return 0;
//}


//int main()
//{
//	printf("I lose my cellphone!\n");
//	return 0;
//}


//int Add(int x, int y)
//{
//	return (-8 + 22) * x - 10 + y / 2;
//}
//int main()
//{
//	int a = 40;
//	int c = 212;
//	//int r = (-8 + 22) * a - 10 + c /2;
//	//printf("%d\n", r);
//	int ret = Add(a, c);
//	printf("%d\n", ret);
//	return 0;
//}


//0-数字0
//'0'-字符0-ASCII值为48
//'\0'-字符-ASCII值为0
//EOF-end of file 文件结束的标志 值为-1


//int main()
//{
//	char arr[4] = { 'b','i','t' };
// //不完全初始化，剩余部分默认初始化为0
// 
//	printf("%d\n", strlen(arr));
//
//	return 0;
//}   //随机值


//int main()
//{
//	//int arr[10] = { 1 };
//	int n = 10;
//	int arr[n] = { 0 };
//	//C99标准之前，数组大小都是通过常量或者常量表达式来指定
//	//C99标准之后，支持了变长数组，这个时候允许数组大小为变量，但是这个指定方式的数组不能初始化
//	return 0;
//}


//int Max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	//求两个整数的较大值
//	int r = Max(a, b);
//	printf("%d\n", r);
//
//	return 0;
//}


//int main()
//{
//	//输入
//	int x = 0;
//	int y = 0;
//	scanf("%d", &x);
//	//计算
//	if (x > 0)
//		y = -1;
//	else if (x == 0)
//		y = 0;
//	else
//		y = 1;
//    //输出
//	printf("%d\n", y);
//
//	return 0;
//}




//算术操作符
// 
//int main()
//{
//	//int a = 7 / 2;
//	//int b = 7 % 2;//取模
//	//printf("%d\n", a);
//	//printf("%d\n", b);
//	// 
//	//除号两端都是整数时，执行整数除法；如果两个只要有一个浮点数就执行浮点数的除法
//	float a = 7 / 2.0;
//	int b = 7 % 2;//取模(两端只能是整数）
//	printf("%.1f\n", a);
//	printf("%d\n", b);
//
//	return 0;
//}




//赋值操作符
//int main()
//{
//	int a = 0;//初始化
//	a = 20;//赋值
//
//	a = a + 3;//a=23
//	a += 3;
//
//	return 0;
//}




//c语言中0表示假，非0表示真
//单目操作符
int main()
{
	//int flag = 0;
	//if (!flag)//!--逻辑反操作--假变为真
	//{
	//	printf("hh\n");
	//}

	//int a = -10;
	//int b = -a;
	//printf("%d\n", b);

	//sizeof为单目操作符
	//int a = 10;
	//printf("%d\n", sizeof(a));//4
	//printf("%d\n", sizeof a);//4
	//printf("%d\n", sizeof(int));//4

	//int arr[10] = { 0 };
	//printf("%d\n", sizeof(arr));//计算的整个数组的大小，单位为字节
	//printf("%d\n", sizeof(arr[0]));//一个元素大小--4字节
	//printf("%d\n", sizeof(arr) / sizeof(arr[0]));//数组的元素个数
	
	//int a = 10;
	////int b = a++;//后置++，先使用，再++  ---int b = a;a=a+1
	//int b = ++a;//前置++，先++，再使用   ---a=a+1;b=a

	//printf("%d\n", b);
	//printf("%d\n", a);

	//int a = (int)3.14;//(int)强制类型
	////3.14为字面浮点数，编译器自动理解为double类型
	//printf("%d\n", a);

	return 0;

}