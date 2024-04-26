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

//fwrite(数据地址,单个大小,数量,文件指针)		eg:fwrite(&a, sizeof(int), 1, fp);
	//可以把一个具体的值写入文件中
//fread(数据地址,单个大小,数量,文件指针)			eg:fread(&value, sizeof(int), 1, fp);
	//可以把文件中的值读取出来为一个变量

int main5401()
{
	FILE* fp = fopen("D:/Work/Subject/C/代码/黑马程序员/文件/54.txt", "wb");
	if (!fp) {
		printf("打开文件错误\n");
		return -1;
	}
	//int a = 5678;
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	//fwrite(&a, sizeof(int), 1, fp);
	fwrite(&arr, sizeof(int), 10, fp);

	fclose(fp);
	return EXIT_SUCCESS;
}
int main5402(void)
{
	FILE* fp = fopen("D:/Work/Subject/C/代码/黑马程序员/文件/54.txt", "rb");
	if (!fp) {
		printf("打开文件错误\n");
		return -1;
	}
	//int value;
	//fread(&value, sizeof(int), 1, fp);
	//printf("%d", value);

	int arr[10] = { 0 };
	fread(arr, sizeof(int), 10, fp);
	for (int i = 0; i < 10; i++) {
		printf("%d\n", arr[i]);
	}

	fclose(fp);
}