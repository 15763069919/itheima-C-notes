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

//fgets(�����ַ,�ֽ�,�ļ�ָ��)
//��Ϊ�Ӽ��̽���,�ļ�ָ��Ϊstdin

//fputs(�ַ�����ַ,�ļ�ָ��)
//��Ϊ���,�ļ�ָ��Ϊstdout

int main4901()
{
	FILE* fp = fopen("D:/Work/Subject/C/����/�������Ա/�ļ�/49.txt", "r");
	if (!fp)
	{
		printf("���ļ�ʧ��");
		return -1;
	}

	char* p = (char*)malloc(sizeof(char) * 100);//ʵ����ЧӦ��һ(��Ϊ��Ԥ��һ��\0)
	memset(p, 0, 100);//���������ڴ�ռ�
	fgets(p, 100, fp);//�ж�ȡ

	printf("%s\n", p);

	free(p);
	fclose(fp);
	return EXIT_SUCCESS;
}

int main4902(void)
{
	FILE* fp = fopen("D:/Work/Subject/C/����/�������Ա/�ļ�/49.txt", "r");
	if (!fp)
	{
		printf("���ļ�ʧ��");
		return -1;
	}

	char* p = (char*)malloc(sizeof(char) * 100);

	//fgets��\0Ϊ������־,��ʹ��ѭ����ȡ��ͬ�е�����
	//��feof�����ж��Ƿ񵽽�β, ���˷��ط���, û������0
	while (!feof(fp))//feof(fp)==0
	{
		memset(p, 0, 100);//�����Դ�ŵ�ǰ�е�����
		fgets(p, 100, fp);//��ȡ

		printf("%s", p);//���д�ӡ
	}

	free(p);
	fclose(fp);

	return 0;
}

int main4903(void)
{
	FILE* fp = fopen("D:/Work/Subject/C/����/�������Ա/�ļ�/49.txt", "w");
	if (!fp)
	{
		printf("���ļ�ʧ��");
		return -1;
	}
	char ch[] = "���ɶ\0����զ��";//�ַ�������\0ֹͣ,�ж�д�����ַ���

	fputs(ch, fp);//д��

	fclose(fp);
	return 0;
}

int main49(void)
{
	FILE* fp = fopen("D:/Work/Subject/C/����/�������Ա/�ļ�/49.txt", "w");
	if (!fp)
	{
		printf("���ļ�ʧ��");
		return -1;
	}
	char* p = (char*)malloc(sizeof(char) * 1024);

	while (1)
	{
		memset(p, 0, 100);//�����ڴ������ֹ�ַ�����Ⱦ
		//scanf("%s", p);//\n���н���

		fgets(p, 100, fp);
		scanf("%[^\n]", p);//���ܷǿո���ַ�������
		getchar();//���ɻس�

		//ֹͣ��������comm=exit
		if (!strcmp(p, "comm=exit"))
			break;

		strcat(p, "\n");//�ַ���׷��һ��\n
		fputs(p, fp);
	}
	free(p);
	fclose(fp);
	return 0;
}