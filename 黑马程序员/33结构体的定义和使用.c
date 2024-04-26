#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<time.h>
#include<windows.h>
#include<ctype.h>
#include<conio.h>

struct student
{
	char name[21];
	int age;
	int score;
	char addr[51];
};

int main3301() {
	//创建结构体变量
	//结构体类型 结构体变量
	struct student stu;
	//stu.name = "张三";//err
	strcpy(stu.name, "张三");
	stu.age = 18;
	stu.score = 100;
	//stu.addr = "北京市昌平区北清路22号";//err
	strcpy(stu.addr, "北京市昌平区北清路22号");

	printf("姓名：%s\n", stu.name);
	printf("年龄：%d\n", stu.age);
	printf("成绩：%d\n", stu.score);
	printf("地址：%s\n", stu.addr);

	return EXIT_SUCCESS;
}

int main3302() {
	struct student stu;
	scanf("%s%d%d%s", stu.name, &stu.age, &stu.score, stu.addr);
	printf("姓名：%s\n", stu.name);
	printf("年龄：%d\n", stu.age);
	printf("成绩：%d\n", stu.score);
	printf("地址：%s\n", stu.addr);
}