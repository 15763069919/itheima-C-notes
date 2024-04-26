#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<time.h>
#include<windows.h>
#include<ctype.h>
#include<conio.h>
//======================= 值传递,形参不能改变实参 ========================================
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
	strcpy(stu1.name, "卢俊义");//给形参stu1.name赋值
	printf("%s\n", stu1.name);//栈区-->值传递,形参不影响实参的值
}

int main3901() {
	ss stu = { "NULL",50,101,"水泊梁山" };//定义结构体变量stu
	fun01(stu);//调用函数fun01
	printf("%s\n", stu.name);

	return EXIT_SUCCESS;
}