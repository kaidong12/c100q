#include <stdio.h>
#include <math.h>

/*
 *题目：判断 101 到 200 之间的素数。
 *程序分析：
 *判断素数的方法：用一个数分别去除 2 到 sqrt(这个数)，如果能被整除，则表明此数不是素数，反之是素数。
 *
 */

int q12() {
	int i, n, counter;

	for (n = 101; n <= 200; n++) {
		for (i = 2; i <= sqrt(n); i++) {
			if (n % i == 0) {
				break;
			}
		}

		if (i > sqrt(n)) {
			counter++;
			printf("%d ", n);
			if (counter % 5 == 0)
				printf("\n");
		}

	}

	return 0;
}
