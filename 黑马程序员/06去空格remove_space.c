#include<stdio.h>

int main06() {
	char ch[] = "  h   e  l  l o w  o    r l    d   ";

	void remove_space(char* ch);
	remove_space(ch);

	printf("%s", ch);
}

void remove_space(char* ch) {
	char* ftemp = ch;//���������ַ�
	char* rtemp = ch;//��¼��Ч�ַ�

	while (*ftemp) {
		if (*ftemp != ' ') {//��������Ч�ַ�ʱ
			*rtemp = *ftemp;//���ݸ�*rtemp
			rtemp++;//�ƶ���ָ��
		}
		ftemp++;//�ƶ���ָ��
	}
	*rtemp = 0;//��\0
}