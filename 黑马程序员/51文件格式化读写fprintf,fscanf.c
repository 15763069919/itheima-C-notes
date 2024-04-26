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

//fprintf(文件指针,"内容及占位符",变量);
//
//fscanf(文件指针,"内容及占位符",地址)//读取文件给字符串或变量   eg:fscanf(fp,"%s",p)
//遇到空格换行停止
int main5101()
{
	FILE* fp = fopen("D:/Work/Subject/C/代码/黑马程序员/文件/51文件格式化读写.txt", "r");
	if (!fp)
	{
		printf("文件打开失败\n");
		return -1;
	}
	char* p = (char*)malloc(sizeof(char) * 1024);
	memset(p, 0, 1024);

	fscanf(fp, "%s", p);
	printf("%s", p);

	free(p);
	fclose(fp);

	return EXIT_SUCCESS;
}

int main5102(void)
{
	FILE* fp = fopen("D:/Work/Subject/C/代码/黑马程序员/文件/51(2).txt", "r");
	if (!fp) {
		printf("打开文件错误\n");
		return 0;
	}
	int a, b, sum;
	char c;
	fscanf(fp, "%d%c%d=%d", &a, &c, &b, &sum);
	printf("a=%d,c=%c,b=%d,sum=%d", a, c, b, sum);

	fclose(fp);
	return 0;
}

int main5103(void)
{
	FILE* fp = fopen("D:/Work/Subject/C/代码/黑马程序员/文件/51(2).txt", "w");
	if (!fp) {
		return -1;
	}
	char ch[] = "hello world";
	fprintf(fp, "%s", ch);

	fclose(fp);
}

int main5104(void)
{
	FILE* fp = fopen("D:/Work/Subject/C/代码/黑马程序员/文件/51(2).txt", "r");
	if (!fp) {
		return -1;
	}
	char ch[20];
	fscanf(fp, "%[^\n]", ch);
	printf("%s", ch);

	fclose(fp);
}

int main5105(void)
{
	srand((size_t)time(NULL));
	FILE* fp = fopen("D:/Work/Subject/C/代码/黑马程序员/文件/51(3)四则运算.txt", "w");
	if (!fp) {
		return -1;
	}
	int a, b;
	char c;
	for (int i = 0; i < 100; i++) {
		a = rand() % 10 + 1;
		b = rand() % 10 + 1;
		switch (rand() % 4)
		{
		case 1:c = '+'; break;
		case 2:c = '-'; break;
		case 3:c = '*'; break;
		case 4:c = '/'; break;
		}

		fprintf(fp, "%d%c%d=\n", a, c, b);
	}

	fclose(fp);
}

int main5106(void)
{
	FILE* fp1 = fopen("D:/Work/Subject/C/代码/黑马程序员/文件/51(3)四则运算.txt", "r");
	FILE* fp2 = fopen("D:/Work/Subject/C/代码/黑马程序员/文件/51(3)四则运算结果.txt", "w");
	if (!fp1 || !fp2) {
		printf("打开文件失败\n");
		return -1;
	}
	int a, b, sum;
	char c;
	for (int i = 0; i < 100; i++)
	{
		fscanf(fp1, "%d%c%d=\n", &a, &c, &b);
		switch (c)
		{
		case '+': sum = a + b;
		case '-': sum = a - b;
		case '*': sum = a * b;
		case '/': sum = a / b;
		}
		fprintf(fp2, "%d%c%d=%d\n", a, c, b, sum);
	}

	fclose(fp1);
	fclose(fp2);
}