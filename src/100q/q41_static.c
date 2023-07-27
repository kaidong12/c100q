#include <stdio.h>

/*
 *题目：学习 static 定义静态变量的用法。
 *
 *在 C 语言中，static 关键字用于声明静态变量。静态变量与普通变量不同，它们的生存期和作用域是不同的。
 *静态变量在声明时被初始化，只被初始化一次，而且在整个程序的生命周期内都保持存在。
 *静态变量在声明时被初始化，只被初始化一次，而且在整个程序的生命周期内都保持存在。
 *静态变量在声明时被初始化，只被初始化一次，而且在整个程序的生命周期内都保持存在。
 *在函数内声明的静态变量只能在该函数内访问，而在函数外声明的静态变量则只能在该文件内访问。
 */

void foo() {
	static int x = 0;
	x++;
	printf("%d\n", x);
}

int q41() {
	foo();  // 输出 1
	foo();  // 输出 2
	foo();  // 输出 3
	return 0;
}