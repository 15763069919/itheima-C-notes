#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<time.h>
#include<windows.h>
#include<ctype.h>
#include<conio.h>

//�ж��Ƿ�Ϊ�����ַ��������ж��ǲ��ǣ�abcba��abcddcba�ȴ�����ַ���
//�����򷵻�0�������򷵻�1
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

	if (!value)//��!value==1ʱִ�У����ǻ����ַ���ʱִ��
		printf("%s�ǻ����ַ�����\n", ch);
	else printf("%s���ǻ����ַ�����\n", ch);
	return EXIT_SUCCESS;
}