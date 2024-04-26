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

//fputc(写入的字符,文件指针)

//以写入的方式打开文件,如果文件不存在,则会创建一个新文件,如果文件存在,会清空内容
//和读取一样,光标流会走
//成功返回写入的字符,失败返回-1

int main4701(void)
{
	FILE* fp = fopen("D:/Work/Subject/C/代码/黑马程序员/文件/47a.txt", "w");
	if (!fp)//fp==NULL
	{
		printf("文件打开失败\n");
		return -1;
	}

	char ch = 'a';
	fputc(ch, fp);

	fclose(fp);
	return EXIT_SUCCESS;
}

int main47(void)
{
	FILE* fp = fopen("D:/Work/Subject/C/代码/黑马程序员/文件/47a.txt", "w");
	if (!fp)//fp==NULL
	{
		printf("文件打开失败\n");
		return -1;
	}

	char ch;
	//可像记事本一样写内容
	while (1)
	{
		scanf("%c", &ch);
		if (ch == '@')//遇到@停止
			break;
		fputc(ch, fp);
	}

	fclose(fp);
	return 0;
}