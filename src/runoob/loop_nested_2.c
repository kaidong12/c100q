#include <stdio.h>

int loop_nested_2() {
	int i = 1, j;
	while (i <= 5) {
		j = 1;
		while (j <= i) {
			printf("%d ", j);
			j++;
		}
		printf("\n");
		i++;
	}

	int a = 1;
	do {
		int b = 1;
		do {
			printf("*");
			b++;
		} while (b <= a);

		a++;
		printf("\n");
	} while (a <= 5);

	return 0;
}
