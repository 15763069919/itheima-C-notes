#pragma warning(disable:6387)//ʹ��fgetsǰӦ�ж�ָ��Ϊ��NULL
#pragma warning(disable:6031)//scanf
#define _CRT_SECURE_NO_WARNINGS
#define _CRT_SECURE_NO_DEPRECATE
#define _CRT_NONSTDC_NO_DEPRECATE
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<time.h>
#include<windows.h>
#include<ctype.h>
#include<conio.h>

//sprintf(�ַ�����ַ,"���ݼ�ռλ��",����)//�������ַ���  eg:sprintf(p, " %d%c%d = \n", a, c, b);

enum opt//opt��������
{
	add, sub, mlt, dive
};

int main5001()
{
	srand((size_t)time(NULL));//������������(��ϵͳʱ����Ϊ���������)
	FILE* fp = fopen("D:/Work/Subject/C/����/�������Ա/�ļ�/50����������.txt", "w");
	if (!fp) {
		printf("���ļ�����\n");
		return -1;
	}
	int a, b;
	char c;//+ - * /
	char* p = (char*)malloc(sizeof(char) * 20);

	for (int i = 0; i < 100; i++)
	{
		a = rand() % 10 + 1;//%10Ϊ1~9,+1Ϊ1~10
		b = rand() % 10 + 1;//%10Ϊ1~9,+1Ϊ1~10

		switch (rand() % 4)
		{
		case add:c = '+'; break;
		case sub:c = '-'; break;
		case mlt:c = '*'; break;
		case dive:c = '/'; break;
		}
		memset(p, 0, 20);//����
		sprintf(p, " %d%c%d = \n", a, c, b);//�������ַ���
		fputs(p, fp);//�ַ������ļ�
	}
	free(p);
	fclose(fp);
	p = NULL;
	fp = NULL;

	return EXIT_SUCCESS;
}