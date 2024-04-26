#pragma warning(disable:6387)//使用fgets前应判断指针为空NULL
#pragma warning(disable:6031)//scanf
#pragma warning(disable:6001)//变量初始化
#define _CRT_SECURE_NO_WARNINGS
#define _CRT_SECURE_NO_DEPRECATE
#define _CRT_NONSTDC_NO_DEPRECATE
//D:/Work/Subject/C/代码/黑马程序员/文件/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<time.h>
#include<windows.h>
#include<ctype.h>
#include<conio.h>

//sscanf(字符串地址,"内容及占位符",变量地址)//读取字符串给变量   eg:sscanf(p, "%d%c%d", &a, &c, &b);

int main5002()
{
	FILE* fp1 = fopen("D:/Work/Subject/C/代码/黑马程序员/文件/50四则运算上.txt", "r");
	FILE* fp2 = fopen("D:/Work/Subject/C/代码/黑马程序员/文件/50四则运算结果.txt", "w");
	if (!fp1 || !fp2) {
		printf("打开文件失败\n");
		return -1;
	}
	int a, b, sum;
	char c;
	char* p = (char*)malloc(sizeof(char) * 20);

	//若不知道文件行数应使用feof(fp1)//到结尾返回非0,或使用EOF
	//但本题已知100行,则可直接使用for循环:
	for (int i = 0; i < 100; i++) {
		memset(p, 0, 20);//重置
		fgets(p, 20, fp1);//读取文件给字符串
		sscanf(p, "%d%c%d", &a, &c, &b);//读取字符串给变量
		switch (c)
		{
		case '+':sum = a + b; break;
		case '-':sum = a - b; break;
		case '*':sum = a * b; break;
		case '/':sum = a / b; break;
		}

		memset(p, 0, 20);//重置
		sprintf(p, "%d%c%d=%d\n", a, c, b, sum);
		fputs(p, fp2);
	}

	free(p);
	fclose(fp1);
	fclose(fp2);
	return EXIT_SUCCESS;
}