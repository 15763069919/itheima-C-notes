#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<time.h>
#include<windows.h>
#include<ctype.h>
#include<conio.h>

struct student
{
	//�ṹ���Ա��Ҫƫ�ƶ���(�ڴ����)
	char name[21];
	int age;
	char sex;
	int score[3];
	char addr[51];
};
int main33() {
	struct student stu[3] =
	{
		{"��ĳ��",22,'M',88,99,0,"�ӱ���ɽ"},
		{"��ĳ��",18,'F',59,59,59,"�ӱ�����"},
		{"��ʦ",30,'M',100,100,100,"����������"}
	};
	printf("�ṹ�������С:%d\n", sizeof(stu));
	printf("�ṹ��Ԫ�ش�С:%d\n", sizeof(stu[0]));
	printf("�ṹ���������:%d\n", sizeof(stu) / sizeof(stu[0]));

	for (int i = 0; i < 3 - 1; i++) {
		for (int j = 0; j < 3 - i - 1; j++) {
			if (stu[j].age < stu[j + 1].age) {
				struct student temp = stu[j];
				stu[j] = stu[j + 1];
				stu[j + 1] = temp;
			}
		}
	}

	for (int i = 0; i < 3; i++) {
		printf("������%s\n", stu[i].name);
		printf("���䣺%d\n", stu[i].age);
		printf("�Ա�%s\n", stu[i].sex == 'M' ? "��" : "Ů");
		printf("�ɼ�1��%d\n", stu[i].score[0]);
		printf("�ɼ�2��%d\n", stu[i].score[1]);
		printf("�ɼ�3��%d\n", stu[i].score[2]);
	}

	return EXIT_SUCCESS;
}