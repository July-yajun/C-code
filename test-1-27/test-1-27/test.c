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



//���泣��
//const���εĳ�����
//define ����ı�ʶ������
//ö�ٳ���





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



//ö�ٳ���

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
//	//"abcdef";  �ַ���
//	char arr1[] = "abcde";
//	char arr2[] = { 'a','b','c','d','e','\0' };
//
//	printf("%d\n", strlen(arr1));
//	printf("%d\n", strlen(arr2));
//
//	//int len = strlen("abc");//���ַ�������
//	//printf("%d\n", len);
//
//	//printf("%s\n", arr1);
//	//printf("%s\n", arr2);
//
//
//	return 0;
//
//}




//ת���ַ�
//����ĸ�ʣ����ڣ�  ??) ---> ]
//%d - ��ӡ����
//%c - ��ӡ�ַ�
//%s - ��ӡ�ַ���
//%f - ��ӡfloat��������
//%lf - ��ӡdouble��������
//%zu - ��ӡsizeof�ķ���ֵ


//int main()
//{
//	//printf("abcn");
//	//printf("abc\n"); //\n--����
//
//	//printf("abc0de");
//	//printf("abc\0de");//\0--��ֹ
//
//	//printf("%s\n", "(are you ok\?\?)"); //\?--��ֹ�ʺű�����Ϊ����ĸ��
//	//printf('%c\n', '\'');//\'--��һ�������Ų�����һ�Ե������е�ĳһ��
//	//printf("abcde\n");
//	//printf("\"");// \"--��һ��˫���Ų�����һ��˫�����е�ĳһ��
//
//	//printf("abc\\0de"); //\\0--��\0����һ������
//	//printf("%c:\test\test.c");//\t--ˮƽ�Ʊ�� ��Tab����Ч���൱��4���ַ�  ����Ϊһ���ַ�
//	//printf("%c:\\test\\test.c");
//
//	//printf("\a");//\a--���Ծ�������
//
//	//printf("%c\n", '\130');//��130����˽���ת��Ϊʮ����--88������ASCII���Ų�ѯ�õ�X
//	//printf("%c\n", '\x60');//��x60���ʮ������ת��Ϊʮ����--88������ASCII���Ų�ѯ�õ�`
//
//	/*printf("%d\n", strlen("qwer t"));*/
//
//
//
//	//printf("%d\n", strlen("c:\test\628\test.c"));//\t  \62 :ת���ַ���8�����˽��ƣ�1-7��
//
//
//	return 0;
//}





//ע��
//ע�Ϳ�������˼·���Ը��Ӵ�����н���
//
//int main()
//{
//	//����ָ�����p������ֵΪnull
//	int* p = NULL;
//
//	/*int a = 10;
//	  ----c���Դ�ͳע�� ��֧��Ƕ��ע�� */ 
//	//----c++ע�� 
//
//	return 0;
//}




//ѡ�����
//if else 
//
//int main()
//{
//	int input = 0;
//
//	printf("��408\n");
//	printf("Ҫ����ѧϰ��(1/0)?");
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



//ѭ�����
//int main()
//{
//	int line = 0;
//	printf("ѧc����\n");
//
//	while (line < 20000)
//	{
//		printf("д����:%d\n",line);
//		line++;
//	}
//	if (line >= 20000)
//	{
//		printf("good offer\n");
//	}
//	else
//	{
//		printf("��������\n");
//	}
//	return 0;
//}




//����
//����������������

//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}

//int Add(int x, int y)
//{
//	return x+y;
//} //��
//
//int main()
//{
//	int n1 = 0;
//	int n2 = 0;
//	//����
//	scanf("%d %d", &n1, &n2);
//	//���
//	//int sum = n1 + n2;
//	int sum = Add(n1, n2);
//	int t1 = 100;
//	int t2 = 300;
//	int ret = Add(t1, t2);
//
//	//��ӡ
//	printf("%d\n", sum);
//
//	return 0;
//}



//����(���һ����ͬԪ�أ�
//������±꣨��0��ʼ��(��ţ�
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
	printf("num = %d\n", num);//��ʱ��ӡ��������1���ֲ�����

	return 0;
}