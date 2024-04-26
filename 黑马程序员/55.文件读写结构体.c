#pragma warning(disable:6387)//使用fgets前应判断指针为空NULL
#pragma warning(disable:6031)//scanf
#pragma warning(disable:6001)//变量初始化
#define _CRT_SECURE_NO_WARNINGS
#define _CRT_SECURE_NO_DEPRECATE
#define _CRT_NONSTDC_NO_DEPRECATE
//D:/Work/Subject/C/代码/黑马程序员/文件/
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
}stu;//stu为别名,非变量名

int main5501()
{
	stu ss[3] =
	{
		{"黄某航",9,10,"河北唐山"},
		{"马某羊",3,1000,"河北邯郸"},
		{"大法师",30,1,"黑龙江大庆"}
	};

	FILE* fp = fopen("D:/Work/Subject/C/代码/黑马程序员/文件/55.txt", "wb");
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
	FILE* fp = fopen("D:/Work/Subject/C/代码/黑马程序员/文件/55.txt", "rb");
	if (!fp)return -1;
	int i = 0;
	while (!feof(fp)) {
		fread(&ss[i], sizeof(stu), 1, fp);
		i++;
	}
	for (i = 0; i < 3; i++) {
		printf("姓名:%s\n", ss[i].name);
		printf("年龄:%d\n", ss[i].age);
		printf("成绩:%d\n", ss[i].score);
		printf("地址:%s\n", ss[i].addr);
	}

	free(ss);
	fclose(fp);
	return 0;
}