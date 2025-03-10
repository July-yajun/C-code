#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


//打印1000-2000年之间的闰年
//闰年判断规则：1.能被4整除且不能被100整除是闰年；   2.能被400整除也是闰年
// 
//无函数方法：
//int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{\
//		//判断year是不是闰年
//		if (year % 4 == 0)//2000在第一个if不能判断，需要进入第二个if，所以两个if并列
//		{
//			if (year % 100 != 0)
//			{
//	            printf("%d ", year);
//			}
//		}
//		if (year % 400 == 0)
//		{
//			printf("%d ", year);
//		}
//
//	}
//	return 0;
//}



//简化----->>
//int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0)))//&&--并且    ||----或者
//		{
//			printf("%d ", year);
//		}
//	}
//	return 0;
//}




//写一个函数判断一年是不是闰年
//是闰年返回1     -----   不是闰年返回0

//int is_leap_year(int y)
//{
//	if (((y % 4 == 0) && (y % 100 != 0) || (y % 400 == 0)))
//		return 1;
//	else
//		return 0;
//}
//int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 2050; year++)
//	{
//		if (is_leap_year(year))
//		{
//			printf("%d ", year);
//		}
//	}
//	return 0;
//}

//高内聚 低耦合







//写一个函数，实现一个整形有序数组的二分查找
//先写好函数怎么用再反过来写函数

//int binary_search(int arr[], int k, int sz)//此处形参arr本质上是一个指针变量
//
//数组传参实际上传递的是数组首元素的地址，而不是整个数组    ------  >>  所以在函数内部计算一个函数参数部分的数组的元素个数是不靠谱的
// int binary_search(int arr[], int k, int sz)
//{
// int sz = sizeof(arr) / sizeof(arr[0]);
//......
//}-------错误示范
//
//{
//	int left = 0;
//	int right = sz - 1;
//
//	while (left<=right)
//	{
//		int mid = left + (right - left) / 2;
//		if (arr[mid]<k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			return mid;//找到了返回下标
//		}
//	}
//	return -1;//找不到
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	//找到了返回下标           找不到返回-1  -----下标不可能为-1       函数的返回类型可以自己设定
//
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	int ret = binary_search(arr,k,sz);//二分查找函数
//	if (ret == -1)
//	{
//		printf("找不到\n");
//	}
//	else
//	{
//		printf("找到了，下标是:%d\n",ret);
//
//	}
//
//	return 0;
//}
//形参和实参的名字可以相同，可以不同 



//布尔类型bool  ---  用来表示真假的变量
#include<stdbool.h>

//bool is_prime(int n)//判断素数
//{
//	int j = 0;
//	for (j = 2; j <= sqrt(n); j++)
//	{
//		if (n % j == 0)
//		{
//			return false;//flase----0
//		}
//	}
//	return true;//true-----1
//}
//
//int main()
//{
//	int count = 0;
//	int i = 0;
//	for (i = 101; i <= 200; i += 2)
//	{
//		if (is_prime(i))
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\ncount = %d\n", count);
//
//	//printf("%d\n", sizeof(bool));//bool----一个字节
//	
//	return 0;
//}




//写一个函数，每调用一次这个函数，就会将num的值增加1
// 1:
//void Add(int* p)
//{
//	(*p)++;
//}
//int main()
//{
//	int num = 0;
//	Add(&num);
//	printf("%d\n", num);//1
//	Add(&num);
//	printf("%d\n", num);//2
//
//	return 0;
//}

//2:
//int Add(int n)
//{
//	return n + 1;//不能是n++（----先返回，再增加）    ----->>   可以是++n
//}
//int main()
//{
//	int num = 0;
//	num = Add(num);
//	printf("%d\n", num);//1
//	num = Add(num);
//	printf("%d\n", num);//2
//
//	return 0;
//}

//尽量少用全局变量，能不用则不用





//函数嵌套调用
//(但是不能嵌套定义）


//链式访问----把一个函数的返回值作为另一个函数的参数

#include<string.h>

//void test()//void函数不返回
//{
//	printf("hh\n");
//}
//
//int main()
//{
//	//int len = strlen("abcdef");
//	//printf("%d\n", len);//把长度放在变量内部，打印变量
//
//	//printf("%d\n", strlen("abcdef"));//此时strlen的返回值做了printf的参数------>>>链式访问
//
//
//
//	//printf("%d", printf("%d", printf("%d", 43)));
//	//由内而外
//	//printf打印内部函数返回值，printf返回值为其字符个数
//	//此处：打印--->返回--->打印--->返回--->打印
//	//       43             2              1
//
//
//	int n = test();//这个函数不返回
//
//	return 0;
//}




//函数不写返回值时，默认类型为int
//但是最好一定要写出来、
// 
// 
// 错误1：
////-----没有返回类型
// Add(int x, int y)
//{
//	return x+y;
//}
// 
// 
//错误2：
//------没有加返回值
//int Add(int x, int y)
//{
//	printf("hh\n");
//	//在一些编译器中返回的是函数中执行过程中最后一条指令执行的结果
//	//此时打印结果为hh和3，3为“h  h  \n ”这三个字符
//}
//
// 
//int main()
//{
//	int a = 10;
//	int b = 10;
//	int c = Add(a, b);
//	printf("%d\n", c);
//
//	return 0;
//}


//错误写法：
// 
//void test(void)/----明确说明main函数不需要参数
// //本质上main函数是有参数的
//{
//	printf("hh\n");
//}
//int main()
//{
//	test();
//	//test(100);//不推荐，虽然能用
//
//	return 0;
//}

//main函数有三个参数
int main(int argc,char*argv[],char*envp[])
{
	return 0;
}