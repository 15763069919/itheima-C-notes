#pragma warning(disable:6387)//使用fgets前应判断指针为空NULL
#pragma warning(disable:6031)//scanf
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

//fgets(存入地址,字节,文件指针)
//若为从键盘接受,文件指针为stdin

//fputs(字符串地址,文件指针)
//若为输出,文件指针为stdout

int main4901()
{
	FILE* fp = fopen("D:/Work/Subject/C/代码/黑马程序员/文件/49.txt", "r");
	if (!fp)
	{
		printf("打开文件失败");
		return -1;
	}

	char* p = (char*)malloc(sizeof(char) * 100);//实际有效应减一(因为会预留一个\0)
	memset(p, 0, 100);//重置连续内存空间
	fgets(p, 100, fp);//行读取

	printf("%s\n", p);

	free(p);
	fclose(fp);
	return EXIT_SUCCESS;
}

int main4902(void)
{
	FILE* fp = fopen("D:/Work/Subject/C/代码/黑马程序员/文件/49.txt", "r");
	if (!fp)
	{
		printf("打开文件失败");
		return -1;
	}

	char* p = (char*)malloc(sizeof(char) * 100);

	//fgets以\0为结束标志,则使用循环读取不同行的内容
	//用feof函数判断是否到结尾, 到了返回非零, 没到返回0
	while (!feof(fp))//feof(fp)==0
	{
		memset(p, 0, 100);//重置以存放当前行的内容
		fgets(p, 100, fp);//读取

		printf("%s", p);//分行打印
	}

	free(p);
	fclose(fp);

	return 0;
}

int main4903(void)
{
	FILE* fp = fopen("D:/Work/Subject/C/代码/黑马程序员/文件/49.txt", "w");
	if (!fp)
	{
		printf("打开文件失败");
		return -1;
	}
	char ch[] = "你瞅啥\0瞅你咋地";//字符串遇到\0停止,行读写基于字符串

	fputs(ch, fp);//写入

	fclose(fp);
	return 0;
}

int main49(void)
{
	FILE* fp = fopen("D:/Work/Subject/C/代码/黑马程序员/文件/49.txt", "w");
	if (!fp)
	{
		printf("打开文件失败");
		return -1;
	}
	char* p = (char*)malloc(sizeof(char) * 1024);

	while (1)
	{
		memset(p, 0, 100);//重置内存堆区防止字符串污染
		//scanf("%s", p);//\n换行结束

		fgets(p, 100, fp);
		scanf("%[^\n]", p);//接受非空格的字符串内容
		getchar();//吞噬回车

		//停止输入命令comm=exit
		if (!strcmp(p, "comm=exit"))
			break;

		strcat(p, "\n");//字符串追加一个\n
		fputs(p, fp);
	}
	free(p);
	fclose(fp);
	return 0;
}