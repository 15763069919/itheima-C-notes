#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<time.h>
#include<windows.h>
#include<ctype.h>
#include<conio.h>
//======================================================================================
int main3101() {
	//�����±�Խ��
	char ch[11] = "hello world";

	//����Խ��
	char* p = (char*)malloc(sizeof(char) * 11);
	strcpy(p, "hello world");

	printf("%s\n", p);
	//�����ͷŶ���ռ�ʱҲ�������⣬ϵͳ�Զ��ڴ������ʱ�������Ӧ
	free(p);

	return EXIT_SUCCESS;
}

//======================================================================================
int main3102(void) {
	//int* p = (int*)malloc(0);//pҰָ��

	//���ٿռ�����Ͷ�Ӧ
	int* p = (int*)malloc(10);//����10/4=2.5������int���ڴ�ռ�ʱ�����������ԣ�������Խ��
	printf("%p\n", p);
	*p = 100;
	printf("%d\n", *p);

	free(p);//���ٶѿռ��ʹ�öѿռ䲻һ��ʱ�����ܻᵼ���ͷ�ʱ�����ڴ���������������ڴ棩

	return 0;
}

//======================================================================================
int main3103(void) {
	int* p = (int*)malloc(10);

	free(p);//�ͷ�p���ٵ��ڴ�ռ�

	//�ѿռ䲻�������ͷ�
	//free(p);//�ͷ�Ұָ�룬����

	//��ָ�������ͷ�
	p = NULL;
	free(p);
	free(p);
	free(p);
	free(p);
	free(p);
	free(p);
	free(p);
	free(p);
	free(p);
	free(p);
	free(p);

	return 0;
}

//======================================================================================

int main3104(void) {
	int* p = (int*)malloc(10);

	for (int i = 0; i < 10; i++) {
		*p = i;//ָ����Ӳ��ϸı�ָ�뷽�� �ͷŻ����
	}

	free(p);

	return 0;
}
//======================================================================================
void fun08(int* p)
{
	p = (int*)malloc(sizeof(int) * 10);
	printf("ֵ���ݵ��βΣ�%p\n", p);
}

void fun09(int** p)
{
	*p = (int*)malloc(sizeof(int) * 10);
	printf("��ַ���ݵ��βΣ�%p\n", *p);
}

int* fun10() {
	int* p = (int*)malloc(sizeof(int) * 10);
	printf("��return���βΣ�%p\n", p);

	return p;
}
int main3105(void)
{
	int* p = NULL;

	//fun08(p);//��Ȼ��ֵ���ݣ��β���ͼ�ı�ʵ�ε�ֵ��Ӧ���ö���ָ��
	//fun09(&p);//��ַ����
	p = fun10();

	printf("ʵ�Σ�%p\n", p);

	for (int i = 0; i < 10; i++) {
		p[i] = i;
	}
	return 0;
}