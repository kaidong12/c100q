#include <stdio.h>

/*
 *题目：学习使用如何调用外部函数。
 *
 */

int a, b, c;
void add();

int q44() {
	a = b = 4;
	add();
	printf("c 的值为 %d\n", c);  //7
	return 0;
}

void add() {
	int a;
	a = 3;
	c = a + b;
}
