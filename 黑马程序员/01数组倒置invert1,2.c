#include<stdio.h>

//ǰ��˫ָ��i,j��
int main01()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int i = 0;
	int j = sizeof(arr) / sizeof(arr[0]) - 1;//�±����=�������-1
	int* p = arr;

	printf("���鵹��ǰ:\n");
	for (int a = 0; a < sizeof(arr) / sizeof(arr[0]); a++)
		printf("%d ", *p++);
	puts("");

	//���鵹��
	while (i < j) {//���ͷ���Ҽ�ͷ���ʱ
		int temp = arr[i];
		arr[i] = arr[j];
		arr[j] = temp;
		i++;//���ͷ����
		j--;//�Ҽ�ͷ����
	}

	p = arr;
	printf("���鵹�ú�:\n");
	for (int a = 0; a < sizeof(arr) / sizeof(arr[0]); a++)
		printf("%d ", *p++);

	p = NULL;
}

void invert1(int* arr, int len) {//������ʽ
	int i = 0, j = len - 1;//��ʼ��˫ָ��
	while (i < j) {
		int temp = arr[i];
		arr[i] = arr[j];
		arr[j] = temp;
		i++;
		j--;
	}
}

void invert2(int* arr, int len) {//ָ����ʽ
	int* btemp = arr;
	int* ftemp = arr + len - 1;
	while (btemp < ftemp) {
		int temp = *btemp;
		*btemp = *ftemp;
		*ftemp = temp;
		btemp++;
		ftemp--;
	}
}

int main0102() {
	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };

	void invert1(int* arr, int len);
	void invert2(int* arr, int len);

	invert1(arr, sizeof(arr) / sizeof(int));
	//invert2(arr, sizeof(arr) / sizeof(int));

	for (int i = 0; i < sizeof(arr) / sizeof(int); i++) printf("%d", arr[i]);
}