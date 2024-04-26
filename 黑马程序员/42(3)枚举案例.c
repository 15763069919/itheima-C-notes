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
			printf("系统正在插卡...\n");
			break;
		case ReadCard:
			printf("系统正在读卡...\n");
			break;
		case LockCard:
			printf("系统正在锁卡...\n");
			break;
		case EnterPassword:
			printf("系统正在输入密码...\n");
			break;
		case Query:
			printf("系统正在查询...\n");
			break;
		case WithDrawal:
			printf("系统正在取款...\n");
			break;
		case ReturnCard:
			printf("系统正在退卡...\n");
			break;
		case UnlockCard:
			printf("系统正在解卡...\n");
			return 0;
			break;
		default:
			break;
		}
	}

	return EXIT_SUCCESS;
}