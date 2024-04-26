#define _CRT_SECURE_NO_WARNINGS
#define _CRT_SECURE_NO_DEPRECATE
#define _CRT_NONSTDC_NO_DEPRECATE
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<time.h>
#include<windows.h>
#include<ctype.h>
#include<conio.h>

enum TYPE
{
	run, attack, skill, dance = 10, showUI, frozen = 20, dizz, death, moti = 30
};

int main4202()
{
	int value;
	while (1)
	{
		scanf("%d", &value);
		switch (value)
		{
		case run:
			printf("英雄正在移动中...\n");
			//value=30;
			break;
		case attack:
			printf("英雄正在攻击中...\n");
			break;
		case skill:
			printf("英雄正在释放技能中...\n");
			break;
		case dance:
			printf("英雄正在跳舞中...\n");
			break;
		case showUI:
			printf("英雄正在显示徽章中...\n");
			break;
		case frozen:
			printf("英雄被冰冻中...\n");
			break;
		case dizz:
			printf("英雄被眩晕中...\n");
			break;
		case death:
			printf("英雄死亡...\n");
			return 0;
			break;
		case moti:
			printf("英雄等待释放命令...\n");
			break;
		}
	}

	return EXIT_SUCCESS;
}