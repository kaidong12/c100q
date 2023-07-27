#include <stdio.h>

/*
 *题目：利用递归函数调用方式，将所输入的5个字符，以相反顺序打印出来。
 *
 */

void fun(char *s, int length) {
	if (length >= 1) {
		printf("%c\n", s[length - 1]);
		fun(s, length - 1);
	}
}

int q27_1() {
	char *s = "hello";
	int length = 5;
	fun(s, length);
	return 0;
}

void f() {
	char ch;
	if ((ch = getchar()) != '\n') {
		printf("input\n");
		f();
	}
	if (ch != '\n') {
		printf("\noutput: ");
		printf("%c", ch);
	} else {
		printf("===last===\n");
	}
}

void q27_2() {
	printf("请输入字符: ");
	fflush(stdout);
	f();
}
