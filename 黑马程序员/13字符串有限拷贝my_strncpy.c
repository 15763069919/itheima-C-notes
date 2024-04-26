#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<time.h>
#include<windows.h>
#include<ctype.h>
#include<conio.h>

//字符串有限拷贝不会自动添加\0，故应初始化str[100]={0}

void my_strncpy(char* dest, char* src, size_t n)
{
	while ((*dest++ = *src++) && --n);//循环n次，直到n==0结束循环
}//先执行后循环，&&左右都是条件，所以先进行前面的条件运算，
//当后面为0时停止，但前面作为条件已经运算了
int main13() {
	char ch[] = "hello world";
	char str[100] = { 0 };

	void my_strncpy(char* dest, char* src, size_t n);
	my_strncpy(str, ch, 2);

	printf("有限拷贝后：%s\n", str);

	return EXIT_SUCCESS;
}