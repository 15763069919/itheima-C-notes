#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<time.h>
#include<windows.h>
#include<ctype.h>
#include<conio.h>

//strtok(�ַ��������ַ����׵�ַ������־λ)
// �����ַ�����㵽��־λ����������־λ�����ַ�������û�ҵ���־λ�򷵻������ַ���
//strtok���ƻ�ԭ�ַ���������\0�滻

int main2001() {
	char ch[] = "www.itcast.cn";

	//eg����strtok(ch,"."),��ȡ���ַ���Ϊwww\0itcast.cn������www
	char* p = strtok(ch, ".");//www\0itcast.cn
	printf("%s\n", p);
	//������ȡ��
	//strtok(NULL,".")  NULLΪ\0�ĵ�ַ����ȡ���ַ���Ϊwww\0itcast\0cn,����itcast
	p = strtok(NULL, ".");//www\0itcast\0cn
	printf("%s\n", p);

	p = strtok(NULL, ".");//�Ҳ���".",��ӡ�����ַ�������NULL��ʼ��
	printf("%s\n", p);

	return EXIT_SUCCESS;
}

//Ҫ�󣺽�ȡ��qq�ţ��ұ�������
int main2002(void) {
	char ch[] = "123456@qq.com";
	char str[100] = { 0 };

	//��������ţ��ַ���������
	strcpy(str, ch);
	//��ȡqq��
	char* p = strtok(ch, "@");
	printf("qq:%s\n", p);
	//��ȡ��������
	p = strtok(NULL, ".");
	printf("��������:%s\n", p);
}

int main2003(void) {
	char ch[] = "���ɶ\nchounizadi\nzaichouyigeshishi\nduibuqidagewocuole\nguawazi";
	char* p = strtok(ch, "\n");

	while (p)//����ѭ����ηָ��ȡ
	{
		printf("%s\n", p);
		p = strtok(NULL, "\n");
	}

	return 0;
}