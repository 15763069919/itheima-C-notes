#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<time.h>
#include<windows.h>
#include<ctype.h>
#include<conio.h>
//union能在同一存储空间存储不同类型数据的类型,
// 但只能存放一个(最后一个被赋值的有效, 前面的被覆盖),且联合体所占内存长度和最长成员的长度倍数有关

union Var
{
	int a;
	float b;
	double c;//因为double占8字节,但是12不是8的倍数,且12>8
	//,故此情况联合体所占内存长度为16字节(最大类型double所占内存长度8字节的倍数16字节)
	char d;
	short f[6];//12字节
};
int main41() {
	union Var var;//类似结构体
	var.a = 100;
	var.b = 3.14;
	printf("%d\n", var.a);
	printf("%f\n", var.b);

	printf("var大小:%lld\n", sizeof(var));//占16个字节(最长成员的长度的倍数)//%lld避免警告

	printf("var  地址:%p\n", &var);
	printf("var.a地址:%p\n", &var.a);
	printf("var.b地址:%p\n", &var.b);
	printf("var.c地址:%p\n", &var.c);

	return EXIT_SUCCESS;
}