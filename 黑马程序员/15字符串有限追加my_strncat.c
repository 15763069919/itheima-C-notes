#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<time.h>
#include<windows.h>
#include<ctype.h>
#include<conio.h>

void my_strncat(char* dest, char* src, int n)
{
	while (*dest)dest++;
	while ((*dest++ = *src++) && --n);
}

int main15() {
	char dest[100] = "hello";
	char src[] = "world";

	void my_strncat(char* dest, char* src, int n);
	my_strncat(dest, src, 3);

	printf("%s\n", dest);

	return EXIT_SUCCESS;
}