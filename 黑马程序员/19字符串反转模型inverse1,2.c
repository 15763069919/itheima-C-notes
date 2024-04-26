#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<time.h>
#include<windows.h>
#include<ctype.h>
#include<conio.h>

//�ַ�������~~��������
//��һ��������ʽ
void inverse1(char* ch, int len)
{
	int i = 0;
	int j = len - 1;
	while (i < j) {
		char temp = ch[i];
		ch[i] = ch[j];
		ch[j] = temp;

		i++;
		j--;
	}
	return 0;
}

//������ָ�뷨��ʹ��˫ָ��ftemp��btemp��
void inverse2(char* ch, int len) {
	char* btemp = ch;
	char* ftemp = ch + len - 1;

	while (btemp < ftemp) {
		char temp = *btemp;
		*btemp = *ftemp;
		*ftemp = temp;

		btemp++;
		ftemp--;
	}
}

int main19() {
	char ch[] = "hello world";
	printf("����ǰ��%s\n", ch);
	void inverse2(char* ch, int len);
	inverse2(ch, strlen(ch));
	printf("���ú�%s\n", ch);

	return EXIT_SUCCESS;
}