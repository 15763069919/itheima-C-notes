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

//sprintf(字符串地址,"内容及占位符",变量)//变量给字符串  eg:sprintf(p, " %d%c%d = \n", a, c, b);

enum opt//opt四则运算
{
	add, sub, mlt, dive
};

int main5001()
{
	srand((size_t)time(NULL));//添加随机数种子(把系统时间作为随机数种子)
	FILE* fp = fopen("D:/Work/Subject/C/代码/黑马程序员/文件/50四则运算上.txt", "w");
	if (!fp) {
		printf("打开文件错误\n");
		return -1;
	}
	int a, b;
	char c;//+ - * /
	char* p = (char*)malloc(sizeof(char) * 20);

	for (int i = 0; i < 100; i++)
	{
		a = rand() % 10 + 1;//%10为1~9,+1为1~10
		b = rand() % 10 + 1;//%10为1~9,+1为1~10

		switch (rand() % 4)
		{
		case add:c = '+'; break;
		case sub:c = '-'; break;
		case mlt:c = '*'; break;
		case dive:c = '/'; break;
		}
		memset(p, 0, 20);//重置
		sprintf(p, " %d%c%d = \n", a, c, b);//变量给字符串
		fputs(p, fp);//字符串给文件
	}
	free(p);
	fclose(fp);
	p = NULL;
	fp = NULL;

	return EXIT_SUCCESS;
}