#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<time.h>
#include<windows.h>
#include<ctype.h>
#include<conio.h>

//δ��ʼ��ȫ�ֱ���
int  a1;
//��ʼ��ȫ�ֱ���
int b1;
//δ��ʼ��ȫ�־�̬����
static int c1 = 1;
//δ��ʼ��ȫ�־�̬����
static int d1 = 10;

int main26()
{
	//��ȫ�ĳ������洢����Ϊ�������еĳ�����
	static int abc = 123;

	int e1 = 10;
	//δ��ʼ���ľֲ�����
	static int f1;
	//��ʼ���ľֲ�����
	static h1 = 10;

	//�ַ�������
	char* p = "hello world";
	//����
	int arr[] = { 1,2,3,4 };
	//ָ��
	int pp = arr;

	printf("δ��ʼ��ȫ�ֱ���:%p\n", &a1);
	printf("��ʼ��ȫ�ֱ���:%p\n", &b1);
	printf("δ��ʼ����̬ȫ�ֱ���:%p\n", &c1);
	printf("��ʼ����̬ȫ�ֱ���:%p\n", &d1);

	printf("�ֲ�����:%p\n", &e1);

	printf("δ��ʼ���ľֲ�����:%p\n", &f1);
	printf("��ʼ���ľֲ�����:%p\n", &h1);

	printf("�ַ�������:%p\n", p);
	printf("����:%p\n", arr);
	printf("ָ��:%p\n", pp);
	printf("ָ���ַ:%p\n", &pp);

	return EXIT_SUCCESS;
}