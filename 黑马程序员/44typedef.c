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
//typedefԤ����ʱϵͳ�Զ����滻��ȥ

//1.Ϊ�Ѵ��ڵ��������������
//2.���庯��ָ��

typedef unsigned int ui;
typedef unsigned long long ull;
/*
struct stu
{
	char name[20];
	int age;
	int scores;
	char addr[50];
}ss;//�˴�ssΪ������
*/
typedef struct stu
{
	char name[20];
	int age;
	int scores;
	char addr[50];
}ss;//�˴�ssΪ�ṹ�����,��ͬ��typedef struct stu ss;

int main44()
{
	//int a = 10;
	ui a = 10;
	ull b = 20;

	ss stu;
	printf("%d\n", a);

	return EXIT_SUCCESS;
}