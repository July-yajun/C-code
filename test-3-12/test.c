#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>


//��д��������������ʱ���������ַ�������

//���ַ�������
//ģ��ʵ��strlen
// 
//int my_strlen(char str[])//��������д��������ʽ
//int my_strlen(char* str)//��������д��ָ����ʽ
//{
//	int count = 0;//����   ��ʱ����-----δ������ĿҪ��
//	while (*str != '\0')
//	{
//		count++;
//		str++;//����һ���ַ�
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

// �ݹ����   
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



//�ݹ���ѭ��
// 
//��n!(n�Ľ׳ˣ�
// 
//�ݹ�
//int fac(int n)
//{
//	if (n <= 1)
//		return 1;
//	else
//		return n * fac(n - 1);
//}
// 
//�����ķ�ʽ����ʱ��ѭ����--�ǵݹ�
//int fac(int n)
//{
//	int i = 0;
//	int ret = 1;
//	for (i = 1; i <= n; i++)
//	{
//		ret *= i;//�ȳ˺�ֵ
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






//���n��쳲�������
// 
//쳲���������
//1 1 2 3 5 8 13 21 34 55 ...
//ǰ��������ӵ��ڵ�������
// 
//��ʽ��{n<=2 ----1
//      n>2 ----Fib(n-1)+Fib(n-2)
//      }

//�ݹ飨����ջ�����
//����ʱ�临�Ӷ�̫��
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


//�Ż�----����
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



//һ�����ݹ�ջ��������⣺
//1 �����Ϊ�ǵݹ�
//2 ʹ��static�������nonstatic�ֲ�����
// �������Լ���ÿ�εݹ�����뷵��ʱ�������ͷ�nonstatic����Ŀ���������static���󻹿��Ա���ݹ���õ��м�״̬�����ҿ�Ϊ�������ò����
//��staticû�з���ջ�ϣ��ŵ���̬��ȥ��)



//�����ݹ龭����Ŀ��
//1 ��ŵ������
//2 ������̨������
