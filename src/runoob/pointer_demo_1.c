#include <stdio.h>

int pointer_demo_1() {
	int var = 20; /* 实际变量的声明 */
	int *ip; /* 指针变量的声明 */

	ip = &var; /* 在指针变量中存储 var 的地址 */

	/* %i */
	printf("Type of x: %i bytes\n", sizeof(ip));

	printf("var 变量的地址: %p\n", &var);

	/* 在指针变量中存储的地址 */
	printf("ip 变量存储的地址: %p\n", ip);

	/* 使用指针访问值 */
	printf("*ip 变量的值: %d\n", *ip);

	printf("*ip 变量的值: %d\n", *&var);

	return 0;
}
