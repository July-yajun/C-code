#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>


//int main()
//{
//	while (1)//���ʽΪ�������ѭ��
//	{
//		printf("hh\n");
//	}
//	return 0;
//}


//��ӡ1-10����
//int main()
//{
//	int i = 1;
//
//	while (i <= 10)
//	{
//		//if (5 == i)
//		//	break;//������ѭ��
//
//		//if (5 == i)
//		//	continue;//��������ѭ�����沿�֣���������ǰ�濴�Ƿ����ѭ��---��������ѭ��
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
//whileѭ���е�
//break���������õ���ֹѭ��
//continue��������ѭ������Ĵ��룬ֱ��ȥ�жϲ��֣�������һ��ѭ�����ж�



//int main()
//{
//	//EOF;//end of file
//	//int ch = getchar();//getchar��ȡ�ַ�
//	//putchar(ch);//��ӡ�ַ�
//
//	//int ch = 0;
//	//while ((ch = getchar()) != EOF)//ctrl z ��ֹ
//	//{
//	//	putchar(ch);
//	//}
//
////����
//	//�����������ַ���
//	char password[20] = { 0 };
//	printf("�������룺>");
//	scanf("%s", password);
//
//	//getchar();//��ȡ��\n   �������ַ��򵥵����  �����123456 789��scanf��ȡ��123456��getchar��ȡ���м�Ŀո�ʣ�µľ����������ȡ
//
//	int ch = 0;
//	while ((getchar()) != '\n')
//	{
//		;
//	}//��\n֮ǰ�Ķ�ȡ��
//
//	printf("ȷ������(Y/N):>");
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
//	//ֻ��ӡ�����ַ�
//	return 0;
//}



 




//��ҵ
//'a'//97
// !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!�е��ѣ���������������������������
// 
//ת�������ַ������
//int main()
//{
//	//printf("%c\n", a);
//	//printf("%c\n", 97);//�������������ͬ a
//
//
//	int arr[] = { 73,32,99,97,110,32,100,111,32,105,116,33 };
//	int i = 0;
//	//sizeof(arr)---���������ܴ�С����λ �ֽ�
//	//sizeof(arr[0]---��������Ԫ�صĴ�С
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	while (i < sz)
//	{
//		printf("%c", arr[i]);
//		i++;
//	}
//	
//	return 0;
//}






//����һ���˳������ڣ������գ� ����ֱ����
//int main()
//{
//	int year = 0;
//	int month = 0;
//	int day = 0;
//	scanf("%4d %2d %2d", &year, &month, &day);
//
//	printf("year=%d\n", year);
//	printf("month=%02d\n", month);//%02d\n"  ���·�С����λ��ʱ��0����
//	printf("day=%02d\n", day);
//
//	return 0;
//}



//ѧ���ź����
//int main()
//{
//	int id = 0;
//	float c = 0.0f;//����Ҫ���--double   ����Ҫ���---float
//	float math = 0.0f;
//	float eng = 0.0f;
//
//	scanf("%d %f %f %f", &id, &c, &math, &eng);
//
//	printf("The each subject score of No.%d is %.2f, %.2f, %.2f.\n", id, c, math, eng);//.2---С�������λ
//
//	return 0;
//}




//int main()
//{
//	int n = printf("Hello world!");
//	printf("\n%d\n", n);//\n----����
//
//	return 0;
//}



//int sum(int a)
//{
//	int c = 0;
//	static int b = 3;//static������һ��
//	c += 1;
//	b += 2;
//	return(a + b + c);
//}
//int main()
//{
//	int i;
//	int a = 2;
//	for (i = 0; i < 5; i++)//forѭ�� ��ֵi=0��С��5ʱ+1��ѭ��5�Σ����δ�ӡsum��a��
//	{
//		printf("%d", sum(a));
//	}
//	return 0;
//}



int main()
{
	printf("printf(\"Hello world!\\n\"); \n");
		printf("cout<<\"Hello world!\"<<end1;\n");
		//ת���ַ�
	return 0;
}