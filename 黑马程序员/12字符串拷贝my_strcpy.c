#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<time.h>
#include<windows.h>
#include<ctype.h>
#include<conio.h>
void my_strcpy(char* dest, const char* src)//°Ñsrc¿½±´µ½dest
{
	while (*dest++ = *src++);
}

int main12() {
	char ch[] = "hello world";
	char str[100];

	void my_strcpy(char* dest, char* src);
	my_strcpy(str, ch);

	printf("str¿½±´ºó£º%s\n", str);
	return EXIT_SUCCESS;
}