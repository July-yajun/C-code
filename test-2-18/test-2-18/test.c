#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int main()
//{
//	printf("     **\n");
//	printf("     **\n");
//	printf("************\n");
//	printf("************\n");
//	printf("    *  *\n");
//	printf("    *  *\n");
//
//	return 0;
//}


//int main()
//{
//	printf("Name    Age    Gender\n");
//	printf("---------------------\n");
//	printf("Jack    18      Man\n");
//	return 0;
//}


//int main()
//{
//	printf("I lose my cellphone!\n");
//	return 0;
//}


//int Add(int x, int y)
//{
//	return (-8 + 22) * x - 10 + y / 2;
//}
//int main()
//{
//	int a = 40;
//	int c = 212;
//	//int r = (-8 + 22) * a - 10 + c /2;
//	//printf("%d\n", r);
//	int ret = Add(a, c);
//	printf("%d\n", ret);
//	return 0;
//}


//0-����0
//'0'-�ַ�0-ASCIIֵΪ48
//'\0'-�ַ�-ASCIIֵΪ0
//EOF-end of file �ļ������ı�־ ֵΪ-1


//int main()
//{
//	char arr[4] = { 'b','i','t' };
// //����ȫ��ʼ����ʣ�ಿ��Ĭ�ϳ�ʼ��Ϊ0
// 
//	printf("%d\n", strlen(arr));
//
//	return 0;
//}   //���ֵ


//int main()
//{
//	//int arr[10] = { 1 };
//	int n = 10;
//	int arr[n] = { 0 };
//	//C99��׼֮ǰ�������С����ͨ���������߳������ʽ��ָ��
//	//C99��׼֮��֧���˱䳤���飬���ʱ�����������СΪ�������������ָ����ʽ�����鲻�ܳ�ʼ��
//	return 0;
//}


//int Max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	//�����������Ľϴ�ֵ
//	int r = Max(a, b);
//	printf("%d\n", r);
//
//	return 0;
//}


//int main()
//{
//	//����
//	int x = 0;
//	int y = 0;
//	scanf("%d", &x);
//	//����
//	if (x > 0)
//		y = -1;
//	else if (x == 0)
//		y = 0;
//	else
//		y = 1;
//    //���
//	printf("%d\n", y);
//
//	return 0;
//}




//����������
// 
//int main()
//{
//	//int a = 7 / 2;
//	//int b = 7 % 2;//ȡģ
//	//printf("%d\n", a);
//	//printf("%d\n", b);
//	// 
//	//�������˶�������ʱ��ִ�������������������ֻҪ��һ����������ִ�и������ĳ���
//	float a = 7 / 2.0;
//	int b = 7 % 2;//ȡģ(����ֻ����������
//	printf("%.1f\n", a);
//	printf("%d\n", b);
//
//	return 0;
//}




//��ֵ������
//int main()
//{
//	int a = 0;//��ʼ��
//	a = 20;//��ֵ
//
//	a = a + 3;//a=23
//	a += 3;
//
//	return 0;
//}




//c������0��ʾ�٣���0��ʾ��
//��Ŀ������
int main()
{
	//int flag = 0;
	//if (!flag)//!--�߼�������--�ٱ�Ϊ��
	//{
	//	printf("hh\n");
	//}

	//int a = -10;
	//int b = -a;
	//printf("%d\n", b);

	//sizeofΪ��Ŀ������
	//int a = 10;
	//printf("%d\n", sizeof(a));//4
	//printf("%d\n", sizeof a);//4
	//printf("%d\n", sizeof(int));//4

	//int arr[10] = { 0 };
	//printf("%d\n", sizeof(arr));//�������������Ĵ�С����λΪ�ֽ�
	//printf("%d\n", sizeof(arr[0]));//һ��Ԫ�ش�С--4�ֽ�
	//printf("%d\n", sizeof(arr) / sizeof(arr[0]));//�����Ԫ�ظ���
	
	//int a = 10;
	////int b = a++;//����++����ʹ�ã���++  ---int b = a;a=a+1
	//int b = ++a;//ǰ��++����++����ʹ��   ---a=a+1;b=a

	//printf("%d\n", b);
	//printf("%d\n", a);

	//int a = (int)3.14;//(int)ǿ������
	////3.14Ϊ���渡�������������Զ����Ϊdouble����
	//printf("%d\n", a);

	return 0;

}