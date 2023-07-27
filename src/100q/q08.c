#include <stdio.h>

/*
 * 题目：输出9*9口诀。
 * 程序分析：
 * 分行与列考虑，共 9 行 9 列，i 控制行，j 控制列。
 */

int q08() {
	int i, j;

	for (i = 1; i <= 9; i++) {
		for (j = 1; j <= i; j++) {
			printf("%d x %d = %-3d", i, j, i * j);
			fflush(stdout);
		}
		printf("\n");
		fflush(stdout);
	}

	return 0;
}
