#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<time.h>
#include<windows.h>
#include<ctype.h>
#include<conio.h>

//================
#define DEBUG_ON
//..................
#ifdef DEBUG_ON
#define DEBUG_PRITNTF printf
#else
#define DEBUG_PRITNTF
#endif

int main00() {
	DEBUG_PRITNTF("调试打印信息(注释掉#define DEBUG_ON则不打印)");

	return EXIT_SUCCESS;
}