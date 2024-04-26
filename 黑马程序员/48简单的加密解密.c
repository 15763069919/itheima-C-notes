#define _CRT_SECURE_NO_WARNINGS
#define _CRT_SECURE_NO_DEPRECATE
#define _CRT_NONSTDC_NO_DEPRECATE
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<time.h>
#include<windows.h>
#include<ctype.h>
#include<conio.h>

//加密
int main4801()
{
	FILE* fp1 = fopen("D:/Work/Subject/C/代码/黑马程序员/文件/48源文件.txt", "r");
	FILE* fp2 = fopen("D:/Work/Subject/C/代码/黑马程序员/文件/48加密.txt", "w");
	if (!fp1) {
		printf("打开fp1文件失败\n");
		return -1;
	}
	if (!fp2) {
		printf("打开fp2文件失败\n");
		return -1;
	}
	char ch;
	while ((ch = fgetc(fp1)) != EOF)
	{
		ch++;//使用ascll右移一位来加密
		fputc(ch, fp2);
	}

	fclose(fp1);
	fclose(fp2);
	return EXIT_SUCCESS;
}

int main4802(void)
{
	FILE* fp1 = fopen("D:/Work/Subject/C/代码/黑马程序员/文件/48加密.txt", "r");
	FILE* fp2 = fopen("D:/Work/Subject/C/代码/黑马程序员/文件/48解密后文件.txt", "w");
	if (!fp1) {
		printf("打开fp1文件失败\n");
		return -1;
	}
	if (!fp2) {
		printf("打开fp2文件失败\n");
		return -1;
	}

	char ch;
	while ((ch = fgetc(fp1)) != EOF)
	{
		ch--;
		fputc(ch, fp2);
	}
	fclose(fp1);
	fclose(fp2);

	return 0;
}