#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>//�ڴ�
#include<string.h>
#include<math.h>
#include<time.h>
#include<windows.h>
#include<ctype.h>
#include<conio.h>
//malloc����С�����ٶѿռ䣬�ɹ�������ʼ��ַ(void*)����ǿ������ת����ʧ�ܷ���NULL
int main2701()
{
	//ջ����С
	//int arr[8200000/3] = { 0 };

	//���ٶѿռ�洢����
	int* p = (int*)malloc(sizeof(int));//���ٶѿռ�malloc����С��
	//��ʾд��Ϊ�洢1240�����εĿռ䣬==malloc��4*1240��
	//��int*��Ϊǿ������ת��
	printf("%p\n", p);

	//ʹ�öѿռ�
	*p = 123;
	printf("%d\n", *p);

	// �ͷŶѿռ�
	free(p);
	p = NULL;
	//pҰָ��
	printf("%p\n", p);
	*p = 456;
	printf("%d\n", *p);

	return EXIT_SUCCESS;
}

int main2702(void)
{
	int* p = (int*)malloc(sizeof(int) * 8200000 * 300);
	printf("%p\n", p);

	if (!p) {
		printf("�����쳣\n");
		return -1;
	}

	free(p);
	return 0;
}