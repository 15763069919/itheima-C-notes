#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>//�ڴ�ͷ�ļ���
#include<string.h>
#include<math.h>
#include<time.h>
#include<windows.h>
#include<ctype.h>
#include<conio.h>
//atoi����Ϊ�ַ�������ת������
//��ʹ��ʱ����ǰ��Ŀո񣬴�+-�ſ�ʼ������ʮ�������ֽ���
// ����ʹ��ʮ�������ֺ������֣��Խ�����
int main2101() {
	char ch[] = "    - 123456abc123";

	int i = atoi(ch);
	printf("%d\n", i);

	return EXIT_SUCCESS;
}

int main2102() {
	char ch[] = "    -123.456 -456abc123";

	double i = atof(ch);
	printf("%.2f\n", i);

	return EXIT_SUCCESS;
}

int main2103() {
	char ch[] = "    -123.456 -456abc123";

	long i = atol(ch);
	printf("%ld\n", i);//�˴�Ϊ"."�������ֹͣ

	return EXIT_SUCCESS;
}