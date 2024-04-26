#include<stdio.h>

void SelectionSort(int* arr, int len) {
	int i, j, min;
	for (int i = 0; i < len - 1; i++) {//外层控制待被交换的元素
		min = i;//使min指向待被交换元素的位置
		for (int j = i + 1; j < len; j++) {//内层控制遍历数组以找到最大值
			if (arr[j] < arr[min]) min = j;//找到最大值
		}
		int temp = arr[i];//与被交换元素交换位置，使数小的提前
		arr[i] = arr[min];
		arr[min] = temp;
	}
}

/*
1 2 3 4 5 6 7 8 9 10
  2 3 4 5 6 7 8 9 10
	3 4 5 6 7 8 9 10
	  4 5 6 7 8 9 10
		5 6 7 8 9 10
		  6 7 8 9 10
			7 8 9 10
			  8 9 10
				9 10
				  10

*/

int main23() {
	int arr[] = { 4,8,2,7,6,5,4,5,2,3 };

	void SelectionSort(int* arr, int len);
	SelectionSort(arr, sizeof(arr) / sizeof(int));

	for (int i = 0; i < sizeof(arr) / sizeof(int); i++) printf("%d", arr[i]);
}