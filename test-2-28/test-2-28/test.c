#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

//猜数字小游戏
//电脑产生一个随机数（1-100）
//猜数字
//猜大了/猜小了
//直到猜对了

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
	//1.生成随机数
	int ret = rand()%100+1;//生成随机数的函数   //%100---得到余数0—99
	//printf("%d\n", ret);
	//2.猜数字

	while (1)
	{
		printf("请猜数字:>");
		scanf("%d",&guess );
		if (guess < ret)
		{
			printf("猜小了\n");
		}
		else if (guess > ret)
		{
			printf("猜大了\n");
		}
		else
		{
			printf("恭喜你，猜对了\n");
			break;
		}
	}
}
//指针
//int *p = NULL;//NULL本质上为0
//int a=0;

int main()
{
	int input = 0;
	//以时间生成随机数
	srand((unsigned int)time(NULL));//时间戳
	do {
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误，重新选择\n");
			break;
		}
	} while (ut);

	return 0;
}


int main()
{

	return 0;

}