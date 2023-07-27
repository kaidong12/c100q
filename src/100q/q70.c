#include <stdio.h>

/*
 *题目：写一个函数，求一个字符串的长度，在 main 函数中输入字符串，并输出其长度。
 *
 */

int q70_1() {
	int i, j, k, n, sum;
	char s[100];
	char *p;
	p = s;
	n = 0;

	printf("input the string\n");
	fflush(stdout);

	scanf("%s", s);

//	for (i = 0; i < 100; i++) {
//		if (s[i] == '\0')
//			break;
//		n++;
//	}

	while (*p != '\0') {
		n++;
		p++;
	}

	printf("length of string: %d \n", n);

	return 0;
}

int q70_2(void) {
	char c;
	int count = 0;

	printf("请输入一串字符：\n");
//	fflush(stdout);

	while ((c = getchar()) != '\n') {
		++count;
	}

	printf("该字符串的长度为：%d\n", count);

	return 0;
}
