#pragma warning(disable:6387)//ʹ��fgetsǰӦ�ж�ָ��Ϊ��NULL
#pragma warning(disable:6031)//scanf
#pragma warning(disable:6001)//������ʼ��
#define _CRT_SECURE_NO_WARNINGS
#define _CRT_SECURE_NO_DEPRECATE
#define _CRT_NONSTDC_NO_DEPRECATE
//D:/Work/Subject/C/����/�������Ա/�ļ�/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<time.h>
#include<windows.h>
#include<ctype.h>
#include<conio.h>

//fprintf(�ļ�ָ��,"���ݼ�ռλ��",����);
//
//fscanf(�ļ�ָ��,"���ݼ�ռλ��",��ַ)//��ȡ�ļ����ַ��������   eg:fscanf(fp,"%s",p)
//�����ո���ֹͣ
int main5101()
{
	FILE* fp = fopen("D:/Work/Subject/C/����/�������Ա/�ļ�/51�ļ���ʽ����д.txt", "r");
	if (!fp)
	{
		printf("�ļ���ʧ��\n");
		return -1;
	}
	char* p = (char*)malloc(sizeof(char) * 1024);
	memset(p, 0, 1024);

	fscanf(fp, "%s", p);
	printf("%s", p);

	free(p);
	fclose(fp);

	return EXIT_SUCCESS;
}

int main5102(void)
{
	FILE* fp = fopen("D:/Work/Subject/C/����/�������Ա/�ļ�/51(2).txt", "r");
	if (!fp) {
		printf("���ļ�����\n");
		return 0;
	}
	int a, b, sum;
	char c;
	fscanf(fp, "%d%c%d=%d", &a, &c, &b, &sum);
	printf("a=%d,c=%c,b=%d,sum=%d", a, c, b, sum);

	fclose(fp);
	return 0;
}

int main5103(void)
{
	FILE* fp = fopen("D:/Work/Subject/C/����/�������Ա/�ļ�/51(2).txt", "w");
	if (!fp) {
		return -1;
	}
	char ch[] = "hello world";
	fprintf(fp, "%s", ch);

	fclose(fp);
}

int main5104(void)
{
	FILE* fp = fopen("D:/Work/Subject/C/����/�������Ա/�ļ�/51(2).txt", "r");
	if (!fp) {
		return -1;
	}
	char ch[20];
	fscanf(fp, "%[^\n]", ch);
	printf("%s", ch);

	fclose(fp);
}

int main5105(void)
{
	srand((size_t)time(NULL));
	FILE* fp = fopen("D:/Work/Subject/C/����/�������Ա/�ļ�/51(3)��������.txt", "w");
	if (!fp) {
		return -1;
	}
	int a, b;
	char c;
	for (int i = 0; i < 100; i++) {
		a = rand() % 10 + 1;
		b = rand() % 10 + 1;
		switch (rand() % 4)
		{
		case 1:c = '+'; break;
		case 2:c = '-'; break;
		case 3:c = '*'; break;
		case 4:c = '/'; break;
		}

		fprintf(fp, "%d%c%d=\n", a, c, b);
	}

	fclose(fp);
}

int main5106(void)
{
	FILE* fp1 = fopen("D:/Work/Subject/C/����/�������Ա/�ļ�/51(3)��������.txt", "r");
	FILE* fp2 = fopen("D:/Work/Subject/C/����/�������Ա/�ļ�/51(3)����������.txt", "w");
	if (!fp1 || !fp2) {
		printf("���ļ�ʧ��\n");
		return -1;
	}
	int a, b, sum;
	char c;
	for (int i = 0; i < 100; i++)
	{
		fscanf(fp1, "%d%c%d=\n", &a, &c, &b);
		switch (c)
		{
		case '+': sum = a + b;
		case '-': sum = a - b;
		case '*': sum = a * b;
		case '/': sum = a / b;
		}
		fprintf(fp2, "%d%c%d=%d\n", a, c, b, sum);
	}

	fclose(fp1);
	fclose(fp2);
}