#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<time.h>
#include<windows.h>
#include<ctype.h>
#include<conio.h>
//memcpy(放入,拷贝,字节大小)
//可用于堆区和栈区数据拷贝
int main2901() {
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int* p = (int*)malloc(sizeof(int) * 10);

	memcpy(p, arr, sizeof(int) * 10);

	for (size_t i = 0; i < 10; i++) {
		printf("%d\n", p[i]);
	}
	free(p);

	return EXIT_SUCCESS;
}

int main2902(void) {
	char ch[] = "hello\0 world";
	char str[100];
	//字符串拷贝遇到\0停止
	/*strcpy(str, ch);
	printf("%s\n", str);*/

	//内存拷贝 拷贝内容和字节有关，（根据字节大小停止，非考虑\0停止）
	memcpy(str, ch, 13);
	//printf("%s\n", str);//打印字符串内容是hello
	for (size_t i = 0; i < 13; i++) {
		printf("%c", str[i]);//拷贝内容
	}
}

int main2903() {
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	//如果拷贝的目标和源发生重叠，可能报错（读取和写入重叠时可能发生错误）
	//重叠时使用memmove，此时效率下降，
	// 安全上升（自己开辟空间，然后通过此空间移动，后销毁空间），其余使用时效率相等
	memcpy(&arr[5], &arr[3], 12);
	for (size_t i = 0; i < 10; i++) {
		printf("%d\n", arr[i]);
	}
}