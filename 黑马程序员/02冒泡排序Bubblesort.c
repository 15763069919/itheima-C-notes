#include<stdio.h>

static void Bubblesort(int arr[], int len) {//lenΪ����Ԫ�س��ȣ�������
	/*
	Ϊʲô�ඨ��һ��len������
	��
		 �˴�������arr��Ϊ����Bubblesort�Ĳ����˻���ָ
	  �룬��ʧ�����ľ��ȣ�����ʧ�����������ֵ�����ʴ�ʱ
	  ��sizeof��arr��/sizeof��arr[0]��=4/4=1������
	  ����������������鳤��len
	*/

	for (int i = 0; i < len - 1; i++) {
		//������ִ�д���=ִ�У�����Ԫ��-1���С�����
		for (int j = 0; j < len - i - 1; j++) {
			//������ÿ�н���������Ԫ��-1-ִ�д�������Ԫ�ء�����
			if (arr[j] > arr[j + 1]) {//ָ����Ԫ�ص�ָ��+ƫ����
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

	void Bubblesort(int arr, int len);//��������

	Bubblesort(arr, len);

	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
		printf("%d", arr[i]);
}