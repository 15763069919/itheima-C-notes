#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<time.h>
#include<windows.h>
#include<ctype.h>
#include<conio.h>

//字符串逆置~~数组逆置
//法一：数组样式
void inverse1(char* ch, int len)
{
	int i = 0;
	int j = len - 1;
	while (i < j) {
		char temp = ch[i];
		ch[i] = ch[j];
		ch[j] = temp;

		i++;
		j--;
	}
	return 0;
}

//法二：指针法（使用双指针ftemp，btemp）
void inverse2(char* ch, int len) {
	char* btemp = ch;
	char* ftemp = ch + len - 1;

	while (btemp < ftemp) {
		char temp = *btemp;
		*btemp = *ftemp;
		*ftemp = temp;

		btemp++;
		ftemp--;
	}
}

int main19() {
	char ch[] = "hello world";
	printf("逆置前：%s\n", ch);
	void inverse2(char* ch, int len);
	inverse2(ch, strlen(ch));
	printf("逆置后：%s\n", ch);

	return EXIT_SUCCESS;
}