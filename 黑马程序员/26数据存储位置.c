#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<time.h>
#include<windows.h>
#include<ctype.h>
#include<conio.h>

//未初始化全局变量
int  a1;
//初始化全局变量
int b1;
//未初始化全局静态变量
static int c1 = 1;
//未初始化全局静态变量
static int d1 = 10;

int main26()
{
	//安全的常量，存储区域为数据区中的常量区
	static int abc = 123;

	int e1 = 10;
	//未初始化的局部变量
	static int f1;
	//初始化的局部变量
	static h1 = 10;

	//字符串常量
	char* p = "hello world";
	//数组
	int arr[] = { 1,2,3,4 };
	//指针
	int pp = arr;

	printf("未初始化全局变量:%p\n", &a1);
	printf("初始化全局变量:%p\n", &b1);
	printf("未初始化静态全局变量:%p\n", &c1);
	printf("初始化静态全局变量:%p\n", &d1);

	printf("局部变量:%p\n", &e1);

	printf("未初始化的局部变量:%p\n", &f1);
	printf("初始化的局部变量:%p\n", &h1);

	printf("字符串常量:%p\n", p);
	printf("数组:%p\n", arr);
	printf("指针:%p\n", pp);
	printf("指针地址:%p\n", &pp);

	return EXIT_SUCCESS;
}