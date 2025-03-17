#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

//写一个代码打印1-100之间所有的倍数的数字

//int main()
//{
//	int i = 0;
//	//for (i = 1; i <= 100; i++)
//	//{
//	//	if (i % 3 == 0)
//	//	{
//	//		printf("%d ", i);
//	//	}
//	//}
//
//
//	for (i = 3; i <= 100; i+=3)
//	{
//		if (i % 3 == 0)
//		{
//			printf("%d ", i);
//		}
//	}
//
//	return 0;
//}





//给定两个数，求两个数最大公约数
// 法1：
//暴力求解，不够高效
//int main()
//{
//	int a = 0;
//	int b = 0;
//	//输入
//	scanf("%d %d", &a, &b);
//	// 求最大公约数
//	int min = (a < b) ? a : b;//较小值为a则是a，否则就是b
//	int m = min;
//	while (1)
//	{
//		if (a % m == 0 && b % m == 0)//并且
//		{
//			break;
//		}
//		m--;
//	}
//	printf("%d\n ", m);
//
//	return 0;
//}

//法2：
//辗转相除法
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	//输入
//	scanf("%d %d", &a, &b);
//	// 求最大公约数
//	while (c=a%b)
//	{
//		a = b;
//		b = c;
//	}
//	printf("%d\n ", b);
//
//	return 0;
//}




//while 循环
//条件表达式执行次数总是比循环体的执行次数多一次   ----   先判断，条件为真才进来




//int main()
//{
//	int a = 0, b = 0;
//	for (a = 1, b = 1; a <= 100; a++)
//	{
//		if (b >= 20)break;
//		if (b %                                                                                                                                                                                    3 == 1)
//		{
//			b = b + 3;
//			continue;//跳过本次循环后面的代码
//		}
//		b = b - 5;
//	}
//	printf("%d\n", a);
//
//	return 0;
//}





//编写程序数一下1-100所有整数中出现多少个数字9
//个位为9    十位为9
//int main()
//{
//	int i = 0;
//	int count = 0;//计数
//	for (i = 1; i <= 100; i++)
//	{
//		//判断个位
//		if (i % 10 == 9)
//			count++;
//		//判断十位
//		if (i / 10 == 9)
//			count++;
//		//if else ----为一个语句，判断1次
//		//if if -----为两个语句，都要判断
//	}
//	printf("count = %d\n", count);
//
//	return 0;
//}





//计算1/1-1/2+1/3-1/4...+1/99-1/100的值，打印结果
//分子总是1
//分母为1-100

//不考虑加减交替
//int main()
//{
//	int i = 0;
//	double sum = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		sum =sum +1.0 / i;//整形相除不能得到小数
//	}
//	printf("%lf\n", sum);
//
//	return 0;
//}


//加减交替
int main()
{
	int i = 0;
	double sum = 0;
	int flag = 1;
	for (i = 1; i <= 100; i++)
	{
		sum = sum + flag*(1.0 / i);//整形相除不能得到小数
		flag = -flag;//不用判断，效率更高
	}
	printf("%lf\n", sum);

	return 0;
}
//法2：分奇偶   奇数相加sum1 ，偶数相加sum2， sum1+sum2