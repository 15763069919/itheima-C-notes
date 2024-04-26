#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<time.h>
#include<windows.h>
#include<ctype.h>
#include<conio.h>
//eg:五名学生，三门课程
int main32() {
	//开辟二级指针对应的堆空间
	//~~int arr[5][3]
	int** p = (int**)malloc(sizeof(int*) * 5);//开辟五个空间（五名学生）以存放地址

	//开辟一级指针对应的堆空间
	for (int i = 0; i < 5; i++)
	{
		p[i] = (int*)malloc(sizeof(int) * 3);//开辟三个空间（课程）以存放数据（成绩）
	}

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 3; j++) {
			scanf("%d", &p[i][j]);
		}
	}
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 3; j++) {
			printf("%d ", p[i][j]);
		}
		puts("");
	}

	//释放堆空间（从内到外）
	for (int i = 0; i < 5; i++) {
		free(p[i]);//释放一级指针开辟的空间
	}
	free(p);//释放二级指针开辟的空间

	return EXIT_SUCCESS;
}