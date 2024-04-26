#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<time.h>
#include<windows.h>
#include<ctype.h>
#include<conio.h>

//判断是否为回文字符串，即判断是不是：abcba，abcddcba等此类的字符串
//若是则返回0，不是则返回1
int symm(char* ch, int len)
{
	char* btemp = ch;
	char* ftemp = ch + len - 1;

	while (btemp < ftemp)
	{
		if (*btemp != *ftemp)
			return 1;

		btemp++;
		ftemp--;
	}
	return 0;
}
int main11()
{
	char ch[] = "abcba";

	int symm(char* ch, int len);
	int value = symm(ch, strlen(ch));

	if (!value)//当!value==1时执行，即是回文字符串时执行
		printf("%s是回文字符串。\n", ch);
	else printf("%s不是回文字符串。\n", ch);
	return EXIT_SUCCESS;
}