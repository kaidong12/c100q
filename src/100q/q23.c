#include <stdio.h>

/*
 *题目：打印出如下图案（菱形）。
 *
 */

int q23_1() {
	int i, j, n;

	for (i = 0; i <= 3; i++) {
		for (j = 0; j < 3 - i; j++)
			printf(" ");
		for (n = 1; n <= 2 * i + 1; n++)
			printf("*");
		printf("\n");
	}

	for (i = 2; i >= 0; i--) {
		for (j = 0; j < 3 - i; j++)
			printf(" ");
		for (n = 1; n <= 2 * i + 1; n++)
			printf("*");
		printf("\n");
	}

	return 0;
}

/*
 利用坐标系；

 横向 i 轴，左到右递增，纵向 j 轴，上到下递增。

 将所有的 * 取点得到一个坐标系上菱形的区域 ，菱形区域的四个顶点分别为（3,0）、（0,3）、（6,3）、（3.6），得到四条直线围成的区域，四条直线的 i，j 关系分别是：

 j = -i +3;
 j = -i +9;
 j = i -3;
 j = i +3;
 题所求 * 即为四条直线围成区域内以及边界上的点；该区域内的点满足以下条件：

 i + j >= 3 ;
 i + j <= 9 ;
 j - i >= -3 ;
 j - i <= 3 ;

 */

int q23_2(void) {
	int i, j;
	int n;
//	printf("我也不知道你要打印多大的图案：");
//	scanf("%d", &n);
	n = 7;
	for (i = 0; i < 2 * n + 1; i++) {
		for (j = 0; j < 2 * n + 1; j++) {
			if (i + j >= n && i + j <= 3 * n && j - i <= n && i - j <= n) {
				printf("*");
			} else
				printf(" ");
		}
		putchar(10);
	}
	return 0;
}
