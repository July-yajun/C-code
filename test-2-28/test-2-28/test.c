#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

//������С��Ϸ
//���Բ���һ���������1-100��
//������
//�´���/��С��
//ֱ���¶���

#include<stdlib.h>
#include<time.h>

void menu()
{
	printf("**************************\n");
	printf("*******   1.play   *******\n");
	printf("*******   0.exit   *******\n");
	printf("**************************\n");
}
//0-RAND_MAX(32767)
void game()
{
	int guess = 0;
	//1.���������
	int ret = rand()%100+1;//����������ĺ���   //%100---�õ�����0��99
	//printf("%d\n", ret);
	//2.������

	while (1)
	{
		printf("�������:>");
		scanf("%d",&guess );
		if (guess < ret)
		{
			printf("��С��\n");
		}
		else if (guess > ret)
		{
			printf("�´���\n");
		}
		else
		{
			printf("��ϲ�㣬�¶���\n");
			break;
		}
	}
}
//ָ��
//int *p = NULL;//NULL������Ϊ0
//int a=0;

int main()
{
	int input = 0;
	//��ʱ�����������
	srand((unsigned int)time(NULL));//ʱ���
	do {
		menu();
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ���������ѡ��\n");
			break;
		}
	} while (ut);

	return 0;
}


int main()
{

	return 0;

}