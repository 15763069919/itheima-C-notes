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
	//�����ṹ�����
	//�ṹ������ �ṹ�����
	struct student stu;
	//stu.name = "����";//err
	strcpy(stu.name, "����");
	stu.age = 18;
	stu.score = 100;
	//stu.addr = "�����в�ƽ������·22��";//err
	strcpy(stu.addr, "�����в�ƽ������·22��");

	printf("������%s\n", stu.name);
	printf("���䣺%d\n", stu.age);
	printf("�ɼ���%d\n", stu.score);
	printf("��ַ��%s\n", stu.addr);

	return EXIT_SUCCESS;
}

int main3302() {
	struct student stu;
	scanf("%s%d%d%s", stu.name, &stu.age, &stu.score, stu.addr);
	printf("������%s\n", stu.name);
	printf("���䣺%d\n", stu.age);
	printf("�ɼ���%d\n", stu.score);
	printf("��ַ��%s\n", stu.addr);
}