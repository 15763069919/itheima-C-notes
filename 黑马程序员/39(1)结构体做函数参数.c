#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<time.h>
#include<windows.h>
#include<ctype.h>
#include<conio.h>
//======================= ֵ����,�ββ��ܸı�ʵ�� ========================================
typedef struct student ss;
struct student
{
	char name[21];
	int age;
	int scores;
	char addr[51];
};

static void fun01(ss stu1)
{
	strcpy(stu1.name, "¬����");//���β�stu1.name��ֵ
	printf("%s\n", stu1.name);//ջ��-->ֵ����,�ββ�Ӱ��ʵ�ε�ֵ
}

int main3901() {
	ss stu = { "NULL",50,101,"ˮ����ɽ" };//����ṹ�����stu
	fun01(stu);//���ú���fun01
	printf("%s\n", stu.name);

	return EXIT_SUCCESS;
}