#define _CRT_SECURE_NO_WARNINGS
#define _CRT_SECURE_NO_DEPRECATE
#define _CRT_NONSTDC_NO_DEPRECATE
/*
D:/Work/Subject/C/����/�������Ա/�ļ�/
D:/Work/Subject/C/����/����ͨ/�ļ�/
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<time.h>
#include<Windows.h>
#include<ctype.h>
#include<conio.h>

int main63()
{
	int i = 0;
	char* temp = (char*)malloc(sizeof(char) * 1024);
	char** aa = (char**)malloc(sizeof(char*) * 6);
	FILE* fp = fopen("D:/Work/C/����/�̻�/�̻�/text.txt", "r");//��ȡ�ļ�ָ��
	while (!feof(fp))
	{
		memset(temp, 0, 1024);
		fgets(temp, 1024, fp);
		aa[i] = (char*)malloc(sizeof(char) * strlen(temp) + 1);
		memset(aa[i], 0, strlen(temp) + 1);
		strcpy(aa[i], temp);
		i++;
	}
	for (int i = 0; i < 6; i++)
	{
		printf("%s", aa[i]);
	}

	return EXIT_SUCCESS;
}