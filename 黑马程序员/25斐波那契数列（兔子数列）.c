#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<time.h>
#include<windows.h>
#include<ctype.h>

/*F（0）=1，F(1)=1,F(2)=2,F(3)=3,F(4)=5......F(n)=F(n-1)+F(n-2)，求F(40)*/

//递归
int F(int n) {
	if (n == 0 || n == 1) return 1;
	else return  F(n - 1) + F(n - 2);
}
int main2501() {
	int n;
	printf("请输入n的值：\n");
	scanf_s("%d", &n);
	extern int F(int n);
	printf("F(%d)=%d\n", n, F(n));
	return 0;
}

//数组+指针
void Fibonacci(int* p, int n) {
	*p = *(p + 1) = 1;
	for (int i = 2; i <= n; i++) {
		*(p + i) = *(p + i - 1) + *(p + i - 2);
	}
}
int main2502() {
	int arr[100] = { 0 };
	int n;
	printf("请输入n的值：\n");
	scanf_s("%d", &n);
	void Fibonacci(int* arr, int lenth);
	Fibonacci(arr, n);
	printf("F(%d)=%d\n", n, arr[n]);
}