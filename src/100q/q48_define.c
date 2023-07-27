#include <stdio.h>

/*
 *题目：宏#define命令练习3。
 *
 */

#define LAG >
#define SMA <
#define EQ ==

int q48() {
	int i, j;

	printf("请输入两个数字：\n");
	fflush(stdout);
	scanf("%d %d", &i, &j);

	if (i LAG j)
		printf("%d 大于 %d \n", i, j);
	else if (i EQ j)
		printf("%d 等于 %d \n", i, j);
	else if (i SMA j)
		printf("%d 小于 %d \n", i, j);
	else
		printf("没有值。\n");
	return 0;
}
