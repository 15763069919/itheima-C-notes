#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<time.h>
#include<windows.h>
#include<ctype.h>
#include<conio.h>
//eg:����ѧ�������ſγ�
int main32() {
	//���ٶ���ָ���Ӧ�Ķѿռ�
	//~~int arr[5][3]
	int** p = (int**)malloc(sizeof(int*) * 5);//��������ռ䣨����ѧ�����Դ�ŵ�ַ

	//����һ��ָ���Ӧ�Ķѿռ�
	for (int i = 0; i < 5; i++)
	{
		p[i] = (int*)malloc(sizeof(int) * 3);//���������ռ䣨�γ̣��Դ�����ݣ��ɼ���
	}

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 3; j++) {
			scanf("%d", &p[i][j]);
		}
	}
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 3; j++) {
			printf("%d ", p[i][j]);
		}
		puts("");
	}

	//�ͷŶѿռ䣨���ڵ��⣩
	for (int i = 0; i < 5; i++) {
		free(p[i]);//�ͷ�һ��ָ�뿪�ٵĿռ�
	}
	free(p);//�ͷŶ���ָ�뿪�ٵĿռ�

	return EXIT_SUCCESS;
}