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

//fgetc(�ļ�ָ��)   �ļ����ַ���ȡ
//�ļ�Ĭ�Ͻ�βΪ-1(ascll������-1),��-1Ϊ������־(�����ַ�����\0)
//��ͷ�ļ�stdio.h��ϵͳ������#define EOF (-1)//c������EOF��Ϊ�ļ�������־
//����feof�����ж��Ƿ񵽽�β,���˷��ط���,û������0
int main4601()
{
	FILE* fp = fopen("D:/Work/Subject/C/����/�������Ա/�ļ�/a.txt", "r");
	if (!fp)//fp==NULL
	{
		printf("�ļ���ʧ��\n");
		return -1;
	}

	char ch;
	//�ļ����ַ���ȡ,�����(Ĭ�Ϲ��)��������һ����,���Գ�����ch = fgetc(fp);��ȡ���ַ���һ��
	//�����޸��ļ�ָ��
	ch = fgetc(fp);
	printf("%c\n", ch);

	ch = fgetc(fp);
	printf("%c\n", ch);

	ch = fgetc(fp);
	printf("%c\n", ch);

	fclose(fp);

	return EXIT_SUCCESS;
}

int main4602(void)
{
	FILE* fp = fopen("D:/Work/Subject/C/����/�������Ա/�ļ�/a.txt", "r");
	if (!fp)//fp==NULL
	{
		printf("�ļ���ʧ��\n");
		return -1;
	}
	char ch;
	while ((ch = fgetc(fp)) != EOF)
	{
		printf("%c", ch);
	}

	fclose(fp);
	return 0;
}