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

//fgetc(文件指针)   文件的字符读取
//文件默认结尾为-1(ascll码中无-1),以-1为结束标志(类似字符串的\0)
//在头文件stdio.h中系统定义了#define EOF (-1)//c语言以EOF作为文件结束标志
//或用feof函数判断是否到结尾,到了返回非零,没到返回0
int main4601()
{
	FILE* fp = fopen("D:/Work/Subject/C/代码/黑马程序员/文件/a.txt", "r");
	if (!fp)//fp==NULL
	{
		printf("文件打开失败\n");
		return -1;
	}

	char ch;
	//文件的字符读取,光标流(默认光标)持续向下一个走,所以持续用ch = fgetc(fp);读取的字符不一样
	//不能修改文件指针
	ch = fgetc(fp);
	printf("%c\n", ch);

	ch = fgetc(fp);
	printf("%c\n", ch);

	ch = fgetc(fp);
	printf("%c\n", ch);

	fclose(fp);

	return EXIT_SUCCESS;
}

int main4602(void)
{
	FILE* fp = fopen("D:/Work/Subject/C/代码/黑马程序员/文件/a.txt", "r");
	if (!fp)//fp==NULL
	{
		printf("文件打开失败\n");
		return -1;
	}
	char ch;
	while ((ch = fgetc(fp)) != EOF)
	{
		printf("%c", ch);
	}

	fclose(fp);
	return 0;
}