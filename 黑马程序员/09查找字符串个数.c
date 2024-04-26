#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<time.h>
#include<windows.h>
#include<ctype.h>
#include<conio.h>

int main09() {
	char src[] = "11abc122552abcd5544abc1222abcqqq";
	char dest[] = "abc";
	int count = 0;
	extern char* my_strstr(char* src, char* dest);//调用08文件中的查找字符串
	char* p = my_strstr(src, dest);
	while (p != NULL) {//p不为NULL时，循环查找字符串位置
		count++;
		p += strlen(dest);//查找完一次后更新字符串起始位置（即跳过已查找到的dest字符串）
		p = my_strstr(p, dest);//继续查找
	}
	printf("字符串出现次数:%d\n", count);

	return EXIT_SUCCESS;
}