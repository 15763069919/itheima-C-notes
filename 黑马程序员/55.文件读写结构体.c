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

typedef struct student
{
	char name[21];
	int age;
	int score;
	char addr[51];
}stu;//stuΪ����,�Ǳ�����

int main5501()
{
	stu ss[3] =
	{
		{"��ĳ��",9,10,"�ӱ���ɽ"},
		{"��ĳ��",3,1000,"�ӱ�����"},
		{"��ʦ",30,1,"����������"}
	};

	FILE* fp = fopen("D:/Work/Subject/C/����/�������Ա/�ļ�/55.txt", "wb");
	if (!fp)return -1;

	for (int i = 0; i < 3; i++) {
		fwrite(&ss[i], sizeof(stu), 1, fp);
	}

	fclose(fp);

	return EXIT_SUCCESS;
}

int main5502(void)
{
	stu* ss = (stu*)malloc(sizeof(stu) * 3);
	FILE* fp = fopen("D:/Work/Subject/C/����/�������Ա/�ļ�/55.txt", "rb");
	if (!fp)return -1;
	int i = 0;
	while (!feof(fp)) {
		fread(&ss[i], sizeof(stu), 1, fp);
		i++;
	}
	for (i = 0; i < 3; i++) {
		printf("����:%s\n", ss[i].name);
		printf("����:%d\n", ss[i].age);
		printf("�ɼ�:%d\n", ss[i].score);
		printf("��ַ:%s\n", ss[i].addr);
	}

	free(ss);
	fclose(fp);
	return 0;
}