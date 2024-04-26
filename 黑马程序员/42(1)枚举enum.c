#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<time.h>
#include<windows.h>
#include<ctype.h>
#include<conio.h>
//enum一般配合switch来进行流程控制
enum Color
{
	red, blue, green, pink, yellow, black, white
};//默认从0开始依次++排序
int main4201()
{
	//enum Color color;//类似结构体变量
	int value;
	scanf("%d", &value);
	switch (value)//写switch时用Tab,然后写完color再点鼠标单击
	{
	case red:
		printf("红色\n");
		break;
	case blue:
		printf("蓝色\n");
		break;
	case green:
		printf("绿色\n");
		break;
	case pink:
		printf("粉色\n");
		break;
	case yellow:
		printf("黄色\n");
		break;
	case black:
		printf("黑色\n");
		break;
	case white:
		printf("白色\n");
		break;
	default:
		break;
	}

	return EXIT_SUCCESS;
}