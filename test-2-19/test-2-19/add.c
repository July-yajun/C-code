#define _CRT_SECURE_NO_WARNINGS

//编译+链接——>可执行程序
// 
//全局变量(具有外部链接属性）
//int g_val = 2022;

//static修饰全局变量时，全局变量的外部链接属性变成内部链接属性，其他源文件（.c）不能再使用整个全局变量
//同时改变了其存储位置（放入静态区）
//static int g_val = 2022;




//int Add(int x, int y)
//{
//	return x + y;
//
//}
//函数本来具有外部链接属性，被static修饰时外部链接属性变成内部链接属性，其他源文件（.c）不能再使用
//static int Add(int x, int y)
//{
//	return x + y;
//
//}