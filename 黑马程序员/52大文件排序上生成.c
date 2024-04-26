#pragma warning(disable:6387)//使用fgets前应判断指针为空NULL
#pragma warning(disable:6031)//scanf
#pragma warning(disable:6001)//变量初始化
#define _CRT_SECURE_NO_WARNINGS
#define _CRT_SECURE_NO_DEPRECATE
#define _CRT_NONSTDC_NO_DEPRECATE
//D:/Work/Subject/C/代码/黑马程序员/文件/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<time.h>
#include<windows.h>
#include<ctype.h>
#include<conio.h>

int main52()
{
	srand((size_t)time(NULL));
	FILE* fp = fopen("D:/Work/Subject/C/代码/黑马程序员/文件/52.txt", "w");
	if (!fp) {
		return -1;
	}
	for (int i = 0; i < 1000; i++) {
		fprintf(fp, "%d\n", rand() % 256);
	}

	fclose(fp);
	return EXIT_SUCCESS;
}