#include<stdio.h>

int main0301() {
	int a = 10;
	int b = 20;

	printf("����ǰ:\na=%d,b=%d\n", a, b);

	void my_swap(int* x, int* y);//��������

	my_swap(&a, &b);//��ֵ����

	printf("������:\na=%d,b=%d\n", a, b);
}

//��ֵ��������
void my_swap(int* x, int* y) {//���彻������
	int temp = *x;//����tempΪxָ���ֵ
	*x = *y;//xָ���ֵ�޸�Ϊyָ���ֵ
	*y = temp;//yָ���ֵ�޸�Ϊxָ���ֵ
}