#include<stdio.h>

int main24() {
	int year = 0, month = 0, day = 0, date = 0;
	puts("please input the year,month,day:");

	scanf_s("%d%d%d", &year, &month, &day);
	void myreturn(int year, int month, int day, int* date);//函数声明
	myreturn(year, month, day, &date);//函数调用

	printf("%d", date);

	return date;
}
//1,3,5,7,8,10,12 -> 31
//4,6,9,11 -> 30
//2 -> ping 28 run 29
void myreturn(int year, int month, int day, int* date) {
	int arr[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 }, i = 0, date1 = 0;//定义月份天数数组

	if (year % 400 == 0 || year % 4 == 0 && year % 100 != 0) {
		puts("闰年");
		for (i = 0; i < month - 1; i++) date1 = date1 + arr[i];
		date1 = date1 + day + 1;
	}

	else {//int arr[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 }
		puts("平年");
		for (i = 0; i < month - 1; i++)
			date1 = date1 + arr[i];
		date1 = date1 + day;
	}

	*date = date1;
}