#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<time.h>
#include<windows.h>
#include<ctype.h>
#include<conio.h>

//�ַ������޿��������Զ����\0����Ӧ��ʼ��str[100]={0}

void my_strncpy(char* dest, char* src, size_t n)
{
	while ((*dest++ = *src++) && --n);//ѭ��n�Σ�ֱ��n==0����ѭ��
}//��ִ�к�ѭ����&&���Ҷ��������������Ƚ���ǰ����������㣬
//������Ϊ0ʱֹͣ����ǰ����Ϊ�����Ѿ�������
int main13() {
	char ch[] = "hello world";
	char str[100] = { 0 };

	void my_strncpy(char* dest, char* src, size_t n);
	my_strncpy(str, ch, 2);

	printf("���޿�����%s\n", str);

	return EXIT_SUCCESS;
}