#include<stdio.h>

int main07() {
	int a = 10;
	int b = 20;

	void my_swap1(int* a, int* b);
	my_swap1(&a, &b);

	printf("%d\n%d", a, b);
}

void my_swap1(int* a, int* b) {
	int temp = *a;
	*a = *b;//��ʱʵ����ֵ�Ѿ��ı䣬�����ں����洢����ı���ٴ���ʵ�Σ��޷����ݣ�
	*b = temp;
}