#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


//ָ��
// 
//int main()
//{
//	int a = 10;//���ڴ�����4���ֽڴ洢10
//	//&a;//ȡ��ַ������
//	//printf("%p\n", &a);//��ӡ������a�ĵ�ַ
//	int* p = &a;//p����ָ���������ַҲ��Ϊָ�룩----���ָ��/��ַ�ı�������ָ�����
//	//int---˵��pָ�������int���͵�     *---˵��p��ָ�����
//	*p = 20;//�����ò���������˼Ϊͨ��p�д�ŵĵ�ַ���ҵ�pָ��Ķ���*p����pָ��Ķ���
//	printf("%d\n", a);
//
//	//char ch = 'w';
//	//char* pc = &ch;//pc---ָ�����
// 
// int *p1,*p2,*p3;
//	
//	return 0;
//}


//int main()
//{
//	//������ʲô���͵�ָ�룬�����ڴ���ָ�����
//	//ָ�����������ŵ�ַ
//	//ָ�������Сȡ����һ����ַ��ŵ�ʱ����Ҫ���ռ�
//	//32Ϊ�����ϵĵ�ַ��32bitλ---4byte---ָ�������СΪ4���ֽ�
//	//64Ϊ�����ϵĵ�ַ��64bitλ---8byte---ָ�������СΪ8���ֽ�
//
//	printf("%zu\n", sizeof(char*));//4
//	printf("%zu\n", sizeof(short*));
//	printf("%zu\n", sizeof (int*));
//	printf("%zu\n", sizeof(float*));
//	printf("%zu\n", sizeof(double*));
//
//	return 0;
//}




//�ṹ��

//ѧ��
//struct Stu
//{
//	//��Ա
//	char name[20];
//	int age;
//	char sex[10];
//	char tele[12];
//};
//
//void print(struct Stu*ps)
//{
//	/*printf("%s %d %s %s\n", (*ps).name, (*ps).age, (*ps).sex, (*ps).tele);*/
//	printf("%s %d %s %s\n", ps->name ,ps-> age ,ps->sex ,ps->tele );//�ṹ��ָ�����->��Ա��
//}
//int main()
//{
//	struct Stu s = { "zhangsan",20,"nan","1111111111" };
//	//printf("%s %d %s %s\n", s.name, s.age, s.sex, s.tele);//�ṹ�����.��Ա����.��������
//	print(&s);
//	return 0;
//}



//define ���ǹؼ��֣���Ԥ����ָ��

////����a����b�������̺�����
//int main()
//{
//	int a = 0;
//	int b = 0;
//	//����
//	scanf("%d %d",&a,&b);
//	//����
//	int m=a/b;
//	int n = a % b;
//	//���
//	printf("%d %d\n",m,n);
//
//	return 0;
//}



//C���Գ���
// 
//������䣺
//��֧���    if      switch
//ѭ�����    while   for      do while


//int main()
//{
//	//if (3 == 5)
//	//	printf("hh\n");
//
//	//int age = 10;
//	//if (age > 18)
//	//	printf("����\n");
//
//	//int age = 10;
//	//if (age < 18)
//	//{
//	//	printf("δ����\n");
//	//	printf("��������\n");
//	//}
//
//	//else
//	//	printf("����\n");
//
//	int age = 10;
//	scanf("%d", &age);
//
//	if (age < 18)
//		printf("������\n");
//	else if (age >= 18 && age < 28)
//		printf("����\n");
//	else if (age >= 28 && age <40)
//		printf("����\n");
//	else if (age >= 40 && age < 100)
//		printf("����\n");
//	else  
//		printf("������\n");
//
//	//0��ʾ��  ��0��ʾ��
// 
//	return 0;
//}


//����ָ���1 �����������������壬�淶��
int main()
{
	int a = 0;
	int b = 2;
	if (a == 1)
	{
		if (b == 2)
			printf("hh\n");
		else
			printf("qq\n");
	}//����������һ�� ���Բ��Ӵ����ţ��������׿���

	return 0;
}



