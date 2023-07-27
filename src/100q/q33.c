#include <stdio.h>

/*
 *题目：判断一个数字是否为质数。
 *程序分析：质数（prime number）又称素数，有无限个。一个大于1的自然数，除了1和它本身外，不能被其他自然数整除。
 *
 */

#define BOOL int
#define TRUE 1
#define FALSE 0

int q33_1() {
	int i, k, n, sum;

	BOOL flag = TRUE;

	printf("请输入一个数字\n");
	fflush(stdout);
	scanf("%d", &i);

	for (n = 2; n <= i / 2 + 1; n++) {
		if (i % n == 0) {
			flag = FALSE;
			break;
		}
	}

	if (flag || i == 1 || i == 2) {
		printf("%d 是素数\n", i);
	} else {
		printf("%d 不是素数\n", i);
	}
	return 0;
}
