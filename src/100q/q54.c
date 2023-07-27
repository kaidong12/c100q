#include <stdio.h>

/*
 *题目：学习使用按位取反~。
 *程序分析：~0=-1; ~1=-2;
 *
 */

int q54() {
	int a, b;

	a = 234;
	b = ~a;

	printf("a 的按位取反值为（十进制） %d \n", b);
	a = ~a;
	printf("a 的按位取反值为（十六进制） %x \n", a);

	return 0;
}
