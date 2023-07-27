#include <stdio.h>

/*
 *题目：一个数如果恰好等于它的因子之和，这个数就称为"完数"。例如6=1＋2＋3. 编程找出1000以内的所有完数。
 *
 */

int q19_1() {
	int i, j, n, sum;

	for (n = 1; n <= 1000; n++) {
		sum = 0;
		int factors[200];
		j = 0;

		for (int i = 1; i < n; i++) {
			if (n % i == 0) {
				sum += i;
				factors[j++] = i;
			}
		}

		if (sum == n) {
			printf("%d=%d", n, factors[0]);
			for (int k = 1; k < j; k++) {
				printf("+%d", factors[k]);
			}
			printf("\n");
			fflush(stdout);
		}
	}

	return 0;
}
