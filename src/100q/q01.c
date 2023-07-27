#include <stdio.h>

void q01() {

	int count = 0;

	printf("方法1\n");
	for (int i = 1; i <= 4; i++) {
		for (int j = 1; j <= 4; j++) {
			for (int k = 1; k <= 4; k++) {
				if (i != j && j != k && i != k) {
					count++;
					printf("%d: %d %d %d \n", count, i, j, k);
				}
			}
		}
	}

	count = 0;
	printf("\n\n\n方法2\n");
	for (int i = 1; i <= 4; i++) {
		for (int j = 1; j <= 4; j++) {
			if (i == j) {
				continue;
			}
			for (int k = 1; k <= 4; k++) {
				if (i == k || j == k) {
					continue;
				}

				count++;
				printf("%d: %d %d %d \n", count, i, j, k);

			}
		}
	}

	count = 0;
	printf("\n\n\n方法3\n");
	for (int i = 1; i <= 4; i++) {
		for (int j = 1; j <= 4; j++) {
			if (i == j) {
				continue;
			}
			for (int k = 1; k <= 4; k++) {
				if (i == k || j == k) {
					continue;
				}
				count++;
				printf("%d: %d %d %d \n", count, i, j, k);

			}

		}

	}

}
