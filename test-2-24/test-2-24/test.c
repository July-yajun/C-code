#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>


//int main()
//{
//	while (1)//表达式为真则进入循环
//	{
//		printf("hh\n");
//	}
//	return 0;
//}


//打印1-10数字
//int main()
//{
//	int i = 1;
//
//	while (i <= 10)
//	{
//		//if (5 == i)
//		//	break;//作用于循环
//
//		//if (5 == i)
//		//	continue;//跳过本次循环后面部分，继续返回前面看是否继续循环---这里变成死循环
//
//		i++;
//		if (5 == i)
//			continue;
//
//		printf("%d", i);
//		/*i ++ ;*/
//	}
//	return 0;
//}
//----->>
//while循环中的
//break是用于永久的终止循环
//continue跳过本次循环后面的代码，直接去判断部分，进行下一次循环的判断



//int main()
//{
//	//EOF;//end of file
//	//int ch = getchar();//getchar获取字符
//	//putchar(ch);//打印字符
//
//	//int ch = 0;
//	//while ((ch = getchar()) != EOF)//ctrl z 终止
//	//{
//	//	putchar(ch);
//	//}
//
////例：
//	//假设密码是字符串
//	char password[20] = { 0 };
//	printf("输入密码：>");
//	scanf("%s", password);
//
//	//getchar();//读取了\n   适用于字符简单的情况  如果是123456 789，scanf读取了123456，getchar读取了中间的空格，剩下的就留到后面读取
//
//	int ch = 0;
//	while ((getchar()) != '\n')
//	{
//		;
//	}//将\n之前的都取走
//
//	printf("确认密码(Y/N):>");
//	int ret = getchar();
//	if ('Y' == ret)
//	{
//		printf("YES\n");
//	}
//	else
//	{
//		printf("NO\n");
//	}
//	return 0;
//}


//int main()
//{
//	char ch = '0';
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch < '0' || ch>'9')
//			continue;
//			putchar(ch);
//	}
//	//只打印数字字符
//	return 0;
//}



 




//作业
//'a'//97
// !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!有点难！！！！！！！！！！！！！！
// 
//转换以下字符并输出
//int main()
//{
//	//printf("%c\n", a);
//	//printf("%c\n", 97);//以上两个结果相同 a
//
//
//	int arr[] = { 73,32,99,97,110,32,100,111,32,105,116,33 };
//	int i = 0;
//	//sizeof(arr)---计算数组总大小，单位 字节
//	//sizeof(arr[0]---计算数组元素的大小
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	while (i < sz)
//	{
//		printf("%c", arr[i]);
//		i++;
//	}
//	
//	return 0;
//}






//输入一个人出生日期（年月日） 将其分别输出
//int main()
//{
//	int year = 0;
//	int month = 0;
//	int day = 0;
//	scanf("%4d %2d %2d", &year, &month, &day);
//
//	printf("year=%d\n", year);
//	printf("month=%02d\n", month);//%02d\n"  在月份小于两位数时用0补齐
//	printf("day=%02d\n", day);
//
//	return 0;
//}



//学生信号输出
//int main()
//{
//	int id = 0;
//	float c = 0.0f;//精度要求高--double   精度要求低---float
//	float math = 0.0f;
//	float eng = 0.0f;
//
//	scanf("%d %f %f %f", &id, &c, &math, &eng);
//
//	printf("The each subject score of No.%d is %.2f, %.2f, %.2f.\n", id, c, math, eng);//.2---小数点后两位
//
//	return 0;
//}




//int main()
//{
//	int n = printf("Hello world!");
//	printf("\n%d\n", n);//\n----换行
//
//	return 0;
//}



//int sum(int a)
//{
//	int c = 0;
//	static int b = 3;//static保留上一次
//	c += 1;
//	b += 2;
//	return(a + b + c);
//}
//int main()
//{
//	int i;
//	int a = 2;
//	for (i = 0; i < 5; i++)//for循环 赋值i=0，小于5时+1，循环5次，依次打印sum（a）
//	{
//		printf("%d", sum(a));
//	}
//	return 0;
//}



int main()
{
	printf("printf(\"Hello world!\\n\"); \n");
		printf("cout<<\"Hello world!\"<<end1;\n");
		//转义字符
	return 0;
}