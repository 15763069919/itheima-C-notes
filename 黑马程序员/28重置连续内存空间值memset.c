#include<stdio.h>
#include<stdlib.h>
#define _CRT_SECURE_NO_WARNINGS
#include<math.h>
#include<string.h>//此
#include<time.h>
#include<windows.h>
#include<ctype.h>
#include<conio.h>
//memset（目标，具体值，字节),,,,,字节=sizeof(类型)*数量	   // 重置一块连续内存空间的值，避免使用循环重置值
//可用于数组和字符数组等，字符串不可用，因为无\0
int main28() {
	int* p = (int*)malloc(sizeof(int) * 10);

	memset(p, 0, 40);

	for (int i = 0; i < 10; i++) {
		printf("%d\n", p[i]);
	}

	return EXIT_SUCCESS;
}