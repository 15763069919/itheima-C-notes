#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<time.h>
#include<windows.h>
#include<ctype.h>
#include<conio.h>

//�ṹ���ԱΪָ������
struct student
{
	char* name;
	int age;
	int* scores;
	char* addr;
};
int main3701() {
	struct student stu;

	//stu.name = "����";//����
	stu.name = (char*)malloc(sizeof(char) * 21);
	stu.scores = (int*)malloc(sizeof(int) * 3);
	stu.addr = (char*)malloc(sizeof(char) * 51);
	strcpy(stu.name, "����");
	stu.age = 18;
	stu.scores[0] = 88;
	stu.scores[1] = 99;
	stu.scores[2] = 100;
	strcpy(stu.addr, "������");

	printf("%s\n", stu.name);
	printf("%d\n", stu.age);
	printf("%d\n", stu.scores[0]);
	printf("%d\n", stu.scores[1]);
	printf("%d\n", stu.scores[2]);
	printf("%s\n", stu.addr);

	free(stu.name);
	free(stu.scores);
	free(stu.addr);

	return EXIT_SUCCESS;
}

struct stu
{
	char name[21];
	int age;
	int scores[3];
	char addr[51];
};
int main3702(void)
{
	//�ṹ��ָ��
	struct stu ss = { "�ֳ�",30,100,100,100,"�꾩" };
	struct stu* p = &ss;//��ȡ�ṹ���������ʼ��ַ

	//�ṹ��ָ��->��Ա
	//�ṹ�����.��Ա

	//printf("%s\n", (*p).name);//.�����ȼ�����*,����*p.name==*(p.name),��Ȼerr
	//printf("%d\n", (*p).age);
	printf("%s\n", p->name);
	printf("%d\n", p->age);
	printf("%d\n", p->scores[0]);
	printf("%d\n", p->scores[1]);
	printf("%d\n", p->scores[2]);
	printf("%s\n", p->addr);

	return 0;
}