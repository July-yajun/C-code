#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>


//编写函数不允许创建临时变量，求字符串长度

//求字符串长度
//模拟实现strlen
// 
//int my_strlen(char str[])//参数部分写成数组形式
//int my_strlen(char* str)//参数部分写成指针形式
//{
//	int count = 0;//计数   临时变量-----未符合题目要求
//	while (*str != '\0')
//	{
//		count++;
//		str++;//找下一个字符
//	}
//	return count;
//}
//int main()
//{
//	
//	char arr[] = "abc";
//	int len = my_strlen(arr);//[a b c \0]
//	
//	printf("%d\n", len);
//
//	return 0;
//}

// 递归求解   
// 
//my_strlen("abc")
//1+my_strlen("bc")
//1+1+my_strlen("c")
//1+1+1+my_strlen("")
//1+1+1+0

//int my_strlen(char* str)
//{
//	if (*str != '\0')
//		return 1 + my_strlen(str+1);
//	else
//		return 0;
//}
// 
//int main()
//{     
//	char arr[] = "abc";
//	int len = my_strlen(arr);
//	         
//	printf("%d\n", len);
//
//	return 0;
//}



//递归与循环
// 
//求n!(n的阶乘）
// 
//递归
//int fac(int n)
//{
//	if (n <= 1)
//		return 1;
//	else
//		return n * fac(n - 1);
//}
// 
//迭代的方式（此时用循环）--非递归
//int fac(int n)
//{
//	int i = 0;
//	int ret = 1;
//	for (i = 1; i <= n; i++)
//	{
//		ret *= i;//先乘后赋值
//	}
//	return ret;
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = fac(n);
//	printf("ret = %d\n", ret);
//
//	return 0;
//}






//求第n个斐波那契数
// 
//斐波那契数列
//1 1 2 3 5 8 13 21 34 55 ...
//前两个数相加等于第三个数
// 
//公式：{n<=2 ----1
//      n>2 ----Fib(n-1)+Fib(n-2)
//      }

//递归（容易栈溢出）
//计算时间复杂度太高
//int count = 0;
//
//int Fib(int n)
//{
//	if (n==3)
//		count++;
//
//	if (n <= 2)
//		return 1;
//	else
//		return Fib(n - 1) + Fib(n - 2);
//}


//优化----更快
int Fib(int n)
{
	int a = 1;
	int b = 1;
	int c = 0;

	while (n >= 3)
	{
		c = a + b;
		a = b;
		b = c;
		n--;
	}
	return c;
}


int main()
{
	int n = 0;
	scanf("%d", &n);
	int ret = Fib(n);
	printf("%d\n", ret);

	return 0;
}



//一般解决递归栈溢出的问题：
//1 将其改为非递归
//2 使用static对象代替nonstatic局部对象
// 不仅可以减少每次递归调用与返回时产生和释放nonstatic对象的开销，而且static对象还可以保存递归调用的中间状态，并且可为各个调用层访问
//（static没有放在栈上，放到静态区去了)



//函数递归经典题目：
//1 汉诺塔问题
//2 青蛙跳台阶问题
