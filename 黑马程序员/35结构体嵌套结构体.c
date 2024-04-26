#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<time.h>
#include<windows.h>
#include<ctype.h>
#include<conio.h>

/*游戏开发

struct 技能
{
	名称
	等级
	伤害
	范围
	耗蓝
	冷却
}
struct 人物信息
{
	等级
	金钱
	经验
	hp
	mp
	力量
	智力
	敏捷
	struct 技能 skills[4]
}
struct 任务信息 info;
info skills[0].名称

*/
/*金融开发

struct 消费记录
{
	消费金额
	消费时间
	消费编号
	消费地点
	付款方式
	备注
}

struct 银行卡
{
	卡号
	密码
	持有人
	属性
	余额
	sttuct 消费记录[20]
}
*/

struct scores
{
	int cl;//c语言
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
	//struct student stu = { "貂蝉",18,99,99,99,"徐州" };
	//printf("%s\n%d\n%d\n%d\n%d\n%s\n", stu.name, stu.age, stu.ss.cl, stu.ss.cpp, stu.ss.cs, stu.addr);

	struct student stu;
	strcpy(stu.name, "小乔");
	stu.age = 20;
	stu.ss.cl = 88;
	stu.ss.cpp = 88;
	stu.ss.cs = 88;
	strcpy(stu.addr, "江东");
	printf("%s\n%d\n%d\n%d\n%d\n%s\n", stu.name, stu.age, stu.ss.cl, stu.ss.cpp, stu.ss.cs, stu.addr);

	return EXIT_SUCCESS;
}

int main3502(void)
{
	stu s;
	printf("学生结构体大小:%d\n", sizeof(stu));//sizeof(stu)=sizeof(s),因为int a=0;sizeof(int)=sizeof(a);
	printf("成绩结构体大小:%d\n", sizeof(s.ss));//sizeof(stu)=sizeof(s),因为int a=0;sizeof(int)=sizeof(a);
	//s==学生s,ss=学生成绩
	printf("名称大小:%d\n", sizeof(s.name));//sizeof(stu)=sizeof(s),因为int a=0;sizeof(int)=sizeof(a);
}