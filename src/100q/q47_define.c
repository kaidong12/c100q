#include <stdio.h>

/*
 *题目：宏#define命令练习2。
 *
 *注意放在一行里
 *注意放在一行里
 *注意放在一行里
 *
 */

#define exchange(a,b) { int t;t=a;a=b;b=t; } //注意放在一行里

int q47() {
	int x = 10;
	int y = 20;

	printf("x=%d; y=%d\n", x, y);

	exchange(x, y);
	printf("x=%d; y=%d\n", x, y);

	return 0;
}
