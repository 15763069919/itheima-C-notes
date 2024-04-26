#define _CRT_SECURE_NO_WARNINGS
#define _CRT_SECURE_NO_DEPRECATE
#define _CRT_NONSTDC_NO_DEPRECATE
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<time.h>
#include<windows.h>
#include<ctype.h>
#include<conio.h>
//typedef预处理时系统自动给替换过去

//1.为已存在的数据类型起别名
//2.定义函数指针

typedef unsigned int ui;
typedef unsigned long long ull;
/*
struct stu
{
	char name[20];
	int age;
	int scores;
	char addr[50];
}ss;//此处ss为变量名
*/
typedef struct stu
{
	char name[20];
	int age;
	int scores;
	char addr[50];
}ss;//此处ss为结构体别名,等同于typedef struct stu ss;

int main44()
{
	//int a = 10;
	ui a = 10;
	ull b = 20;

	ss stu;
	printf("%d\n", a);

	return EXIT_SUCCESS;
}