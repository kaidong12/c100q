#include <stdio.h>
/*
 *题目：打印出所有的"水仙花数"，所谓"水仙花数"是指一个三位数，其各位数字立方和等于该数本身。例如：153是一个"水仙花数"，因为153=1的三次方＋5的三次方＋3的三次方。
 *程序分析：
 *利用for循环控制100-999个数，每个数分解出个位，十位，百位。
 *
 */
int q13_1() {
	int i, j, k, n, sum;

	for (n = 100; n <= 999; n++) {
		i = n / 100;
		j = n / 10 % 10;
		k = n % 10;
		sum = i * i * i + j * j * j + k * k * k;

		if (n == sum) {
			printf("%d \n", n);
		}
	}

	return 0;
}

int q13_2() {
	int sum, x, y, z;
	for (x = 1; x < 10; x++)
		for (y = 0; y < 10; y++)
			for (z = 0; z < 10; z++) {
				sum = 100 * x + 10 * y + z;
				if (sum == x * x * x + y * y * y + z * z * z)
					printf("%-4d", sum);
			}
	return 0;
}
