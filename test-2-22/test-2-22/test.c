#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//����ָ���
// 1 �����������������壬�淶��
//2.�ո� ���� ����

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
//	}//����������һ�� ���Բ��Ӵ����ţ��������׿���
//
//	return 0;
//}



//int test()
//{
//	int a = 3;
//	if (a == 3)
//		return 1;
//	else//���ϸ��������Ķ�
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
//	if (5 == num)//ͬif (num == 5)  ����������Ϊ��һ��=������(ֻ��һ��=��ʾ��ֵ��
//		printf("hh\n");
//
//	return 0;
//}



//int main()
//{
//	//�ж�һ�����Ƿ�Ϊ����
//	int num = 0;
//	scanf("%d", &num);
//	//�ж�
//	if (num % 2 == 1)
//		printf("����\n");
//	else
//		printf("no\n");
//
//	return 0;
//}



//int main()
//{
// //���1-100֮�������
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




//swich��䣨���֦��

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
//	case 1://������������γ���
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
//		break;//�ж�
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
//		printf("ѡ�����\n");//����1-7���������ʱ
//	}//���caseƥ��ͬһ�����
//
//	return 0;
//}



int main()
{
	int n = 1;
	int m = 2;
	switch (n)//n������ڣ���������ֻ������case n
	{
	case 1:m++;
	case 2:n++;
	case 3:
		switch (n)//switch ����Ƕ��
		{
		case 1:m++;
		case 2:m++; n++;
			break;//ֻ�������Լ�������䣬������������
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