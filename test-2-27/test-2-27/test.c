#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//��һ�����������в���ĳ��
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
//			printf("�ҵ��ˣ��±��ǣ�%d\n", i);//7���±�Ϊ6
//			break;
//		}
//	}
//	if (i == sz)
//	{
//		printf("�Ҳ���\n");
//	}
//	
//	return 0;
//}Ч�ʵ�



//Ь �۸񲻳���300�����
//���ֲ���(���ݱ�������(Ч�ʸ��ߣ�

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
//		//int mid = (left + right) / 2;//������Χ�����
//
//		int mid = left + (right - left) / 2;//�����Ͳ��ᳬ����Χ��
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
//			printf("�ҵ��ˣ��±��ǣ�%d\n ", mid);
//			break;
//		}
//    }
//	if (left > right)
//	{
//		printf("�Ҳ�����\n");
//	}
//
//	return 0;
//}



#include<windows.h>
//Ϊ������Sleep
#include<stdlib.h>
//Ϊ������system

//��ʾ����ַ����������м���
//int main()
//{
//	char arr1[] = "welcome to bit!!!!";
//	char arr2[] = "##################";
//
//	int left = 0;
//	int right = strlen(arr1)-1;//int right = sizeof(arr1)/sizeof(arr1[0]-2  ---- ��ȥ\0���ַ����������һ��\0����ͬʱ���һ���ַ����±�Ӧ���ټ�һ
//	//strlen����\0֮ǰ��Ԫ��
//
//	while(left<=right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right]; 
//		printf("%s\n", arr2);
//		Sleep(1000);//�ٶȱ��� һ��һ��������
//		//�����Ļ
//		system("cls");//systemΪһ���⺯��������ִ��ϵͳ����
//		
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2);
//
//	return 0;
//}



//��д����ʵ�֣�ģ���û���¼�龰������ֻ�ܵ�¼���Σ�ֻ���������������룬������ȷ����ʾ�ɹ���¼��������ξ��������˳�����
#include<string.h>
//����strcmp
//int main()
//{
//	int i = 0;
//	char password[20] = { 0 };
//	//�����������ַ�����abcdef
//	for (i = 0; i < 3; i++)
//	{
//		printf("���������룺>");
//		scanf("%s", password);//����Ҫȡ��ַ���������������ǵ�ַ
//
//		if (strcmp(password,"abcdef")==0)
//			//password == "abcdef"  (�����Ƚ������ַ����Ƿ���ȣ�����ʹ��==����Ӧ����һ���⺯����strcmp
//			//�������ֵΪ0����ʾ�����ַ������
//		{
//			printf("��½�ɹ�\n");
//			break;
//		}
//		else
//		{
//			printf("�������\n");
//		}
//	}
//	if (i == 3)
//	{
//		printf("�����������������˳�����\n");
//	}
//	return 0;
//}