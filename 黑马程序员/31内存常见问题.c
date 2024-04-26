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
	//数组下标越界
	char ch[11] = "hello world";

	//堆区越界
	char* p = (char*)malloc(sizeof(char) * 11);
	strcpy(p, "hello world");

	printf("%s\n", p);
	//导致释放多余空间时也出现问题，系统自动内存梳理，故报错无响应
	free(p);

	return EXIT_SUCCESS;
}

//======================================================================================
int main3102(void) {
	//int* p = (int*)malloc(0);//p野指针

	//开辟空间和类型对应
	int* p = (int*)malloc(10);//开辟10/4=2.5两个半int的内存空间时，用两个可以，用三个越界
	printf("%p\n", p);
	*p = 100;
	printf("%d\n", *p);

	free(p);//开辟堆空间和使用堆空间不一致时，可能会导致释放时报错（内存问题会重新梳理内存）

	return 0;
}

//======================================================================================
int main3103(void) {
	int* p = (int*)malloc(10);

	free(p);//释放p开辟的内存空间

	//堆空间不允许多次释放
	//free(p);//释放野指针，报错

	//空指针允许释放
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
		*p = i;//指针叠加不断改变指针方向 释放会出错
	}

	free(p);

	return 0;
}
//======================================================================================
void fun08(int* p)
{
	p = (int*)malloc(sizeof(int) * 10);
	printf("值传递的形参：%p\n", p);
}

void fun09(int** p)
{
	*p = (int*)malloc(sizeof(int) * 10);
	printf("地址传递的形参：%p\n", *p);
}

int* fun10() {
	int* p = (int*)malloc(sizeof(int) * 10);
	printf("用return的形参：%p\n", p);

	return p;
}
int main3105(void)
{
	int* p = NULL;

	//fun08(p);//依然是值传递，形参试图改变实参的值，应该用二级指针
	//fun09(&p);//地址传递
	p = fun10();

	printf("实参：%p\n", p);

	for (int i = 0; i < 10; i++) {
		p[i] = i;
	}
	return 0;
}