#include <stdio.h>

int pointer_demo_1() {
	int var = 20; /* 实际变量的声明 */
	int *ip; /* 指针变量的声明 */

	ip = &var; /* 在指针变量中存储 var 的地址 */

	/* %i */
	printf("Size of var (int): %i bytes\n", sizeof(var));
	printf("Size of *ip (int): %i bytes\n", sizeof(ip));

	/* %d */
	printf("Size of var (int): %d bytes\n", sizeof(var));
	printf("Size of *ip (int): %d bytes\n", sizeof(ip));

	printf("=====使用&可以获得变量的地址=====\n");
	printf("&var : %p\n", &var);

	/* 在指针变量中存储的地址 */
	printf("=====在指针变量中存储的是变量的地址=====\n");
	printf("ip : %p\n", ip);

	printf("=====在指针变量中存储的是变量的地址+1=====\n");
	printf("ip : %p\n", ip + 1);

	/* 使用指针访问值 */
	printf("=====使用*可以访问地址中的值=====\n");
	printf("*ip : %d\n", *ip);

	printf("=====*&先获得变量的地址，然后再访问地址中的值=====\n");
	printf("*&var : %d\n", *&var);

	return 0;
}
