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
			printf("Ӣ�������ƶ���...\n");
			//value=30;
			break;
		case attack:
			printf("Ӣ�����ڹ�����...\n");
			break;
		case skill:
			printf("Ӣ�������ͷż�����...\n");
			break;
		case dance:
			printf("Ӣ������������...\n");
			break;
		case showUI:
			printf("Ӣ��������ʾ������...\n");
			break;
		case frozen:
			printf("Ӣ�۱�������...\n");
			break;
		case dizz:
			printf("Ӣ�۱�ѣ����...\n");
			break;
		case death:
			printf("Ӣ������...\n");
			return 0;
			break;
		case moti:
			printf("Ӣ�۵ȴ��ͷ�����...\n");
			break;
		}
	}

	return EXIT_SUCCESS;
}