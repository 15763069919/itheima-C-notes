#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<time.h>
#include<windows.h>
#include<ctype.h>
#include<conio.h>
//=========================== ��ַ����,�ṹ��ָ����Ϊ�������� ========================================

typedef struct student ss;
struct student
{
	char name[21];
	int age;
	int scores;
	char addr[51];
};

void fun02(ss* p)
{
	strcpy(p->name, "����ʤ");
	printf("fun02������ӡ%s\n", p->name);
}
int main3903(void) {
	ss stu = { "����",50,101,"ˮ����ɽ" };//����ṹ�����stu

	fun02(&stu);
	printf("main������ӡ%s\n", stu.name);//��ַ�����β��ܸı�ʵ�ε�ֵ

	return 0;
}
//=========================== �ṹ��������Ϊ�������� ========================================

static void BubbleSort(ss* stu, int len)
{
	//printf("%d\n",sizeof(stu));
	// //������Ϊ���������˻�Ϊָ��,��ʧԪ�ؾ���,��Ҫ����Ԫ�ظ���

	for (int i = 0; i < len - 1; i++) {
		for (int j = 0; j < len - i - 1; j++) {
			//if(stu[j].age>stu[j+1].age)
			if ((stu + j)->age > (stu + j + 1)->age)
			{
				ss temp = stu[j];
				stu[j] = stu[j + 1];
				stu[j + 1] = temp;
			}
		}
	}
}

int main3904(void)
{
	ss stu[3] =
	{
		{"³����",30,33,"��̨ɽ"},
		{"������",45,44,"�꾩"},
		{"�˴�ɩ",28,33,"�꾩"},
	};

	BubbleSort(stu, 3);

	for (int i = 0; i < 3; i++) {
		printf("������%s\n", stu[i].name);
		printf("���䣺%d\n", stu[i].age);
		printf("�ɼ���%d\n", stu[i].scores);
		printf("��ַ��%s\n", stu[i].addr);
	}

	return 0;
}