#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//在一个有序数组中查找某数
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		if (arr[i] == k)
//		{
//			printf("找到了，下标是：%d\n", i);//7的下标为6
//			break;
//		}
//	}
//	if (i == sz)
//	{
//		printf("找不到\n");
//	}
//	
//	return 0;
//}效率低



//鞋 价格不超过300，你猜
//二分查找(数据必须有序）(效率更高）

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	int left = 0;
//	int right = sz - 1;
//
//	while(left<=right)
//	{ 
//		//int mid = (left + right) / 2;//超出范围会溢出
//
//		int mid = left + (right - left) / 2;//这样就不会超出范围了
//
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			printf("找到了，下标是：%d\n ", mid);
//			break;
//		}
//    }
//	if (left > right)
//	{
//		printf("找不到了\n");
//	}
//
//	return 0;
//}



#include<windows.h>
//为了引用Sleep
#include<stdlib.h>
//为了引用system

//演示多个字符从两端向中间汇聚
//int main()
//{
//	char arr1[] = "welcome to bit!!!!";
//	char arr2[] = "##################";
//
//	int left = 0;
//	int right = strlen(arr1)-1;//int right = sizeof(arr1)/sizeof(arr1[0]-2  ---- 减去\0（字符串数组多了一个\0），同时最后一个字符的下标应该再减一
//	//strlen计算\0之前的元素
//
//	while(left<=right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right]; 
//		printf("%s\n", arr2);
//		Sleep(1000);//速度变慢 一步一步往下走
//		//清空屏幕
//		system("cls");//system为一个库函数，可以执行系统命令
//		
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2);
//
//	return 0;
//}



//编写代码实现，模拟用户登录情景，并且只能登录三次（只允许输入三次密码，密码正确则提示成功登录，如果三次均错误，则退出程序
#include<string.h>
//引入strcmp
//int main()
//{
//	int i = 0;
//	char password[20] = { 0 };
//	//假设密码是字符串：abcdef
//	for (i = 0; i < 3; i++)
//	{
//		printf("请输入密码：>");
//		scanf("%s", password);//不需要取地址，数组名本来就是地址
//
//		if (strcmp(password,"abcdef")==0)
//			//password == "abcdef"  (×）比较两个字符串是否相等，不能使用==，而应该是一个库函数：strcmp
//			//如果返回值为0，表示两个字符串相等
//		{
//			printf("登陆成功\n");
//			break;
//		}
//		else
//		{
//			printf("密码错误\n");
//		}
//	}
//	if (i == 3)
//	{
//		printf("三次密码均输入错误，退出程序\n");
//	}
//	return 0;
//}