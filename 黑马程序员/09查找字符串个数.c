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
	extern char* my_strstr(char* src, char* dest);//����08�ļ��еĲ����ַ���
	char* p = my_strstr(src, dest);
	while (p != NULL) {//p��ΪNULLʱ��ѭ�������ַ���λ��
		count++;
		p += strlen(dest);//������һ�κ�����ַ�����ʼλ�ã��������Ѳ��ҵ���dest�ַ�����
		p = my_strstr(p, dest);//��������
	}
	printf("�ַ������ִ���:%d\n", count);

	return EXIT_SUCCESS;
}