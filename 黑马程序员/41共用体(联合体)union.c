#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<time.h>
#include<windows.h>
#include<ctype.h>
#include<conio.h>
//union����ͬһ�洢�ռ�洢��ͬ�������ݵ�����,
// ��ֻ�ܴ��һ��(���һ������ֵ����Ч, ǰ��ı�����),����������ռ�ڴ泤�Ⱥ����Ա�ĳ��ȱ����й�

union Var
{
	int a;
	float b;
	double c;//��Ϊdoubleռ8�ֽ�,����12����8�ı���,��12>8
	//,�ʴ������������ռ�ڴ泤��Ϊ16�ֽ�(�������double��ռ�ڴ泤��8�ֽڵı���16�ֽ�)
	char d;
	short f[6];//12�ֽ�
};
int main41() {
	union Var var;//���ƽṹ��
	var.a = 100;
	var.b = 3.14;
	printf("%d\n", var.a);
	printf("%f\n", var.b);

	printf("var��С:%lld\n", sizeof(var));//ռ16���ֽ�(���Ա�ĳ��ȵı���)//%lld���⾯��

	printf("var  ��ַ:%p\n", &var);
	printf("var.a��ַ:%p\n", &var.a);
	printf("var.b��ַ:%p\n", &var.b);
	printf("var.c��ַ:%p\n", &var.c);

	return EXIT_SUCCESS;
}