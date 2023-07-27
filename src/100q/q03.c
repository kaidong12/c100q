#include <stdio.h>

/*
 * 题目：
 * 一个整数，它加上100后是一个完全平方数，再加上168又是一个完全平方数，请问该数是多少？
 *
 * 1、则：x + 100 = n*n, x + 100 + 168 = m*m
 * 2、计算等式：m*m - n*n = (m + n)(m - n) = 168
 *
 */

int q03_1(int n) {

	for (int i = 1; i <= n; i++) {
		int n1 = i + 100;
		int n2 = i + 268;
		for (int j = 1; j <= n1 / 2; j++) {
			if (j * j == n1) {
				for (int k = j; k <= n2 / 2; k++) {
					if (k * k == n2) {
						printf("%d \n", i);
						break;
					}
				}
			}
		}
	}
	return 0;
}

int q03_2() {
	int a, b;
	for (b = 13; b * b - (b - 1) * (b - 1) <= 168; b++) { //如果你不知道第一个大于168的平方数，可以设置b=1;
		for (a = 0; a < b; a++) {
			if (b * b - a * a == 168)
				printf("%d  ", a * a - 100);
		}
	}
}
