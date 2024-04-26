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
/*缓冲区:
	1.程序与磁盘间的交互通过缓冲区
	2.缓冲区数据不会保存,则需更新缓存

//fflush(文件指针)	更新文件缓冲区,将缓冲区的数据立马写入文件中(写入硬盘中),但频繁和硬盘交互损伤硬盘,应规定周期或时间
		成功返回0,失败返回-1
*/
int main61()
{
	FILE* fp = fopen("D:/Work/Subject/C/代码/黑马程序员/文件/61.txt", "w+");
	if (!fp) return -1;

	char ch;
	while (1)
	{
		scanf("%c", &ch);
		if (ch == '@') break;

		fputc(ch, fp);
		//频繁和硬盘交互损伤硬盘
		fflush(fp);
	}

	fclose(fp);

	return EXIT_SUCCESS;
}