#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<time.h>
#include<windows.h>
#include<ctype.h>
#include<conio.h>
//=================== �βκ�ʵ�ζ�ָ��ͬһ������,�����βο��Ըı�ʵ�� ===================

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
{//����-->�β�ʵ��ָ���ͬһ������,�βλ�Ӱ��ʵ�ε�ֵ
	//����ʹ�ββ�Ӱ��ʵ�ε�ֵ,�����:
	stu1.name = (char*)malloc(sizeof(char) * 21);

	strcpy(stu1.name, "¬����");//���β�stu1.name��ֵ
	printf("fun01������ӡ%s\n", stu1.name);
}

int main3902() {
	struct student stu = { "NULL",50,101,"ˮ����ɽ" };//����ṹ�����stu

	stu.name = (char*)malloc(sizeof(char) * 21);//Ϊ����stu���ٶѿռ�

	strcpy(stu.name, "�ν�");//��ֵstu.name

	void fun01(ss stu);//��������
	fun01(stu);//���ú���fun01

	printf("main������ӡ%s\n", stu.name);
	//stu.name��fun01�ı���ֵ,��Ϊ�β�ʵ��ָ���ͬһ������

	return EXIT_SUCCESS;
}