#include <stdio.h>

/*
 *题目：学习使用register定义变量的方法。
 *
 *register 存储类用于定义存储在寄存器中而不是 RAM 中的局部变量。
 *
 */

int q45() {
	register int i;
	register int tmp = 0;

	for (i = 1; i <= 100; i++)
		tmp += i;
	printf("总和为 %d\n", tmp);

	return 0;
}
