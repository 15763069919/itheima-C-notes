#include<stdio.h>

int main05() {
	int a[] = { 1,2,3 };
	int b[] = { 4,5,6 };
	int c[] = { 7,8,9 };
	int* arr[] = { a,b,c };//�ַ��������ָ������

	printf("a[0]:%p\n", arr);
	printf("a[0]:%p\n", &arr[0]);

	/*printf("arr[0]:%d\n", arr[0][1]);
	printf("a[0]:%p\n", &a[0]);*/

	//�������С���һ��
	/*for (int i = 0; i < 3; i++) {//ָ������Ԫ�ظ���
		for (int j = 0; j < 3; j++) {//ָ��������Ԫ���������Ԫ�ظ���
			printf("%d\t", arr[i][j]);//arr[i]=a��b��c
		}
		puts("");
	}*/

	//�������С�������
	/*for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			printf("%d\t", *(arr[i] + j));
			//arr[i]��ָ������Ԫ��a,b,c����Ԫ�صĵ�ַ,
			//arr[i] + j��ָ������������ȫ��Ԫ�صĵ�ַ��
			//   *(arr[i] + j)��ָ������������ȫ��Ԫ��
		}
		puts("");
	}*/

	//�������С�������
	/*for (int i = 0; i < 3; i++) {
		printf("%d\t", *(*(arr+i)+j));
		//arr��arr[0]�ĵ�ַ��arr+i��a,b,c�ĵ�ַ��*(arr+i)��a,b,c��
		//*(arr+i)+j������a,b,c��Ԫ�صĵ�ַ��*(*(arr+i)+j)������a,b,c��Ԫ��
	}*/
}