#include <stdio.h>
/*
 * 题目：求s=a+aa+aaa+aaaa+aa...a的值，其中a是一个数字。例如2+22+222+2222+22222(此时共有5个数相加)，几个数相加有键盘控制。
 * 程序分析：关键是计算出每一项的值。
 *
 */
int q18_1() {
	int s = 0, a, n, t;
	printf("请输入 a 和 n：\n");
	fflush(stdout);
	scanf("%d%d", &a, &n);
	t = a;

	while (n > 0) {
		s += t;
		t = a + t * 10;

		n--;
	}

	printf("a+aa+...=%d\n", s);
	return 0;
}

#include <math.h>
int q18_2() {
	int i, a, n, sum = 0;
	printf("请输入 a 和 n：\n");
	fflush(stdout);
	scanf("%d %d", &a, &n);
	for (i = 0; i < n; i++) {
		int temp = a * pow(10, i) * (n - i);
		printf("temp is %d\n", temp);
		sum += temp;

	}
	printf("sum is %d\n", sum);
	return 0;
}

