#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<time.h>
#include<windows.h>
#include<ctype.h>
#include<conio.h>
//memcpy(����,����,�ֽڴ�С)
//�����ڶ�����ջ�����ݿ���
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
	//�ַ�����������\0ֹͣ
	/*strcpy(str, ch);
	printf("%s\n", str);*/

	//�ڴ濽�� �������ݺ��ֽ��йأ��������ֽڴ�Сֹͣ���ǿ���\0ֹͣ��
	memcpy(str, ch, 13);
	//printf("%s\n", str);//��ӡ�ַ���������hello
	for (size_t i = 0; i < 13; i++) {
		printf("%c", str[i]);//��������
	}
}

int main2903() {
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	//���������Ŀ���Դ�����ص������ܱ�����ȡ��д���ص�ʱ���ܷ�������
	//�ص�ʱʹ��memmove����ʱЧ���½���
	// ��ȫ�������Լ����ٿռ䣬Ȼ��ͨ���˿ռ��ƶ��������ٿռ䣩������ʹ��ʱЧ�����
	memcpy(&arr[5], &arr[3], 12);
	for (size_t i = 0; i < 10; i++) {
		printf("%d\n", arr[i]);
	}
}