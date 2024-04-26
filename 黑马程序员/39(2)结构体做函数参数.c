#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<time.h>
#include<windows.h>
#include<ctype.h>
#include<conio.h>
//=================== 形参和实参都指向同一个堆区,导致形参可以改变实参 ===================

typedef struct student ss;
struct student
{
	//char name[21];
	char* name;
	int age;
	int scores;
	char addr[51];
};

static void fun01(ss stu1)//stu1=stu
{//堆区-->形参实参指向的同一个堆区,形参会影响实参的值
	//若想使形参不影响实参的值,则可以:
	stu1.name = (char*)malloc(sizeof(char) * 21);

	strcpy(stu1.name, "卢俊义");//给形参stu1.name赋值
	printf("fun01函数打印%s\n", stu1.name);
}

int main3902() {
	struct student stu = { "NULL",50,101,"水泊梁山" };//定义结构体变量stu

	stu.name = (char*)malloc(sizeof(char) * 21);//为变量stu开辟堆空间

	strcpy(stu.name, "宋江");//赋值stu.name

	void fun01(ss stu);//函数声明
	fun01(stu);//调用函数fun01

	printf("main函数打印%s\n", stu.name);
	//stu.name被fun01改变了值,因为形参实参指向的同一个堆区

	return EXIT_SUCCESS;
}