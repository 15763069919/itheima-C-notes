#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<time.h>
#include<windows.h>
#include<ctype.h>
#include<conio.h>

//strtok(字符串名（字符串首地址），标志位)
// 返回字符串起点到标志位（不包含标志位）的字符串，若没找到标志位则返回整个字符串
//strtok会破坏原字符串，会用\0替换

int main2001() {
	char ch[] = "www.itcast.cn";

	//eg：若strtok(ch,"."),截取后字符串为www\0itcast.cn，返回www
	char* p = strtok(ch, ".");//www\0itcast.cn
	printf("%s\n", p);
	//继续截取：
	//strtok(NULL,".")  NULL为\0的地址，截取后字符串为www\0itcast\0cn,返回itcast
	p = strtok(NULL, ".");//www\0itcast\0cn
	printf("%s\n", p);

	p = strtok(NULL, ".");//找不到".",打印整个字符串（从NULL开始）
	printf("%s\n", p);

	return EXIT_SUCCESS;
}

//要求：截取出qq号，且保留邮箱
int main2002(void) {
	char ch[] = "123456@qq.com";
	char str[100] = { 0 };

	//备份邮箱号（字符串拷贝）
	strcpy(str, ch);
	//截取qq号
	char* p = strtok(ch, "@");
	printf("qq:%s\n", p);
	//截取邮箱类型
	p = strtok(NULL, ".");
	printf("邮箱类型:%s\n", p);
}

int main2003(void) {
	char ch[] = "你瞅啥\nchounizadi\nzaichouyigeshishi\nduibuqidagewocuole\nguawazi";
	char* p = strtok(ch, "\n");

	while (p)//利用循环多次分割截取
	{
		printf("%s\n", p);
		p = strtok(NULL, "\n");
	}

	return 0;
}