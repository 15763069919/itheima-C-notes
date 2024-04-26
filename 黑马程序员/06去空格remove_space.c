#include<stdio.h>

int main06() {
	char ch[] = "  h   e  l  l o w  o    r l    d   ";

	void remove_space(char* ch);
	remove_space(ch);

	printf("%s", ch);
}

void remove_space(char* ch) {
	char* ftemp = ch;//遍历所有字符
	char* rtemp = ch;//记录有效字符

	while (*ftemp) {
		if (*ftemp != ' ') {//遍历到有效字符时
			*rtemp = *ftemp;//传递给*rtemp
			rtemp++;//移动后指针
		}
		ftemp++;//移动后指针
	}
	*rtemp = 0;//加\0
}