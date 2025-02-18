#define _CRT_SECURE_NO_WARNINGS


#include<stdio.h>
//
//int main()
//{
//	printf("hehe\n");
//
//	return 0;




//int main()
//{
//	printf("%zu\n", sizeof(char));
//	printf("%zu\n", sizeof(short));
//	printf("%zu\n", sizeof(int));
//	printf("%zu\n", sizeof(long));
//	printf("%zu\n", sizeof(long long));
//	printf("%zu\n", sizeof(float));
//	printf("%zu\n", sizeof(double));
//
//	return 0;
//}
//

//int main()
//{
//	int age = 20;
//	double price = 66.6;
//
//		return 0;
//}

////int main()
//{
//	short age = 20;
//	int high = 180;
//	float weight = 46;
//
//	return 0;
//
//}


//int a = 100;
//
//int main()
//{
//	int a = 10;
//	printf("a=%d\n", a);
//
//	return 0;
//}


//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//
//	scanf("%d %d", &num1, &num2);
//
//	int sum = num1 + num2;
//
//	return 0;
//}
//


//extern int a;
//
//
//void test()
//{
//	printf("test-->%d\n", a);
//}
//
//int main()
//{
//	test();
//	{
//		printf("a=%d\n", a);
//	}
//	printf("a=%d\n", a);
//	return 0;
//}

//extern int a;
//int main()
//{
//	{
//		int a = 100;
//		printf("%d\n", a);
//	}
//
//	printf("%d\n", a);
//
//	return 0;
//}



//字面常量
//const修饰的常变量
//define 定义的标识符常量
//枚举常量





//int main()
//{
//
//
//	
	//const int a = 10;
	//a = 20;
	//printf("%d\n", a);
//
//
//
	//const int n = 10;
	//int arr[10] = { 0 };
//
//
//
//	return 0;
//}




//#define MAX 100
//#define STR "abcef"
//
//int main()
//{
//	printf("%d\n", MAX);
//	int a = MAX;
//	printf("%d\n", a);
//	printf("%s\n", STR);
//
//	return 0;
//}



//枚举常量

//enum Color
//{
//	RED,
//	GERRN,
//	BLUE
//};
//
//enum Sex
//{
//	MALE,
//	FEMALE,
//	SECRET
//};
//
//
//int main()
//{
//	enum Color c = RED;
//
//
//	return 0;
//
//}



//'\0'

//#include <string.h>
//
//int main()
//{
//	//char ch = 'w';  
//	//"abcdef";  字符串
//	char arr1[] = "abcde";
//	char arr2[] = { 'a','b','c','d','e','\0' };
//
//	printf("%d\n", strlen(arr1));
//	printf("%d\n", strlen(arr2));
//
//	//int len = strlen("abc");//求字符串长度
//	//printf("%d\n", len);
//
//	//printf("%s\n", arr1);
//	//printf("%s\n", arr2);
//
//
//	return 0;
//
//}




//转义字符
//三字母词（早期）  ??) ---> ]
//%d - 打印整型
//%c - 打印字符
//%s - 打印字符串
//%f - 打印float类型数据
//%lf - 打印double类型数据
//%zu - 打印sizeof的返回值


//int main()
//{
//	//printf("abcn");
//	//printf("abc\n"); //\n--换行
//
//	//printf("abc0de");
//	//printf("abc\0de");//\0--终止
//
//	//printf("%s\n", "(are you ok\?\?)"); //\?--防止问号被解析为三字母词
//	//printf('%c\n', '\'');//\'--让一个单引号不再是一对单引号中的某一个
//	//printf("abcde\n");
//	//printf("\"");// \"--让一个双引号不再是一对双引号中的某一个
//
//	//printf("abc\\0de"); //\\0--让\0不是一个整体
//	//printf("%c:\test\test.c");//\t--水平制表符 （Tab键）效果相当于4个字符  本身为一个字符
//	//printf("%c:\\test\\test.c");
//
//	//printf("\a");//\a--电脑警告声音
//
//	//printf("%c\n", '\130');//把130这个八进制转换为十进制--88，根据ASCII表编号查询得到X
//	//printf("%c\n", '\x60');//把x60这个十六进制转换为十进制--88，根据ASCII表编号查询得到`
//
//	/*printf("%d\n", strlen("qwer t"));*/
//
//
//
//	//printf("%d\n", strlen("c:\test\628\test.c"));//\t  \62 :转义字符，8不属八进制（1-7）
//
//
//	return 0;
//}





//注释
//注释可以梳理思路、对复杂代码进行解释
//
//int main()
//{
//	//创建指针变量p，并赋值为null
//	int* p = NULL;
//
//	/*int a = 10;
//	  ----c语言传统注释 不支持嵌套注释 */ 
//	//----c++注释 
//
//	return 0;
//}




//选择语句
//if else 
//
//int main()
//{
//	int input = 0;
//
//	printf("考408\n");
//	printf("要认真学习吗(1/0)?");
//	scanf("%d", &input);//
//	if (input == 1)
//	{
//		printf("good job\n");
//	}
//	else
//	{
//		printf("other job\n");
//	}
//	return 0;
//}



//循环语句
//int main()
//{
//	int line = 0;
//	printf("学c语言\n");
//
//	while (line < 20000)
//	{
//		printf("写代码:%d\n",line);
//		line++;
//	}
//	if (line >= 20000)
//	{
//		printf("good offer\n");
//	}
//	else
//	{
//		printf("继续加油\n");
//	}
//	return 0;
//}




//函数
//求两个任意整数和

//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}

//int Add(int x, int y)
//{
//	return x+y;
//} //简化
//
//int main()
//{
//	int n1 = 0;
//	int n2 = 0;
//	//输入
//	scanf("%d %d", &n1, &n2);
//	//求和
//	//int sum = n1 + n2;
//	int sum = Add(n1, n2);
//	int t1 = 100;
//	int t2 = 300;
//	int ret = Add(t1, t2);
//
//	//打印
//	printf("%d\n", sum);
//
//	return 0;
//}



//数组(存放一组相同元素）
//数组的下标（从0开始）(序号）
//int main()
//{
//	int arr[10] = { 0,1,2,3,4,5,6,7,10,9 };
//	//printf("%d\n", arr[8]);
//	//int i = 0;
//	//while(i<10)
//	//{
//	//	printf("%d", arr[i]);
//	//	i = i + 1;
//	//}
//	printf("abc\0def");
//
//	return 0;
//}





int num = 10;

int main()
{
	int num = 1;
	printf("num = %d\n", num);//此时打印出来的是1，局部优先

	return 0;
}