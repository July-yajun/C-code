#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>

//int main()
//{
//	//int a = 10;
//	//if (a = 3)//����һ��=����ʾ��ȣ�==��ʾ��ȣ���=��ʾ����
//	//{
//	//	printf("hh\n");
//	//}
//
//
//	//&&�߼���--����
//	//||�߼���--����
//	//int a = 10;
//	//int b = 20;
//	//if (a && b)
//	//{
//	//	printf("hh\n");
//	//}
//	
//
//	//����������  ��Ŀ������
//	//int a = 10;
//	//int b = 20;
//	//int r = a > b ? a : b;
//	//printf("%d\n", r);
//
//
//	//���ű��ʽ--���Ÿ�����һ�����ʽ---���������μ��㣬�������ʽ���Ľ�������һ�����ʽ�Ľ��
//	//int a = 10;
//	//int b = 20;
//	//int c = 0;
//	////       c=8        a=28        5
//	//int d = (c = a - 2, a = b + c, c - 3);
//	//printf("%d\n", d);
//
//
//	//�±�����
//	//int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };//[]--�̶��﷨   ��������ʱ�ڲ�Ϊ����
//	//int n = 3;
//	//arr[n]=20;//[]---�±����ò�����   arr��3����[]�ڵĲ�����    ����Ԫ�ص�ʱ���ڲ�����Ϊ����
//	
//	return 0;
//
//}



//�������ò�����
//int Add(int x, int y)
//{
//	int z = 0;
//	z = x = y;
//	return z;
//}
//int main()
//{
//	int sum = Add(2, 3);//()Ϊ�������ò�����   Add��2, 3����()������
//
//	return 0;
//}




//�ؼ���typedef  ������������
//typedef unsigned int uint;
//typedef struct Node
//{
//	int data;
//	struct Node* next;
//}Node;
//
//int main()
//{
//	unsigned int num = 0;
//	uint num2 = 1;
//	struct Node n;
//	Node n2;
//
//	return 0;
//}



//static  ���ξֲ�����/ȫ�ֱ���/����
#include<stdio.h>

//void test()//void---����Ҫ�κη���
//{
//	//static���ξֲ�����
//	static int a = 1;//����static���ξֲ�����a�����������������    �����ϣ�static���ξֲ�����ʱ�ı�����洢λ�ã����뾲̬������Ӱ�������������ڣ���Ϊ�ͳ�����������һ����
//	a++;//a����
//	printf("%d", a);
//}
//
//int main()
//{
//	int i = 0;
//	while (i < 10)
//	{
//		test();
//		i++;
//	}
//
//	return 0;
//}


//static����ȫ�ֱ���

//extern int g_val;//�����ⲿ����
//
//int main()
//{
//	printf("%d\n", g_val);
//	return 0;
//}


//static���κ���

//���������ⲿ��������
//extern int Add(int x, int y);
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int z = Add(a, b);
//	printf("%d\n", z);
//
//	return 0;
//}



//register�����Ĵ���

//int main()
//{
//	//�Ĵ�������
//	register int num = 3;//����3�����ڼĴ��У��ٶȿ�
//
//	return 0;
//}




