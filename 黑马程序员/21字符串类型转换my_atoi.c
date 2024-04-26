#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>//在此头文件中
#include<string.h>
#include<math.h>
#include<time.h>
#include<windows.h>
#include<ctype.h>
#include<conio.h>
//atoi函数为字符串类型转换函数
//其使用时忽略前面的空格，从+-号开始，到非十进制数字结束
// （即使非十进制数字后有数字，仍结束）
int main2101() {
	char ch[] = "    - 123456abc123";

	int i = atoi(ch);
	printf("%d\n", i);

	return EXIT_SUCCESS;
}

int main2102() {
	char ch[] = "    -123.456 -456abc123";

	double i = atof(ch);
	printf("%.2f\n", i);

	return EXIT_SUCCESS;
}

int main2103() {
	char ch[] = "    -123.456 -456abc123";

	long i = atol(ch);
	printf("%ld\n", i);//此处为"."导致输出停止

	return EXIT_SUCCESS;
}