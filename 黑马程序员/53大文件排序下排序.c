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

#define SIZE 1000
#define SIZE2 256

//int count = 0;

void Bubblesort(int* arr, int len)
{
	for (int i = 0; i < len - 1; i++)
	{
		for (int j = 0; j < len - i - 1; j++)
		{
			//count++;
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}
int main5301()
{
	FILE* fp1 = fopen("D:/Work/Subject/C/����/�������Ա/�ļ�/52.txt", "r");
	FILE* fp2 = fopen("D:/Work/Subject/C/����/�������Ա/�ļ�/53��������ð�ݰ�.txt", "w");
	if (!fp1 || !fp2)
		return -1;

	//ð�ݰ�
	int* arr = (int*)malloc(sizeof(int) * SIZE);
	if (!arr)
		return -1;
	memset(arr, 0, SIZE);

	for (int i = 0; i < SIZE; i++) {
		fscanf(fp1, "%d", &arr[i]);
	}

	Bubblesort(arr, SIZE);

	for (int i = 0; i < SIZE; i++) {
		fprintf(fp2, "%d\n", arr[i]);
	}

	//printf("====%d====\n", count);

	free(arr);
	fclose(fp1);
	fclose(fp2);
	return EXIT_SUCCESS;
}

int main5302(void)
{
	FILE* fp1 = fopen("D:/Work/Subject/C/����/�������Ա/�ļ�/52.txt", "r");
	FILE* fp2 = fopen("D:/Work/Subject/C/����/�������Ա/�ļ�/53��������ֱ�Ӳ��뷨��.txt", "w");
	if (!fp1 || !fp2) {
		return -1;
	}

	//ֱ�Ӳ��뷨
	int* arr = (int*)malloc(sizeof(int) * SIZE2);
	if (!arr)
		return -1;
	memset(arr, 0, sizeof(int) * SIZE2);

	for (int i = 0; i < SIZE; i++)
	{
		int value;
		fscanf(fp1, "%d", &value);
		arr[value]++;//�����ݵĸ������ڶ�Ӧ�±�����
	}

	for (int i = 0; i < SIZE2; i++)
	{
		for (int j = 0; j < arr[i]; j++) {
			fprintf(fp2, "%d\n", i);
		}
	}
	free(arr);
	fclose(fp1);
	fclose(fp2);

	return 0;
}