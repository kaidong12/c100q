#include <stdio.h>

/*
 *题目：学习使用按位异或 ^。
 *程序分析：0^0=0; 0^1=1; 1^0=1; 1^1=0 。
 *
 */

int q53() {
	int a, b;
	a = 7;
//	a = 077;

	b = a ^ 3;
	printf("b 的值为 %d \n", b);
	b ^= 7;
	printf("b 的值为 %d \n", b);

	return 0;
}
