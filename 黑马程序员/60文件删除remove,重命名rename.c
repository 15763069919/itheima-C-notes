#pragma warning(disable:6387)//ʹ��fgetsǰӦ�ж�ָ��Ϊ��NULL
#pragma warning(disable:6031)//scanf
#pragma warning(disable:6001)//������ʼ��
#define _CRT_SECURE_NO_WARNINGS
#define _CRT_SECURE_NO_DEPRECATE
#define _CRT_NONSTDC_NO_DEPRECATE
//D:/Work/Subject/C/����/�������Ա/�ļ�/
#include<stdio.h>//��
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<time.h>
#include<windows.h>
#include<ctype.h>
#include<conio.h>

//remove("�ļ���")		//ɾ���ļ�(�ɹ�����0,���ɹ�����-1)

//rename("���ļ���","���ļ���")		//�������ļ�(�ɹ�����0,���ɹ�����-1)
		//��ͨ���޸��ļ������޸��ļ�·��.

int main60()
{
	//��д
	char order[10] = { 0 };
	printf("please input the order:\n");
	while (1) {
		scanf("%s", order);
		if (!strcmp(order, "add")) {
			memset(order, 0, 10);
			FILE* fp1 = fopen("D:/Work/Subject/C/����/�������Ա/�ļ�/60��ɾ���ļ�.txt", "w");
			if (!fp1)	return -1;
			else {
				printf("�����ļ��ɹ�\n");
				fclose(fp1);
			}
		}
		if (!strcmp(order, "remove")) {
			memset(order, 0, 10);
			int value = remove("D:/Work/Subject/C/����/�������Ա/�ļ�/60��ɾ���ļ�.txt");
			if (!value)printf("�ļ�ɾ���ɹ�\n");
			else printf("�ļ�ɾ��ʧ��\n");
		}

		if (!strcmp(order, "comm=exit")) {
			return 0;
		}
	}

	return EXIT_SUCCESS;
}