#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<time.h>
#include<windows.h>
#include<ctype.h>
#include<conio.h>

typedef struct student ss;
struct student
{
	char name[21];
	int age;
	int scores[3];
	char addr[51];
};
int main4001() {
	ss stu1 = { "�����",700,101,101,101,"����ɽ" };
	ss stu2 = { "��˽�",1200,1000,1000,1000,"����ׯ" };

	//const���νṹ��ָ������
	const ss* p = &stu1;
	//p = &stu2;//OK
	//p->age=888;//err
	//(*p).age = 888;//err

	return EXIT_SUCCESS;

	return 0;
}

int main4002(void)
{
	ss stu1 = { "�����",700,101,101,101,"����ɽ" };
	ss stu2 = { "��˽�",1200,1000,1000,1000,"����ׯ" };

	//const���νṹ��ָ�����
	ss* const p = &stu1;
	//p = &stu2;//err
	//p->age = 888;//OK
	//p->name = "ɳ��";//err,Ӧ��Ϊstrcpy(p->name,"ɳ��");

	return 0;
}

int main4003(void)
{
	ss stu1 = { "�����",700,101,101,101,"����ɽ" };
	ss stu2 = { "��˽�",1200,1000,1000,1000,"����ׯ" };

	//const���νṹ��ָ������
	//const���νṹ��ָ�����
	const ss* const p = &stu1;
	//p = &stu2;//err
	//p->age = 888;//err
	ss** pp = &p;//�������ָ��
	//(*pp)->age = 888;//OK	//�޸ľ���ֵ
	//*pp = &stu2;//OK	//�޸�ָ��ָ��
	(**pp).age = 888;//OK	//�޸ľ���ֵ

	return 0;
}