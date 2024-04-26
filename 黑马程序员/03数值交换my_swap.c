#include<stdio.h>

int main0301() {
	int a = 10;
	int b = 20;

	printf("交换前:\na=%d,b=%d\n", a, b);

	void my_swap(int* x, int* y);//函数声明

	my_swap(&a, &b);//数值交换

	printf("交换后:\na=%d,b=%d\n", a, b);
}

//数值交换函数
void my_swap(int* x, int* y) {//定义交换函数
	int temp = *x;//定义temp为x指向的值
	*x = *y;//x指向的值修改为y指向的值
	*y = temp;//y指向的值修改为x指向的值
}