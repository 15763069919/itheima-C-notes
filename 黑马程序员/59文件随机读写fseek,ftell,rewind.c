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

/*fseek(�ļ�ָ��, ƫ����offset, whence)		//�ı���λ��

		offset:
			������ĸһ�ֽ�,�������ֽ�,�������ص�\r\nҲӦ���ȥ(�����ļ��Ľ�β-1)
			fopne("...","a")��aΪ׷�ӵķ�ʽ,fseekʧЧ

		whence:
			SEEK_SET ���ļ���ͷ�ƶ�offset���ֽ�	0
			SEEK_CUR �ӵ�ǰλ���ƶ�offset���ֽ�	1		(current)
			SEEK_END ���ļ�ĩβ�ƶ�offset���ֽ�	2

ftell(�ļ�ָ��)		//��ȡ���λ�÷���long����

rewind(�ļ�ָ��)		//�ѹ���ƶ����ļ���ͷ

	*/
int main5901()
{
	FILE* fp = fopen("D:/Work/Subject/C/����/�������Ա/�ļ�/58.txt", "r");
	if (!fp)return -1;

	char arr[100];

	memset(arr, 0, 100);
	fgets(arr, 100, fp);
	printf("%s", arr);

	memset(arr, 0, 100);
	fgets(arr, 100, fp);
	printf("%s", arr);

	fseek(fp, -8, SEEK_CUR);

	memset(arr, 0, 100);
	fgets(arr, 100, fp);
	printf("%s", arr);
	fclose(fp);

	return EXIT_SUCCESS;
}

int main5902(void)
{
	FILE* fp = fopen("D:/Work/Subject/C/����/�������Ա/�ļ�/58.txt", "r+");
	//a Ϊ׷�ӵķ�ʽ,fseekʧЧ,Ӧ����r+
	if (!fp)return -1;

	long pos = ftell(fp);
	printf("%ld\n", pos);

	fseek(fp, -17, SEEK_END);
	//fputs("����զ��", fp);

	pos = ftell(fp);
	printf("%ld\n", pos);

	fclose(fp);
	return 0;
}

int main5903(void)
{
	FILE* fp = fopen("D:/Work/Subject/C/����/�������Ա/�ļ�/58(2).txt", "w");
	if (!fp)return -1;

	char ch1[] = "hello ������\n";
	char ch2[] = "world";

	fputs(ch1, fp);
	fseek(fp, -14, SEEK_CUR);//�ƶ����
	fputs(ch2, fp);

	fclose(fp);
	return 0;
}

int main5904(void)
{
	FILE* fp = fopen("D:/Work/Subject/C/����/�������Ա/�ļ�/58.txt", "r");
	if (!fp)return -1;

	char arr[100];
	//��ȡ�ļ����������λ��
	long pos = ftell(fp);
	printf("%ld\n", pos);

	fgets(arr, 100, fp);
	fseek(fp, 8, SEEK_CUR);
	pos = ftell(fp);
	printf("%ld\n", pos);

	//�����ļ��������ʼλ��
	rewind(fp);//feek(fp,0,SEEK_SET)
	memset(arr, 0, 100);
	fgets(arr, 100, fp);
	printf("%s\n", arr);

	return 0;
}