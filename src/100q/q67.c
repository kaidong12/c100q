#include <stdio.h>

/*
 *题目：输入数组，最大的与第一个元素交换，最小的与最后一个元素交换，输出数组。
 *
 */

void swap67(int *s1, int *s2) {

	printf("s1 变量存储的地址: %p\n", s1);
	printf("s2 变量存储的地址: %p\n", s2);

	int t;

	t = *s1;
	*s1 = *s2;
	*s2 = t;

}

int q67_1() {
	int i, t, min, max, n;

//	int s[20];
//	printf("设置数组长度(<20):");
//	scanf("%d", &n);
//	printf("输入 %d 个元素:\n", n);
//	for (i = 0; i < n; i++)
//		scanf("%d", &s[i]);

	int a[] = { 23, 34, 12, 32, 45, 56, 67, 43, 24, 66 };
	n = sizeof(a) / sizeof(a[0]);
	min = n - 1;
	max = 0;

	for (i = 1; i < n; i++) {

		if (a[i] > a[max]) {
			max = i;
		}

		if (a[i] < a[min]) {
			min = i;
		}
	}

//	t = a[max];
//	a[max] = a[0];
//	a[0] = t;
//
//	t = a[min];
//	a[min] = a[n - 1];
//	a[n - 1] = t;

	swap67(&a[max], &a[0]);
	swap67(&a[min], &a[n - 1]);

	for (i = 0; i < n; i++) {
		printf("%d ", a[i]);
	}
	printf("\n");

	return 0;
}
