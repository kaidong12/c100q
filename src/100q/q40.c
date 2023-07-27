#include <stdio.h>

/*
 *题目：将一个数组逆序输出。
 *程序分析：用第一个与最后一个交换。
 *
 */
#define N 10

int q40_1() {
	int a[N] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int i, t;
	printf("原始数组是:\n");

	for (i = 0; i < N; i++) {
		printf("%d ", a[i]);
	}

	printf("逆序数组是:\n");
	for (i = N - 1; i >= 0; i--) {
		printf("%d ", a[i]);
	}

	return 0;
}

int q40_2() {
	int a[N] = { 0, 1, 2, 3, 4, 5, 6, 7, 80, 90 };
	int i, t;
	printf("原始数组是:\n");

	for (i = 0; i < N; i++) {
		printf("%d ", a[i]);
	}

//	if (N % 2 == 0) {
	for (i = 0; i < N / 2; i++) {
		a[i] ^= a[N - 1 - i];
		a[N - 1 - i] ^= a[i];
		a[i] ^= a[N - 1 - i];
	}

//	} else {
//		for (i = 0; i < (N + 1) / 2; i++) {
//			a[i] ^= a[N - 1 - i];
//			a[N - 1 - i] ^= a[i];
//			a[i] ^= a[N - 1 - i];
//		}
//
//	}

	printf("逆序数组是:\n");
	for (i = 0; i < N; i++) {
		printf("%d ", a[i]);
	}

}
