#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>//在此
#include<string.h>
#include<math.h>
#include<time.h>
#include<windows.h>
#include<ctype.h>
#include<conio.h>
//malloc（大小）开辟堆空间，成功返回起始地址(void*)，可强制类型转换。失败返回NULL
int main2701()
{
	//栈区大小
	//int arr[8200000/3] = { 0 };

	//开辟堆空间存储数据
	int* p = (int*)malloc(sizeof(int));//开辟堆空间malloc（大小）
	//所示写法为存储1240个整形的空间，==malloc（4*1240）
	//（int*）为强制类型转换
	printf("%p\n", p);

	//使用堆空间
	*p = 123;
	printf("%d\n", *p);

	// 释放堆空间
	free(p);
	p = NULL;
	//p野指针
	printf("%p\n", p);
	*p = 456;
	printf("%d\n", *p);

	return EXIT_SUCCESS;
}

int main2702(void)
{
	int* p = (int*)malloc(sizeof(int) * 8200000 * 300);
	printf("%p\n", p);

	if (!p) {
		printf("程序异常\n");
		return -1;
	}

	free(p);
	return 0;
}