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
/*������:
	1.��������̼�Ľ���ͨ��������
	2.���������ݲ��ᱣ��,������»���

//fflush(�ļ�ָ��)	�����ļ�������,������������������д���ļ���(д��Ӳ����),��Ƶ����Ӳ�̽�������Ӳ��,Ӧ�涨���ڻ�ʱ��
		�ɹ�����0,ʧ�ܷ���-1
*/
int main61()
{
	FILE* fp = fopen("D:/Work/Subject/C/����/�������Ա/�ļ�/61.txt", "w+");
	if (!fp) return -1;

	char ch;
	while (1)
	{
		scanf("%c", &ch);
		if (ch == '@') break;

		fputc(ch, fp);
		//Ƶ����Ӳ�̽�������Ӳ��
		fflush(fp);
	}

	fclose(fp);

	return EXIT_SUCCESS;
}