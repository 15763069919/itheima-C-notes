#include<stdio.h>
#include<stdlib.h>
#define _CRT_SECURE_NO_WARNINGS
#include<math.h>
#include<string.h>//��
#include<time.h>
#include<windows.h>
#include<ctype.h>
#include<conio.h>
//memset��Ŀ�꣬����ֵ���ֽ�),,,,,�ֽ�=sizeof(����)*����	   // ����һ�������ڴ�ռ��ֵ������ʹ��ѭ������ֵ
//������������ַ�����ȣ��ַ��������ã���Ϊ��\0
int main28() {
	int* p = (int*)malloc(sizeof(int) * 10);

	memset(p, 0, 40);

	for (int i = 0; i < 10; i++) {
		printf("%d\n", p[i]);
	}

	return EXIT_SUCCESS;
}