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

//sscanf(�ַ�����ַ,"���ݼ�ռλ��",������ַ)//��ȡ�ַ���������   eg:sscanf(p, "%d%c%d", &a, &c, &b);

int main5002()
{
	FILE* fp1 = fopen("D:/Work/Subject/C/����/�������Ա/�ļ�/50����������.txt", "r");
	FILE* fp2 = fopen("D:/Work/Subject/C/����/�������Ա/�ļ�/50����������.txt", "w");
	if (!fp1 || !fp2) {
		printf("���ļ�ʧ��\n");
		return -1;
	}
	int a, b, sum;
	char c;
	char* p = (char*)malloc(sizeof(char) * 20);

	//����֪���ļ�����Ӧʹ��feof(fp1)//����β���ط�0,��ʹ��EOF
	//��������֪100��,���ֱ��ʹ��forѭ��:
	for (int i = 0; i < 100; i++) {
		memset(p, 0, 20);//����
		fgets(p, 20, fp1);//��ȡ�ļ����ַ���
		sscanf(p, "%d%c%d", &a, &c, &b);//��ȡ�ַ���������
		switch (c)
		{
		case '+':sum = a + b; break;
		case '-':sum = a - b; break;
		case '*':sum = a * b; break;
		case '/':sum = a / b; break;
		}

		memset(p, 0, 20);//����
		sprintf(p, "%d%c%d=%d\n", a, c, b, sum);
		fputs(p, fp2);
	}

	free(p);
	fclose(fp1);
	fclose(fp2);
	return EXIT_SUCCESS;
}