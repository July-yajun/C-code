#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

//debugΪ���԰汾--������Եİ汾
//releaseΪ�����汾--�Ƿ������û�ʹ�õİ汾



//����
//�ӳ���
//���ࣺ�⺯�������������ͷ�ļ���  �Զ��庯��
//�磺���ַ�������--strlen
//�Ƚ������ַ�����С--strcmp 
//�������ӣ�https://cplusplus.com��Ӣ�����Ҫ��


//�⺯��
#include <string.h>

//int main()
//{
//	//char arr1[20] = { 0 };
//	//char arr2[] = "hello";
//
//	//strcpy(arr1, arr2);       //��arr2������arr1
//	//printf("%s\n", arr1);
//
//
//	//char arr[20] = "hello world";
//	//memset(arr+6, 'x', 3);//�ı��ַ����ڵ���  ����Ϊָ��ֵ
//	//printf("%s\n", arr);
//
//	char str[] = "almost every programmer should know memset!";
//	memset(str, '-', 6);
//	puts(str);
//
//	return 0;
//}



//�Զ��庯��
//дһ�������������������ֵ 

//int get_max(int x, int y)//int--���ݷ�������    �������Ҫ���ؿ�����void
//{
//	return (x > y ? x : y);
//	
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	//��ϴ�ֵ
//	int m = get_max(a, b);
//	printf("%d\n", m);
//
//	return 0;
//}


//дһ�����������������α�������

//void Swap1(int x, int y)
//{
//	int z = 0;
//	z = x;
//	x = y;
//	y = z;
//
//}
//void Swap2(int *px, int *py)//��ʽ���� ---���������������еı�����ֻ���ں��������ù����в�ʵ����--�����ڴ浥Ԫ    ֻ�ں�������Ч��
//{
//	int z = *px;//z=a
//	*px = *py;//a=b
//	*py = z;//b=a
//
//	//*px��*py��Ŀ���ַָ���ֵ----��abһ���ĵ�ַ
//	//px��py�ǵ�ַ�����ڴ˴��Ǵ�ģ�---ab��ֵ
//
//}
//
////��ʵ�δ��ݸ��β�ʱ���β���ʵ�ε�һ����ʱ���������βε��޸Ĳ���Ӱ��ʵ��
//
//int Add(int x, int y)
//{
//	return(x + y);
//}
////��Ҫ�ı�ʵ�ξ���Ҫ�����ַ
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//
//	int c = Add(a, b);
//	printf("%d\n", a + b);
//
//	printf("����ǰ:a=%d b=%d\n", a, b);
//	//abΪʵ�Σ���ʵ���ݸ������Ĳ���---����/����---������ȷʵ��ֵ��
//
//	//��ֵ����----�����βκ�ʵ�ηֱ�ռ�в�ͬ�ڴ�飬���β��޸Ĳ�Ӱ��ʵ��
//	Swap1(a, b);
//
//	//��ַ����----�Ѻ����ⲿ�����������ڴ��ַ���ݸ��������������佨����ϵ�������ڲ�����ֱ�Ӳ��������ⲿ����
//	Swap2(&a, &b);
//
//	printf("������:a=%d b=%d\n", a, b);
//
//	return 0;
//} 


//int main()
//{
//	int a = 10;
//	int* p = &a;
//	a = 10;//ֱ�Ӹ�
//	*p = 30;//��Ӹ�   ָ�����
//
//	return 0;
//}






//��ӡ100-200֮������
// 
//����1��
//int main()
//{
//	int count = 0;//�����ж��ٸ�����
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		//�ж�i�Ƿ�Ϊ����   �Ǿʹ�ӡ
//		//��2~i-1֮�������ȥ�Գ�i
//		int flag = 1;//flag��1����ʾ������
//		int j = 0;
//		for (j = 2; j <= i - 1; j++)
//		{
//			if (i % j == 0)
//			{
//				flag = 0;
//				break;
//			}
//		}
//		if (flag == 1)
//		{ 
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("\ncount = %d\n", count);
//
//
//	return 0;
//}


//����2��ѭ����������
#include<math.h>
//int main()
//{
//	int count = 0;
//	int i = 0;
//	for (i = 101; i <= 200; i+=2)//ȫ������
//	{
//		int flag = 1;
//		int j = 0;
//		for (j = 2; j <= sqrt(i); j++)//sqrt(i)--��ѧ�⺯������ƽ����    ������--��������
//		{
//			if (i % j == 0)
//			{
//				flag = 0;
//				break;
//			}
//		}
//		if (flag == 1)
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("\ncount = %d\n", count);
//
//
//	return 0;
//}



//д�������ж�һ�����ǲ�������(ֻ�ܱ�1���䱾������������
// 
//����������1
//������������0

int is_prime(int n)
{
		int j = 0;
		for (j = 2; j <= sqrt(n); j++)
		{
			if (n % j == 0)
			{
				return 0;//0Ϊ��
				//return���ܱ�break��ǿ��
			}
		}
		return 1;//1Ϊ��
}

int main()
{
	int count = 0;
	int i = 0;
	for (i = 101; i <= 200; i += 2)//ȫ������
	{
		if (is_prime(i))
		{
			printf("%d ", i);
			count++;
		}
	}
	printf("\ncount = %d\n", count);

	return 0;
}