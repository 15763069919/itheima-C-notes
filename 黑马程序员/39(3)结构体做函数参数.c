#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<time.h>
#include<windows.h>
#include<ctype.h>
#include<conio.h>
//=========================== 地址传递,结构体指针作为函数参数 ========================================

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
	strcpy(p->name, "公孙胜");
	printf("fun02函数打印%s\n", p->name);
}
int main3903(void) {
	ss stu = { "吴用",50,101,"水泊梁山" };//定义结构体变量stu

	fun02(&stu);
	printf("main函数打印%s\n", stu.name);//地址传递形参能改边实参的值

	return 0;
}
//=========================== 结构体数组作为函数参数 ========================================

static void BubbleSort(ss* stu, int len)
{
	//printf("%d\n",sizeof(stu));
	// //数组作为函数参数退化为指针,丢失元素精度,需要传递元素个数

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
		{"鲁智深",30,33,"五台山"},
		{"呼延灼",45,44,"汴京"},
		{"顾大嫂",28,33,"汴京"},
	};

	BubbleSort(stu, 3);

	for (int i = 0; i < 3; i++) {
		printf("姓名：%s\n", stu[i].name);
		printf("年龄：%d\n", stu[i].age);
		printf("成绩：%d\n", stu[i].scores);
		printf("地址：%s\n", stu[i].addr);
	}

	return 0;
}