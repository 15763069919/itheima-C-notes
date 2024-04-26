#include<stdio.h>

void my_strcpy1(char* dest, char* ch)//（赋值，取值）
{
	int i = 0;
	while (ch[i]) //<<====>>while(ch(i)!='\0')
	{
		dest[i] = ch[i];
		i++;
	}
	dest[i] = 0;//字符数组加\0变为字符串
}

void my_strcpy2(char* dest, char* ch)//（赋值，取值）
{
	int i = 0;
	while (*(ch + i))
	{
		*(dest + i) = *(ch + i);
		i++;
	}
	*(dest + i) = 0;
}

void my_strcpy3(char* dest, char* ch)
{
	int i = 0;
	while (*ch) {
		*dest = *ch;
		dest++;//指针+1，相当于下一个数组元素
		ch++;
	}
	*dest = 0;
}

void my_strcpy4(char* dest, char* ch)
{
	while (*dest++ = *ch++);
}

int main0404() {
	char ch[] = "hello world";
	char dest[100];

	void my_strcpy4(char* dest, char* ch);
	my_strcpy4(dest, ch);

	printf("dest:%s\n", dest);
}