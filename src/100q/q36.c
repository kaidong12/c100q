#include <stdio.h>

/*
 *题目：求100之内的素数。
 *程序分析：质数（prime number）又称素数，有无限个。一个大于1的自然数，除了1和它本身外，不能被其他自然数整除。
 *
 */

int q36_1() {
	int i, n, c;
	c = 1;
	printf("2 ");
	for (i = 2; i <= 100; i++) {
		for (n = 2; n <= i / 2 + 1; n++) {
			if (i % n == 0) {
				break;
			}
		}

		if (n > i / 2 + 1) {
			printf("%d ", i);
			c++;
			if (c % 5 == 0)
				printf("\n");
		}
	}

	return 0;
}
