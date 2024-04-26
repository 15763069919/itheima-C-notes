#include<stdio.h>

int main05() {
	int a[] = { 1,2,3 };
	int b[] = { 4,5,6 };
	int c[] = { 7,8,9 };
	int* arr[] = { a,b,c };//字符串数组或指针数组

	printf("a[0]:%p\n", arr);
	printf("a[0]:%p\n", &arr[0]);

	/*printf("arr[0]:%d\n", arr[0][1]);
	printf("a[0]:%p\n", &a[0]);*/

	//遍历所有【法一】
	/*for (int i = 0; i < 3; i++) {//指针数组元素个数
		for (int j = 0; j < 3; j++) {//指针数组中元素中数组的元素个数
			printf("%d\t", arr[i][j]);//arr[i]=a或b或c
		}
		puts("");
	}*/

	//遍历所有【法二】
	/*for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			printf("%d\t", *(arr[i] + j));
			//arr[i]是指针数组元素a,b,c的首元素的地址,
			//arr[i] + j是指针数组中数组全部元素的地址，
			//   *(arr[i] + j)是指针数组中数组全部元素
		}
		puts("");
	}*/

	//遍历所有【法三】
	/*for (int i = 0; i < 3; i++) {
		printf("%d\t", *(*(arr+i)+j));
		//arr是arr[0]的地址，arr+i是a,b,c的地址，*(arr+i)是a,b,c，
		//*(arr+i)+j是数组a,b,c中元素的地址，*(*(arr+i)+j)是数组a,b,c中元素
	}*/
}