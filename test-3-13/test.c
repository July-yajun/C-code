#define _CRT_SECURE_NO_WARNINGS

//���Ա�
// 
//����ʼ������Ԫ�أ��ڴ治ˢ0

#include<stdio.h>
//#define MaxSize 10  //������󳤶�
//typedef struct 
//{
//	int data[MaxSize];//�þ�̬����������Ԫ��
//	int length;//˳���ǰ����
//}; SqList;//˳�������Ͷ���
//
////������������������ʼ��һ�����ݱ�
//void InitList(SqList &L)
//{
//	L.length = 0;//˳����ʼ����Ϊ0
//}
//int main()
//{
//	SqList L;//����һ��˳���
//	InitList(L);//��ʼ��˳���
//	//���ԡ�Υ�桱��ӡ����data����
//	for (int i =0; i < MaxSize; i++)
//		printf("data[%d=%d\n", i, L.data[i]);
//	return 0;
//}



#include<stdlib.h>

//#define InitSize 10//Ĭ����󳤶�
//typedef struct
//{
//	int* data;//ָʾ��̬���������ָ��
//	int MaxSize;//˳�����������
//	int length;//˳���ĵ�ǰ����
//}SeqList;
//
//void InitList(SeqList &L)
//{
//	//��malloc��������һƬ�����Ĵ洢�ռ�
//	L.data = (int*)malloc(InitSize * sizeof(int));
//	L.length = 0;
//	L.MaxSize = InitSize;
//}
//
////���Ӷ�̬���鳤��
//void IncreaseSize(SeqList &L, int len)
//{
//	int* p = L.data;
//	L.data = (int*)malloc((L.MaxSize + len) * sizeof(int));
//	for (int i = 0; i < L.length; i++)
//	{
//		L.data[i] = p[i];//�����ݸ��Ƶ�������
//	}
//	L.MaxSize = L.MaxSize + len;//˳�����󳤶�����len
//	free(p);//�ͷ�ԭ�����ڴ�ռ�
//}
//
//int main()
//{
//	SeqList L;//����һ��˳���
//	InitList(L);//��ʼ��˳���
//	//��˳����������뼸��Ԫ��
//	IncreaseSize(L, 5);
//	return 0;
//}




//��ҵ

//int main()//��ѭ��
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{ 
//		if (i = 5)          //���ﲻ���жϣ����Ǹ�ֵ   -----  i=5���ʽ�Ľ����5
//			printf("%d", i);            
//	}
//	return 0;
//}


//if���
//1.���治ֹ����һ����䣬�������ڲ��Ķ�����
//2.0Ϊ�٣���0��ʾ��
//3.��֧��䣬����ʵ�ֵ���֧�Ͷ��֧
//4.elseƥ��----�ͽ�


//switch���
//default �Ӿ�����л�λ��
//case��ı��ʽֻ�������γ������ʽ  ----   charҲ�������μ���ģ���Ϊ�ַ��洢ʱ���洢��ʱASCIIֵ    ------  ����Ϊfloat����
//case���ʽ��Ҫ��˳��

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	switch (n)               //��tab��������������shift��tab������ǰ��
//	{
// 		default://���Ե���˳��
//			printf("hh\n");
//			break;
//		case 1:
//			printf("1\n");
//			break;
//		case 2:
//			printf("2\n");
//			break;
//	}
//	return 0;
//}


//int func(int a)
//{
//	int b;
//	switch (a)
//	{
//	case 1:b = 30;
//	case 2:b = 20;
//	case 3:b = 16;
//	default:b = 0;
//	}
//	return b;
//}
//func(1)=0     ��Ϊû��break���ͻ�һֱ����



//int  main()
//{
//	int x = 3;
//	int y = 3;
//	switch (x % 2)//��1
//	{
//	case 1:
//			switch (y)
//			{
//			case 0:
//				printf("first");
//			case 1:
//				printf("second");
//				break;
//			default:printf("hello");//û��break������case2
//			}
//		case 2:
//			printf("third");
//	}
//	return 0;
//}



//����⣺�Ӵ�С���
//д���뽫���������Ӵ�С���
//�磺����231   �����321

//�߼���������������������������������
//��1��
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	//����
//	scanf("%d %d %d", &a, &b, &c);
//	//����
//	int tmp = 0;
//	if (a < b)//ab�еĽϴ�ֵ����a
//	{
//		tmp = a;//tmp---��ʱ����
//		a = b;
//		b = tmp;
//	}
//	if (a < c)//ac�еĽϴ�ֵ����a
//	{
//		tmp = a;
//		a = c;
//		c = tmp;
//	}
//	if (b < c)//bc�еĽϴ�ֵ����b
//	{
//		tmp = b;
//		b = c;
//		c = tmp;
//	}
//	//���
//	printf("%d %d %d\n", a, b, c);
//	return 0;
//}
//��2��
void Swap(int* px, int* py)
{
	int tmp = *px;
	*px = *py;
	*py = tmp;
}

int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	//����
	scanf("%d %d %d", &a, &b, &c);
	//����
	int tmp = 0;
	if (a < b)
	{
		Swap(&a, &b);
	}
	if (a < c)
	{
		Swap(&a, &c);
	}
	if (b < c)
	{
		Swap(&b, &c);
	}
	//���
	printf("%d %d %d\n", a, b, c);
	return 0;
}