#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<time.h>
#include<windows.h>
#include<ctype.h>
#include<conio.h>

/*��Ϸ����

struct ����
{
	����
	�ȼ�
	�˺�
	��Χ
	����
	��ȴ
}
struct ������Ϣ
{
	�ȼ�
	��Ǯ
	����
	hp
	mp
	����
	����
	����
	struct ���� skills[4]
}
struct ������Ϣ info;
info skills[0].����

*/
/*���ڿ���

struct ���Ѽ�¼
{
	���ѽ��
	����ʱ��
	���ѱ��
	���ѵص�
	���ʽ
	��ע
}

struct ���п�
{
	����
	����
	������
	����
	���
	sttuct ���Ѽ�¼[20]
}
*/

struct scores
{
	int cl;//c����
	int cpp;//c++
	int cs;//c#
};

typedef struct student stu;
struct student {
	char name[21];
	int age;
	struct scores ss;//ss==student scores
	char addr[51];
};

int main3501() {
	//struct student stu = { "����",18,99,99,99,"����" };
	//printf("%s\n%d\n%d\n%d\n%d\n%s\n", stu.name, stu.age, stu.ss.cl, stu.ss.cpp, stu.ss.cs, stu.addr);

	struct student stu;
	strcpy(stu.name, "С��");
	stu.age = 20;
	stu.ss.cl = 88;
	stu.ss.cpp = 88;
	stu.ss.cs = 88;
	strcpy(stu.addr, "����");
	printf("%s\n%d\n%d\n%d\n%d\n%s\n", stu.name, stu.age, stu.ss.cl, stu.ss.cpp, stu.ss.cs, stu.addr);

	return EXIT_SUCCESS;
}

int main3502(void)
{
	stu s;
	printf("ѧ���ṹ���С:%d\n", sizeof(stu));//sizeof(stu)=sizeof(s),��Ϊint a=0;sizeof(int)=sizeof(a);
	printf("�ɼ��ṹ���С:%d\n", sizeof(s.ss));//sizeof(stu)=sizeof(s),��Ϊint a=0;sizeof(int)=sizeof(a);
	//s==ѧ��s,ss=ѧ���ɼ�
	printf("���ƴ�С:%d\n", sizeof(s.name));//sizeof(stu)=sizeof(s),��Ϊint a=0;sizeof(int)=sizeof(a);
}