#include<stdio.h>

static void Bubblesort(int arr[], int len) {//len为数组元素长度（个数）
	/*
	为什么多定义一个len？？？
	答：
		 此处的数组arr作为函数Bubblesort的参数退化成指
	  针，丢失函数的精度（即丢失了数组的所有值），故此时
	  的sizeof（arr）/sizeof（arr[0]）=4/4=1，所以
	  需从主函数传递数组长度len
	*/

	for (int i = 0; i < len - 1; i++) {
		//↑↑↑执行次数=执行（数组元素-1）行↑↑↑
		for (int j = 0; j < len - i - 1; j++) {
			//↑↑↑每行交换（数组元素-1-执行次数）个元素↑↑↑
			if (arr[j] > arr[j + 1]) {//指向首元素的指针+偏移量
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}

int main0201() {
	int arr[] = { 1,4,3,5,5,4,2,3,6,5 };
	int len = sizeof(arr) / sizeof(arr[0]);

	void Bubblesort(int arr, int len);//函数声明

	Bubblesort(arr, len);

	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
		printf("%d", arr[i]);
}