#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

//debug为调试版本--程序调试的版本
//release为发布版本--是发布给用户使用的版本



//函数
//子程序
//分类：库函数（必须包含其头文件）  自定义函数
//如：求字符串长度--strlen
//比较两个字符串大小--strcmp 
//查阅链接：https://cplusplus.com（英语很重要）


//库函数
#include <string.h>

//int main()
//{
//	//char arr1[20] = { 0 };
//	//char arr2[] = "hello";
//
//	//strcpy(arr1, arr2);       //把arr2拷贝到arr1
//	//printf("%s\n", arr1);
//
//
//	//char arr[20] = "hello world";
//	//memset(arr+6, 'x', 3);//改变字符串内的字  设置为指定值
//	//printf("%s\n", arr);
//
//	char str[] = "almost every programmer should know memset!";
//	memset(str, '-', 6);
//	puts(str);
//
//	return 0;
//}



//自定义函数
//写一个函数找两个数的最大值 

//int get_max(int x, int y)//int--根据返回类型    如果不需要返回可以用void
//{
//	return (x > y ? x : y);
//	
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	//求较大值
//	int m = get_max(a, b);
//	printf("%d\n", m);
//
//	return 0;
//}


//写一个函数交换两个整形变量内容

//void Swap1(int x, int y)
//{
//	int z = 0;
//	z = x;
//	x = y;
//	y = z;
//
//}
//void Swap2(int *px, int *py)//形式参数 ---（函数名后括号中的变量，只有在函数被调用过程中才实例化--分配内存单元    只在函数中有效）
//{
//	int z = *px;//z=a
//	*px = *py;//a=b
//	*py = z;//b=a
//
//	//*px和*py是目标地址指向的值----和ab一样的地址
//	//px和py是地址（用在此处是错的）---ab的值
//
//}
//
////当实参传递给形参时，形参是实参的一份临时拷贝，对形参的修改不会影响实参
//
//int Add(int x, int y)
//{
//	return(x + y);
//}
////需要改变实参就需要传入地址
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//
//	int c = Add(a, b);
//	printf("%d\n", a + b);
//
//	printf("交换前:a=%d b=%d\n", a, b);
//	//ab为实参（真实传递给函数的参数---常量/变量---必须有确实的值）
//
//	//传值调用----函数形参和实参分别占有不同内存块，对形参修改不影响实参
//	Swap1(a, b);
//
//	//传址调用----把函数外部创建变量的内存地址传递给函数参数，将其建立联系，函数内部可以直接操作函数外部变量
//	Swap2(&a, &b);
//
//	printf("交换后:a=%d b=%d\n", a, b);
//
//	return 0;
//} 


//int main()
//{
//	int a = 10;
//	int* p = &a;
//	a = 10;//直接改
//	*p = 30;//间接改   指针变量
//
//	return 0;
//}






//打印100-200之间素数
// 
//方法1：
//int main()
//{
//	int count = 0;//计算有多少个数字
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		//判断i是否为素数   是就打印
//		//用2~i-1之间的数字去试除i
//		int flag = 1;//flag是1，表示是素数
//		int j = 0;
//		for (j = 2; j <= i - 1; j++)
//		{
//			if (i % j == 0)
//			{
//				flag = 0;
//				break;
//			}
//		}
//		if (flag == 1)
//		{ 
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("\ncount = %d\n", count);
//
//
//	return 0;
//}


//方法2：循环次数更少
#include<math.h>
//int main()
//{
//	int count = 0;
//	int i = 0;
//	for (i = 101; i <= 200; i+=2)//全是奇数
//	{
//		int flag = 1;
//		int j = 0;
//		for (j = 2; j <= sqrt(i); j++)//sqrt(i)--数学库函数（开平方）    能整除--不是素数
//		{
//			if (i % j == 0)
//			{
//				flag = 0;
//				break;
//			}
//		}
//		if (flag == 1)
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("\ncount = %d\n", count);
//
//
//	return 0;
//}



//写个函数判断一个数是不是素数(只能被1或其本身整除的数）
// 
//是素数返回1
//不是素数返回0

int is_prime(int n)
{
		int j = 0;
		for (j = 2; j <= sqrt(n); j++)
		{
			if (n % j == 0)
			{
				return 0;//0为假
				//return功能比break更强大
			}
		}
		return 1;//1为真
}

int main()
{
	int count = 0;
	int i = 0;
	for (i = 101; i <= 200; i += 2)//全是奇数
	{
		if (is_prime(i))
		{
			printf("%d ", i);
			count++;
		}
	}
	printf("\ncount = %d\n", count);

	return 0;
}