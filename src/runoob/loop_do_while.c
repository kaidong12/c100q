#include <stdio.h>

int loop_do_while() {
	/* 局部变量定义 */
	int a = 10;

	/* do 循环执行，在条件被测试之前至少执行一次 */
	do {
		printf("a 的值： %d\n", a);
		a++;
	} while (a < 20);

	return 0;
}
