#include <stdio.h>

/*
 *
 *
 */

int qq() {
	int i, j, k, n, sum;

	for (i = 0; i <= 10; i++) {
		i = n / 100;
		j = (n / 10) % 10;
		k = n % 10;
		sum = i * i * i + j * j * j + k * k * k;

		if (n == sum) {
			printf("%d \n", n);
		}
	}

	return 0;
}
