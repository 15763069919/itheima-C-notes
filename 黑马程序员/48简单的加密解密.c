#define _CRT_SECURE_NO_WARNINGS
#define _CRT_SECURE_NO_DEPRECATE
#define _CRT_NONSTDC_NO_DEPRECATE
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<time.h>
#include<windows.h>
#include<ctype.h>
#include<conio.h>

//����
int main4801()
{
	FILE* fp1 = fopen("D:/Work/Subject/C/����/�������Ա/�ļ�/48Դ�ļ�.txt", "r");
	FILE* fp2 = fopen("D:/Work/Subject/C/����/�������Ա/�ļ�/48����.txt", "w");
	if (!fp1) {
		printf("��fp1�ļ�ʧ��\n");
		return -1;
	}
	if (!fp2) {
		printf("��fp2�ļ�ʧ��\n");
		return -1;
	}
	char ch;
	while ((ch = fgetc(fp1)) != EOF)
	{
		ch++;//ʹ��ascll����һλ������
		fputc(ch, fp2);
	}

	fclose(fp1);
	fclose(fp2);
	return EXIT_SUCCESS;
}

int main4802(void)
{
	FILE* fp1 = fopen("D:/Work/Subject/C/����/�������Ա/�ļ�/48����.txt", "r");
	FILE* fp2 = fopen("D:/Work/Subject/C/����/�������Ա/�ļ�/48���ܺ��ļ�.txt", "w");
	if (!fp1) {
		printf("��fp1�ļ�ʧ��\n");
		return -1;
	}
	if (!fp2) {
		printf("��fp2�ļ�ʧ��\n");
		return -1;
	}

	char ch;
	while ((ch = fgetc(fp1)) != EOF)
	{
		ch--;
		fputc(ch, fp2);
	}
	fclose(fp1);
	fclose(fp2);

	return 0;
}