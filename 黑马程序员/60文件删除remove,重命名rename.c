#pragma warning(disable:6387)//使用fgets前应判断指针为空NULL
#pragma warning(disable:6031)//scanf
#pragma warning(disable:6001)//变量初始化
#define _CRT_SECURE_NO_WARNINGS
#define _CRT_SECURE_NO_DEPRECATE
#define _CRT_NONSTDC_NO_DEPRECATE
//D:/Work/Subject/C/代码/黑马程序员/文件/
#include<stdio.h>//此
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<time.h>
#include<windows.h>
#include<ctype.h>
#include<conio.h>

//remove("文件名")		//删除文件(成功返回0,不成功返回-1)

//rename("旧文件名","新文件名")		//重命名文件(成功返回0,不成功返回-1)
		//可通过修改文件名来修改文件路径.

int main60()
{
	//自写
	char order[10] = { 0 };
	printf("please input the order:\n");
	while (1) {
		scanf("%s", order);
		if (!strcmp(order, "add")) {
			memset(order, 0, 10);
			FILE* fp1 = fopen("D:/Work/Subject/C/代码/黑马程序员/文件/60待删除文件.txt", "w");
			if (!fp1)	return -1;
			else {
				printf("创建文件成功\n");
				fclose(fp1);
			}
		}
		if (!strcmp(order, "remove")) {
			memset(order, 0, 10);
			int value = remove("D:/Work/Subject/C/代码/黑马程序员/文件/60待删除文件.txt");
			if (!value)printf("文件删除成功\n");
			else printf("文件删除失败\n");
		}

		if (!strcmp(order, "comm=exit")) {
			return 0;
		}
	}

	return EXIT_SUCCESS;
}