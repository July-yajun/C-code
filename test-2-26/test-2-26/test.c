#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>



//int main()
//{
//	int i = 1;//初始化
//
//	while (i <= 10)//判断
//	{
//		printf("%d", i);
//		i++;//调整
//	}
//
//	return 0;
//}





//for循环（用的最多）
// 
//打印1-10
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)//（表达式1（初始化部分）；表达式2（条件判断部分）；表达式3（调整部分））
//	{
//		if (i == 5)
//			/*		break;*/
//			continue;//没有跳过i++，没有死循环
//
//		printf("%d", i);
//		printf("hh\n");
//	}
//
//	return 0;
//}
//不可在for循环体内修改循环变量，防止其失去控制



//建议for语句的循环控制变量的取值采用“前闭后开区间”写法
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	for (i = 0; i < 10; i++)//最好写 i < 10，而不是i<=9     但是不是绝对
//	{
//		printf("%d", arr[i]);
//
//	}
//	return 0;
//}



//内部省略
//int main()
//{
//	//for (;;)//for循环判断部分省略意味着判断恒成立
//	//{
//	//	printf("hh\n");
//	//}
//	//int i = 0;
//	//int j = 0;
//	//for (i = 0; i < 10; i++)
//	//{
//	//	for (j = 0; j < 10; j++)//j先循环完出去了再执行i循环
//	//	{
//	//		printf("hh\n");//100次
//	//	}
//	//}
//
//	//for (; i < 10; i++)
//	//{
//	//	for (; j < 10; j++)//j先循环完出去了再执行i循环 再进来j不再为0，而是开始出去的时候的量
//	//	{
//	//		printf("hh\n");//10次
//	//	}
//	//}
//
//	for (int i = 0; i < 10; i++)//C99语法才支持这种写法，C++支持这种写法，有些编译器不支持   也没有少用内存
//	{
//		printf("hh\n");
//	}
//
//	return 0;
//}



//多个变量
//int main()
//{
//	int i = 0;
//	int k = 0;
//	for (i = 0, k = 0; k = 0; i++, k++)//不循环  判断部分为赋值
//		k++;
//
//	return 0;
//}




//do while循环(至少循环1次）
//int main()
//{
//	int i = 1;
//
//	do
//	{
//	/*	i++;*/
//		if (i == 5)
//			//break;//1-4死循环
//		continue;
//
//		printf("%d ", i);
//		i++;
//	}
//	while (i <= 10);
//
//	return 0;
//
//}



//计算n的阶乘
//int main()
//{
//	int i = 1;
//	int n = 0;
//	int ret = 1;
//
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		ret = ret * i;
//	}
//	printf("%d\n", ret);
//
//	return 0;
//}




//计算1！+2！+3！+...+10！//有点绕，在本子上写一下
int main()
{
	int i = 1;
	int n = 0;
	int ret = 1;
	int sum = 0;

	//法1：
	//for (n = 1; n <= 10; n++)
	//{
	//	ret = 1;//很重要，不然会累积
 //       for (i = 1; i <= n; i++)
	//    {
	//	ret = ret * i;
	//    }
	//	sum = sum + ret;

	//}

	//法2：(更加简洁优化）
	for (n = 1; n <= 3; n++)
	{
		ret = ret * n;
		sum = sum + ret;
	}

	printf("%d\n", sum);
	
	return 0;
}