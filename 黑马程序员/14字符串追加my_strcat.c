#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<time.h>
#include<windows.h>
#include<ctype.h>
#include<conio.h>

void my_strcat(char* dest, char* src)
{   //�ҵ��ַ���\0λ��
	while (*dest) dest++;//while(*dest++)ָ����\0����һλ
	//�ַ�������
	while (*dest++ = *src++);
}
int main14() {
	char dest[100] = "hello";
	char src[] = "world";

	void my_strcat(char* dest, char* src);
	my_strcat(dest, src);

	printf("%s\n", dest);

	return EXIT_SUCCESS;
}