#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


//��ӡ1000-2000��֮�������
//�����жϹ���1.�ܱ�4�����Ҳ��ܱ�100���������ꣻ   2.�ܱ�400����Ҳ������
// 
//�޺���������
//int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{\
//		//�ж�year�ǲ�������
//		if (year % 4 == 0)//2000�ڵ�һ��if�����жϣ���Ҫ����ڶ���if����������if����
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



//��----->>
//int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0)))//&&--����    ||----����
//		{
//			printf("%d ", year);
//		}
//	}
//	return 0;
//}




//дһ�������ж�һ���ǲ�������
//�����귵��1     -----   �������귵��0

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

//���ھ� �����







//дһ��������ʵ��һ��������������Ķ��ֲ���
//��д�ú�����ô���ٷ�����д����

//int binary_search(int arr[], int k, int sz)//�˴��β�arr��������һ��ָ�����
//
//���鴫��ʵ���ϴ��ݵ���������Ԫ�صĵ�ַ����������������    ------  >>  �����ں����ڲ�����һ�������������ֵ������Ԫ�ظ����ǲ����׵�
// int binary_search(int arr[], int k, int sz)
//{
// int sz = sizeof(arr) / sizeof(arr[0]);
//......
//}-------����ʾ��
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
//			return mid;//�ҵ��˷����±�
//		}
//	}
//	return -1;//�Ҳ���
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	//�ҵ��˷����±�           �Ҳ�������-1  -----�±겻����Ϊ-1       �����ķ������Ϳ����Լ��趨
//
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	int ret = binary_search(arr,k,sz);//���ֲ��Һ���
//	if (ret == -1)
//	{
//		printf("�Ҳ���\n");
//	}
//	else
//	{
//		printf("�ҵ��ˣ��±���:%d\n",ret);
//
//	}
//
//	return 0;
//}
//�βκ�ʵ�ε����ֿ�����ͬ�����Բ�ͬ 



//��������bool  ---  ������ʾ��ٵı���
#include<stdbool.h>

//bool is_prime(int n)//�ж�����
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
//	//printf("%d\n", sizeof(bool));//bool----һ���ֽ�
//	
//	return 0;
//}




//дһ��������ÿ����һ������������ͻὫnum��ֵ����1
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
//	return n + 1;//������n++��----�ȷ��أ������ӣ�    ----->>   ������++n
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

//��������ȫ�ֱ������ܲ�������





//����Ƕ�׵���
//(���ǲ���Ƕ�׶��壩


//��ʽ����----��һ�������ķ���ֵ��Ϊ��һ�������Ĳ���

#include<string.h>

//void test()//void����������
//{
//	printf("hh\n");
//}
//
//int main()
//{
//	//int len = strlen("abcdef");
//	//printf("%d\n", len);//�ѳ��ȷ��ڱ����ڲ�����ӡ����
//
//	//printf("%d\n", strlen("abcdef"));//��ʱstrlen�ķ���ֵ����printf�Ĳ���------>>>��ʽ����
//
//
//
//	//printf("%d", printf("%d", printf("%d", 43)));
//	//���ڶ���
//	//printf��ӡ�ڲ���������ֵ��printf����ֵΪ���ַ�����
//	//�˴�����ӡ--->����--->��ӡ--->����--->��ӡ
//	//       43             2              1
//
//
//	int n = test();//�������������
//
//	return 0;
//}




//������д����ֵʱ��Ĭ������Ϊint
//�������һ��Ҫд������
// 
// 
// ����1��
////-----û�з�������
// Add(int x, int y)
//{
//	return x+y;
//}
// 
// 
//����2��
//------û�мӷ���ֵ
//int Add(int x, int y)
//{
//	printf("hh\n");
//	//��һЩ�������з��ص��Ǻ�����ִ�й��������һ��ָ��ִ�еĽ��
//	//��ʱ��ӡ���Ϊhh��3��3Ϊ��h  h  \n ���������ַ�
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


//����д����
// 
//void test(void)/----��ȷ˵��main��������Ҫ����
// //������main�������в�����
//{
//	printf("hh\n");
//}
//int main()
//{
//	test();
//	//test(100);//���Ƽ�����Ȼ����
//
//	return 0;
//}

//main��������������
int main(int argc,char*argv[],char*envp[])
{
	return 0;
}