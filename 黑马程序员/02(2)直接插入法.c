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

int main0202()
{
	int arr[10] = { 1,4,3,5,5,4,2,3,6,5 };
	int src[100] = { 0 };
	for (int i = 0; i < 10; i++)
	{
		int value = 0;
		value = arr[i];
		src[value]++;//将数据的个数放在对应下标里面
	}
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < src[i]; j++) {
			printf("%d ", i);
		}
	}

	return EXIT_SUCCESS;
}