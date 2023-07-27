#include <stdio.h>

/*
 * 题目：输入三个整数x,y,z，请把这三个数由小到大输出。
 * 程序分析：
 * 我们想办法把最小的数放到x上，先将x与y进行比较，如果x>y则将x与y的值进行交换，然后再用x与z进行比较，如果x>z则将x与z的值进行交换，这样能使x最小。
 *
 */

#define swap(a,b) {a=a+b;b=a-b;a=a-b;}

int q05() {
	int a, b, c, temp;

	printf("\n请输3个数（2015,12,10）\n");
	fflush(stdout);
	scanf("%d,%d,%d", &a, &b, &c);

	if (a > b) {
//		temp = a;
//		a = b;
//		b = temp;
		swap(a, b);
	}

	if (a > c) {
//		temp = a;
//		a = c;
//		c = temp;
		swap(a, c);
	}

	if (b > c) {
//		temp = b;
//		b = c;
//		c = temp;
		swap(b, c);
	}

	printf("%d, %d, %d", a, b, c);

	return 0;
}
