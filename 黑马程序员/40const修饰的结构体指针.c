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
	ss stu1 = { "孙悟空",700,101,101,101,"花果山" };
	ss stu2 = { "猪八戒",1200,1000,1000,1000,"高老庄" };

	//const修饰结构体指针类型
	const ss* p = &stu1;
	//p = &stu2;//OK
	//p->age=888;//err
	//(*p).age = 888;//err

	return EXIT_SUCCESS;

	return 0;
}

int main4002(void)
{
	ss stu1 = { "孙悟空",700,101,101,101,"花果山" };
	ss stu2 = { "猪八戒",1200,1000,1000,1000,"高老庄" };

	//const修饰结构体指针变量
	ss* const p = &stu1;
	//p = &stu2;//err
	//p->age = 888;//OK
	//p->name = "沙悟净";//err,应改为strcpy(p->name,"沙悟净");

	return 0;
}

int main4003(void)
{
	ss stu1 = { "孙悟空",700,101,101,101,"花果山" };
	ss stu2 = { "猪八戒",1200,1000,1000,1000,"高老庄" };

	//const修饰结构体指针类型
	//const修饰结构体指针变量
	const ss* const p = &stu1;
	//p = &stu2;//err
	//p->age = 888;//err
	ss** pp = &p;//定义二级指针
	//(*pp)->age = 888;//OK	//修改具体值
	//*pp = &stu2;//OK	//修改指针指向
	(**pp).age = 888;//OK	//修改具体值

	return 0;
}