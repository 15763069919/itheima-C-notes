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

enum TRADE
{
	InsertCard, ReadCard, LockCard, EnterPassword, Query, WithDrawal, ReturnCard, UnlockCard
};

int main4203()
{
	int value;
	while (1)
	{
		scanf("%d", &value);
		switch (value)
		{
		case InsertCard:
			printf("ϵͳ���ڲ忨...\n");
			break;
		case ReadCard:
			printf("ϵͳ���ڶ���...\n");
			break;
		case LockCard:
			printf("ϵͳ��������...\n");
			break;
		case EnterPassword:
			printf("ϵͳ������������...\n");
			break;
		case Query:
			printf("ϵͳ���ڲ�ѯ...\n");
			break;
		case WithDrawal:
			printf("ϵͳ����ȡ��...\n");
			break;
		case ReturnCard:
			printf("ϵͳ�����˿�...\n");
			break;
		case UnlockCard:
			printf("ϵͳ���ڽ⿨...\n");
			return 0;
			break;
		default:
			break;
		}
	}

	return EXIT_SUCCESS;
}