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
int main36() {
	struct student stu = { "������",26,60,"����" };

	struct student s1 = stu;

	//�����ǳ����(û��)
	strcpy(s1.name, "�ʷ���");
	s1.age = 28;
	s1.score = 80;
	printf("%s\n", stu.name);
	printf("%d\n", stu.age);
	printf("%d\n", stu.score);

	return EXIT_SUCCESS;
}