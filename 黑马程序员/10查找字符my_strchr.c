#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<time.h>
#include<windows.h>
#include<ctype.h>
#include<conio.h>

//strchr��ch��c������ch�ַ����е�c�ַ������ѴӴ�λ�ÿ�ʼ���ַ������س���
char* my_strchr(const char* s, char c)
{
	while (*s)
	{
		if (*s == c)
			return s;
		s++;
	}
	return NULL;
}
int main10() {
	char ch[] = "hello world";
	char c = 'l';

	char* my_strchr(const char* s, char c);
	char* p = my_strchr(ch, c);
	printf("%s\n", p);
	return EXIT_SUCCESS;
}