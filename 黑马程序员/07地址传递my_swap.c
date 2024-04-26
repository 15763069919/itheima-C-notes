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
	*a = *b;//此时实参数值已经改变，而非在函数存储区域改变后再传给实参（无法传递）
	*b = temp;
}