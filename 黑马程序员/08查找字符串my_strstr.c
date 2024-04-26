#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<time.h>
#include<windows.h>
#include<ctype.h>
#include<conio.h>

char* my_strstr(char* src, char* dest) {
	char* fsrc = src;//用于遍历
	char* rsrc = src;//用于记录以回滚

	char* tdest = dest;
	while (*fsrc) {
		rsrc = fsrc;
		while (*fsrc == *tdest && *fsrc != '\0') {
			tdest++;
			fsrc++;
		}
		if (*tdest == '\0') return rsrc;

		//回滚
		fsrc = rsrc;
		tdest = dest;
		fsrc++;
	}
	return NULL;
}

int main08() {
	char src[] = "ll59llm56l546hello445656";
	char dest[] = "llm";
	char* my_srstr(char* src, char* dest);
	char* p = my_strstr(src, dest);

	printf("%s\n", p);
	return EXIT_SUCCESS;
}