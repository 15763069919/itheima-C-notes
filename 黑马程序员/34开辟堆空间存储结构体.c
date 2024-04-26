#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<time.h>
#include<windows.h>
#include<ctype.h>
#include<conio.h>

typedef struct student ss;// 用ss替代

struct student
{
	//结构体成员类型不相同时,需要偏移对齐(内存对齐)
	char name[21];
	int age;
	char sex;
	int score[3];
	char addr[51];
};
int main34() {
	//printf("%d\n",sizeof(struct student));//sizeof(类型)

	ss* p = (ss*)malloc(sizeof(ss) * 3);

	for (int i = 0; i < 3; i++) {
		scanf("%s%d,%c%d%d%d%s",
			p[i].name, &p[i].age, &p[i].sex, &p[i].score[0], &p[i].score[1], &p[i].score[2], p[i].addr);
	}

	for (int i = 0; i < 3; i++) {
		printf("姓名：%s\n", p[i].name);
		printf("年龄：%d\n", p[i].age);
		printf("性别：%s\n", p[i].sex == 'M' ? "男" : "女");
		printf("成绩1：%d\n", p[i].score[0]);
		printf("成绩2：%d\n", p[i].score[1]);
		printf("成绩3：%d\n", p[i].score[2]);
	}

	free(p);
	return EXIT_SUCCESS;
}