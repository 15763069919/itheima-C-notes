#pragma warning(disable:6387)//ʹ��fgetsǰӦ�ж�ָ��Ϊ��NULL
#pragma warning(disable:6031)//scanf
#pragma warning(disable:6001)//������ʼ��
#define _CRT_SECURE_NO_WARNINGS
#define _CRT_SECURE_NO_DEPRECATE
#define _CRT_NONSTDC_NO_DEPRECATE
//D:/Work/Subject/C/����/�������Ա/�ļ�/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<time.h>
#include<windows.h>
#include<ctype.h>
#include<conio.h>

//fwrite(���ݵ�ַ,������С,����,�ļ�ָ��)		eg:fwrite(&a, sizeof(int), 1, fp);
	//���԰�һ�������ֵд���ļ���
//fread(���ݵ�ַ,������С,����,�ļ�ָ��)			eg:fread(&value, sizeof(int), 1, fp);
	//���԰��ļ��е�ֵ��ȡ����Ϊһ������

int main5401()
{
	FILE* fp = fopen("D:/Work/Subject/C/����/�������Ա/�ļ�/54.txt", "wb");
	if (!fp) {
		printf("���ļ�����\n");
		return -1;
	}
	//int a = 5678;
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	//fwrite(&a, sizeof(int), 1, fp);
	fwrite(&arr, sizeof(int), 10, fp);

	fclose(fp);
	return EXIT_SUCCESS;
}
int main5402(void)
{
	FILE* fp = fopen("D:/Work/Subject/C/����/�������Ա/�ļ�/54.txt", "rb");
	if (!fp) {
		printf("���ļ�����\n");
		return -1;
	}
	//int value;
	//fread(&value, sizeof(int), 1, fp);
	//printf("%d", value);

	int arr[10] = { 0 };
	fread(arr, sizeof(int), 10, fp);
	for (int i = 0; i < 10; i++) {
		printf("%d\n", arr[i]);
	}

	fclose(fp);
}