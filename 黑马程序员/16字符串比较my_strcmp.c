#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<time.h>
#include<windows.h>
#include<ctype.h>
#include<conio.h>

int my_strcmp(const char* s1, const char* s2)
{
	while (*s1 == *s2) {
		if (!*s1)//��*s1=='\0'
			return 0;
		s1++;
		s2++;
	}
	return *s1 > *s2 ? 1 : -1;// ����ĸascll����ͬʱ���ͻ�ȽϺ�һλ���Դ�����
}

int main16() {
	char ch1[] = "hello world";
	char ch2[] = "hello world";

	int my_strcmp(const char* s1, const char* s2);

	printf("ϵͳ������%d\n", strcmp(ch1, ch2));
	printf("my������%d\n", my_strcmp(ch1, ch2));

	return EXIT_SUCCESS;
}