#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<time.h>
#include<windows.h>
#include<ctype.h>
#include<conio.h>
//enumһ�����switch���������̿���
enum Color
{
	red, blue, green, pink, yellow, black, white
};//Ĭ�ϴ�0��ʼ����++����
int main4201()
{
	//enum Color color;//���ƽṹ�����
	int value;
	scanf("%d", &value);
	switch (value)//дswitchʱ��Tab,Ȼ��д��color�ٵ���굥��
	{
	case red:
		printf("��ɫ\n");
		break;
	case blue:
		printf("��ɫ\n");
		break;
	case green:
		printf("��ɫ\n");
		break;
	case pink:
		printf("��ɫ\n");
		break;
	case yellow:
		printf("��ɫ\n");
		break;
	case black:
		printf("��ɫ\n");
		break;
	case white:
		printf("��ɫ\n");
		break;
	default:
		break;
	}

	return EXIT_SUCCESS;
}