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

//fputc(д����ַ�,�ļ�ָ��)

//��д��ķ�ʽ���ļ�,����ļ�������,��ᴴ��һ�����ļ�,����ļ�����,���������
//�Ͷ�ȡһ��,���������
//�ɹ�����д����ַ�,ʧ�ܷ���-1

int main4701(void)
{
	FILE* fp = fopen("D:/Work/Subject/C/����/�������Ա/�ļ�/47a.txt", "w");
	if (!fp)//fp==NULL
	{
		printf("�ļ���ʧ��\n");
		return -1;
	}

	char ch = 'a';
	fputc(ch, fp);

	fclose(fp);
	return EXIT_SUCCESS;
}

int main47(void)
{
	FILE* fp = fopen("D:/Work/Subject/C/����/�������Ա/�ļ�/47a.txt", "w");
	if (!fp)//fp==NULL
	{
		printf("�ļ���ʧ��\n");
		return -1;
	}

	char ch;
	//������±�һ��д����
	while (1)
	{
		scanf("%c", &ch);
		if (ch == '@')//����@ֹͣ
			break;
		fputc(ch, fp);
	}

	fclose(fp);
	return 0;
}