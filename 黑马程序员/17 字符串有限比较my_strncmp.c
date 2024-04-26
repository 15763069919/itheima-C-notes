#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<time.h>
#include<windows.h>
#include<ctype.h>
#include<conio.h>

int my_strncmp(const char* s1, const char* s2, size_t n)
{
	for (size_t i = 0; i < n && s1[i] && s2[i]; i++)
	{//&&s1[i] &&s2[i]判断n是否大于字符串长度，超出则不进行比对
		if (s1[i] != s2[i]) {
			return s1[i] > s2[i] ? 1 : -1;
		}
	}
	return 0;
}

int main17() {
	char ch1[] = "hello world";
	char ch2[] = "helao world";

	int my_strncmp(char* s1, char* s2, size_t n);

	printf("%d\n", my_strncmp(ch1, ch2, 4));

	if (!strncmp)
	{
		printf("相同\n");
	}
	else printf("不相同\n");

	return EXIT_SUCCESS;
}