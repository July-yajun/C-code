#define _CRT_SECURE_NO_WARNINGS

//���Ա�
// 
//����ʼ������Ԫ�أ��ڴ治ˢ0

#include<stdio.h>
#define MaxSize 10  //������󳤶�
typedef struct 
{
	int data[MaxSize];//�þ�̬����������Ԫ��
	int length;//˳���ǰ����
}; SqList;//˳�������Ͷ���

//������������������ʼ��һ�����ݱ�
void InitList(SqList &L)
{
	L.length = 0;//˳����ʼ����Ϊ0
}
int main()
{
	SqList L;//����һ��˳���
	InitList(L);//��ʼ��˳���
	//���ԡ�Υ�桱��ӡ����data����
	for (int i =0; i < MaxSize; i++)
		printf("data[%d=%d\n", i, L.data[i]);
	return 0;
}



#include<stdlib.h>

#define InitSize 10//Ĭ����󳤶�
typedef struct
{
	int* data;//ָʾ��̬���������ָ��
	int MaxSize;//˳�����������
	int length;//˳���ĵ�ǰ����
}SeqList;

void InitList(SeqList &L)
{
	//��malloc��������һƬ�����Ĵ洢�ռ�
	L.data = (int*)malloc(InitSize * sizeof(int));
	L.length = 0;
	L.MaxSize = InitSize;
}

//���Ӷ�̬���鳤��
void IncreaseSize(SeqList &L, int len)
{
	int* p = L.data;
	L.data = (int*)malloc((L.MaxSize + len) * sizeof(int));
	for (int i = 0; i < L.length; i++)
	{
		L.data[i] = p[i];//�����ݸ��Ƶ�������
	}
	L.MaxSize = L.MaxSize + len;//˳�����󳤶�����len
	free(p);//�ͷ�ԭ�����ڴ�ռ�
}

int main()
{
	SeqList L;//����һ��˳���
	InitList(L);//��ʼ��˳���
	//��˳����������뼸��Ԫ��
	IncreaseSize(L, 5);
	return 0;
}



//˳����������
#include<string>

//���� ---  ListInsert(&L,i,e)���ڱ��е�i��λ�ã�λ���ϲ���ָ��Ԫ��e
//�ô洢λ�õ���������������Ԫ��֮����߼���ϵ
#define MaxSize 10//������󳤶�
typedef struct
{
	ElemType data[MaxSize];//�þ�̬������������Ԫ��  ---�þ�̬���䷽ʽʵ�ֵ�˳���
	int length;//˳���ǰ����
}SqList;//˳���������

bool ListInsert(SqList &L, int i, int e)//������������L��λ��i������Ԫ��e
{
	if (i<1 || i>L.length + 1)//�ж�i�ķ�Χ�Ƿ���Ч
		return false;
	if (L.length >= MaxSize)//��ǰ����ռ����������ܲ���
		return false;
	for (int j = L.length; j >= i; j--)//����i��Ԫ�ؼ�֮���Ԫ�غ���
		L.data[j] = L.data[j - 1];//λ�����±��ϵ
	//�Ӻ����Ԫ�������ƶ�
	L.data[i - 1] = e;//��λ��i������e
	L.length++;//���ȼ�1
	return true;
}

int main()
{
	SqList L;//����һ��˳���
	InitList(L);//��ʼ��˳���
	//...ʡ��һЩ���룬���뼸��Ԫ��
	ListInsert(L, 3, 3);
	return 0;
}





//ɾ��
#define MaxSize 10//������󳤶�
typedef struct
{
	ElemType data[MaxSize];//�þ�̬������������Ԫ�� 
	int length;//˳���ǰ����
}SqList;//˳���������

bool ListDelete(SqList &L, int i, int &e)//--&���ź���Ҫ
{
	if (i<1 || i>L.length)//�ж�i�ķ�Χ�Ƿ���Ч
		return false;
	e = L.data[i - 1];
	for (int j = i; j <L.length; j++)//����i��Ԫ�ؼ�֮���Ԫ��ǰ��
	for (int j = i; j <L.length; j++)//����i��Ԫ�ؼ�֮���Ԫ��ǰ��
		L.data[j-1] = L.data[j];//λ�����±��ϵ
	L.length--;//���ȼ�1
	return true;
}

int main()
{
	SqList L;//����һ��˳���
	InitList(L);//��ʼ��˳���
	//...ʡ��һЩ���룬���뼸��Ԫ��
	int e = -1;
	if (ListDelete(L, 3, e))
		printf("��ɾ��������Ԫ�أ�ɾ��Ԫ��ֵΪ=%d\n", e);
	else
		printf("λ��i���Ϸ���ɾ��ʧ��\n");

	return 0;
}



//���� 
//1 --- GetElem��L,i):��λ����   ��ȡ���е�i��λ�õ�Ԫ�ص�ֵ

#define MaxSize 10//������󳤶�
typedef struct
{
	ElemType*data;//ָʾ��̬���������ָ��
	int MaxSize;//˳����������
	int length;//˳���ǰ����
}SqList;//˳���������

ElemType GetElem(SqList L, int t)
{
	return L.data[i - 1];//�ͷ�����ͨ���鷽��һ��
}
//����˳���ĸ�������Ԫ�����ڴ���������ţ��ɴ˿��Ը�����ʼ��ַ������Ԫ�ش�С�����ҵ���i��Ԫ��   -------- �����ȡ���ԣ�O(1))


//2 --- LocateElem(l,e):��ֵ����  �ڱ��в��Ҿ��и����ؼ���ֵ��Ԫ��
#define MaxSize 10//������󳤶�
typedef struct
{
	int *data;//ָʾ��̬���������ָ��
	int MaxSize;//˳����������
	int length;//˳���ǰ����
}SqList;//˳���������

//��˳����в��ҵ�һ��Ԫ��ֵ����e��Ԫ�أ���������λ��
int LocateElem(SeqList L, int e)
{
	for (int i = 0; i < L.length; i++)
		if (L.data[i] == e)         //�����������ͣ�int,char,double,float�ȿ���ֱ��������� == �Ƚ�           -----     �ṹ���͵����ݲ���ֱ����==  ---  ��Ҫ���ζԱȸ����������ж������ṹ���Ƿ���ȣ����߶���һ��������better����
			return i + 1;
	return 0;
}