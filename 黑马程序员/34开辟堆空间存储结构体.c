#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<time.h>
#include<windows.h>
#include<ctype.h>
#include<conio.h>

typedef struct student ss;// ��ss���

struct student
{
	//�ṹ���Ա���Ͳ���ͬʱ,��Ҫƫ�ƶ���(�ڴ����)
	char name[21];
	int age;
	char sex;
	int score[3];
	char addr[51];
};
int main34() {
	//printf("%d\n",sizeof(struct student));//sizeof(����)

	ss* p = (ss*)malloc(sizeof(ss) * 3);

	for (int i = 0; i < 3; i++) {
		scanf("%s%d,%c%d%d%d%s",
			p[i].name, &p[i].age, &p[i].sex, &p[i].score[0], &p[i].score[1], &p[i].score[2], p[i].addr);
	}

	for (int i = 0; i < 3; i++) {
		printf("������%s\n", p[i].name);
		printf("���䣺%d\n", p[i].age);
		printf("�Ա�%s\n", p[i].sex == 'M' ? "��" : "Ů");
		printf("�ɼ�1��%d\n", p[i].score[0]);
		printf("�ɼ�2��%d\n", p[i].score[1]);
		printf("�ɼ�3��%d\n", p[i].score[2]);
	}

	free(p);
	return EXIT_SUCCESS;
}