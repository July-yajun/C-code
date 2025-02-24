#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//代码分隔：
// 1 变量的命名（有意义，规范）
//2.空格 空行 换行

//int main()
//{
//	int a = 0;
//	int b = 2;
//	if (a == 1)
//	{
//		if (b == 2)
//			printf("hh\n");
//		else
//			printf("qq\n");
//	}//这两个才是一组 可以不加大括号，但是容易看错
//
//	return 0;
//}



//int test()
//{
//	int a = 3;
//	if (a == 3)
//		return 1;
//	else//加上更加容易阅读
//	return 0;
//}
//int main()
//{
//	int r = test();
//	printf("%d\n",r);
//
//
//	return 0;
//}



//int main()
//{
//	int num = 3;
//	if (5 == num)//同if (num == 5)  但不容易因为少一个=而出错(只有一个=表示赋值）
//		printf("hh\n");
//
//	return 0;
//}



//int main()
//{
//	//判断一个数是否为奇数
//	int num = 0;
//	scanf("%d", &num);
//	//判断
//	if (num % 2 == 1)
//		printf("奇数\n");
//	else
//		printf("no\n");
//
//	return 0;
//}



//int main()
//{
// //输出1-100之间的奇数
//	int i = 1;
//	while (i <= 100)
//	{
//		//if (i % 2 == 1)
//		//	printf("%d", i);
//		//i++;
//
//		printf("%d", i);
//		i += 2;
//	}
//
//	return 0;
//}




//swich语句（多分枝）

//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	//if (1 == day)
//	//	printf("monday\n");
//	// else if(2==day)
//	//....
//
//	switch (day)
//	{
//	case 1://后面必须是整形常量
//		printf("monday\n");
//	case 2:
//		printf("tuesday\n");
//	case 3:
//		printf("wednesday\n");
//		break;
//	case 4:
//		printf("thursday\n");
//		break;
//	case 5:
//		printf("friday\n");
//		break;
//	case 6:
//		printf("saturday\n");
//		break;
//	case 7:
//		printf("sunday\n");
//		break;//中断
//	}
//
//	return 0;
//}


//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//		switch (day)
//	{
//		case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("weekday\n");
//		break;
//	case 6:
//	case 7:
//		printf("weekend\n");
//		break;
//	default:
//		printf("选择错误\n");//输入1-7以外的数字时
//	}//多个case匹配同一个语句
//
//	return 0;
//}



int main()
{
	int n = 1;
	int m = 2;
	switch (n)//n决定入口，并不代表只会运行case n
	{
	case 1:m++;
	case 2:n++;
	case 3:
		switch (n)//switch 允许嵌套
		{
		case 1:m++;
		case 2:m++; n++;
			break;//只会跳出自己所在语句，不会跳出所有
		}
	case 4:
		m++;
		break;
	default:
		break;

	}
	printf("m=%d,n=%d\n", m, n);

	return 0;

}