#include <stdio.h>

/*
 *题目：学习使用auto定义变量的用法。
 *
 *auto 存储类是所有局部变量默认的存储类。
 *
 */

int q42() {

	int i, num;
	num = 2;
	for (i = 0; i < 3; i++) {
		printf("num 变量为 %d \n", num);
		num++;
		{
			auto int num = 1;
			printf("内置模块 num 变量为 %d \n", num);
			num++;
		}
	}
	return 0;

}
