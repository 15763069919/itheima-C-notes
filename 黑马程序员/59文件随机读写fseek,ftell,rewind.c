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

/*fseek(文件指针, 偏移量offset, whence)		//改变光标位置

		offset:
			数字字母一字节,汉字两字节,换行隐藏的\r\n也应算进去(区分文件的结尾-1)
			fopne("...","a")中a为追加的方式,fseek失效

		whence:
			SEEK_SET 从文件开头移动offset个字节	0
			SEEK_CUR 从当前位置移动offset个字节	1		(current)
			SEEK_END 从文件末尾移动offset个字节	2

ftell(文件指针)		//获取光标位置返回long类型

rewind(文件指针)		//把光标移动到文件开头

	*/
int main5901()
{
	FILE* fp = fopen("D:/Work/Subject/C/代码/黑马程序员/文件/58.txt", "r");
	if (!fp)return -1;

	char arr[100];

	memset(arr, 0, 100);
	fgets(arr, 100, fp);
	printf("%s", arr);

	memset(arr, 0, 100);
	fgets(arr, 100, fp);
	printf("%s", arr);

	fseek(fp, -8, SEEK_CUR);

	memset(arr, 0, 100);
	fgets(arr, 100, fp);
	printf("%s", arr);
	fclose(fp);

	return EXIT_SUCCESS;
}

int main5902(void)
{
	FILE* fp = fopen("D:/Work/Subject/C/代码/黑马程序员/文件/58.txt", "r+");
	//a 为追加的方式,fseek失效,应该用r+
	if (!fp)return -1;

	long pos = ftell(fp);
	printf("%ld\n", pos);

	fseek(fp, -17, SEEK_END);
	//fputs("瞅你咋地", fp);

	pos = ftell(fp);
	printf("%ld\n", pos);

	fclose(fp);
	return 0;
}

int main5903(void)
{
	FILE* fp = fopen("D:/Work/Subject/C/代码/黑马程序员/文件/58(2).txt", "w");
	if (!fp)return -1;

	char ch1[] = "hello 哈哈哈\n";
	char ch2[] = "world";

	fputs(ch1, fp);
	fseek(fp, -14, SEEK_CUR);//移动光标
	fputs(ch2, fp);

	fclose(fp);
	return 0;
}

int main5904(void)
{
	FILE* fp = fopen("D:/Work/Subject/C/代码/黑马程序员/文件/58.txt", "r");
	if (!fp)return -1;

	char arr[100];
	//获取文件光标流所在位置
	long pos = ftell(fp);
	printf("%ld\n", pos);

	fgets(arr, 100, fp);
	fseek(fp, 8, SEEK_CUR);
	pos = ftell(fp);
	printf("%ld\n", pos);

	//重置文件光标至起始位置
	rewind(fp);//feek(fp,0,SEEK_SET)
	memset(arr, 0, 100);
	fgets(arr, 100, fp);
	printf("%s\n", arr);

	return 0;
}