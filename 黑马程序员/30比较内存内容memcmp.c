#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<time.h>
#include<windows.h>
#include<ctype.h>
#include<conio.h>
//memcmp~~strcmp, 但memcmp只看字节大小，不管\0
int main30(void) {
	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
	int arr2[] = { 1,2,3,4,5 };

	char arr3[] = "hello\0 world";
	char arr4[] = "hello\0 world";

	int value1 = memcmp(arr1, arr2, 20);
	int value2 = memcmp(arr3, arr4, 13);

	printf("%d\n", value1);
	printf("%d\n", value2);

	return EXIT_SUCCESS;
}