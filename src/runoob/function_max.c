#include <stdio.h>

/* 函数声明 */
int max(int num1, int num2);

int function_max() {
	/* 局部变量定义 */
	int a = 100;
	int b = 20;
	int ret;

	/* 调用函数来获取最大值 */
	ret = max(a, b);

	printf("Max value is : %d\n", ret);

	return 0;
}

/* 函数返回两个数中较大的那个数 */
int max(int num1, int num2) {
	/* 局部变量声明 */
	int result;

	if (num1 > num2)
		result = num1;
	else
		result = num2;

	return result;
}


