#include <stdio.h>

/*
 *题目：输入3个数a,b,c，按大小顺序输出。
 *程序分析：利用指针方法。
 *
 */

void swap66(int*, int*);

int q66_1() {
	int a, b, c;
	int *p1, *p2, *p3;

	printf("输入 a, b ,c:\n");
	fflush(stdout);
	scanf("%d %d %d", &a, &b, &c);

	p1 = &a;
	p2 = &b;
	p3 = &c;

	printf("p1 指针存储的地址: %p\n", p1);
	printf("p2 指针存储的地址: %p\n", p2);
	printf("p3 指针存储的地址: %p\n", p3);

	printf("a 变量的地址: %p\n", &a);
	printf("b 变量的地址: %p\n", &b);
	printf("c 变量的地址: %p\n", &c);

	printf("p1 指针变量的地址: %p\n", &p1);
	printf("p2 指针变量的地址: %p\n", &p2);
	printf("p3 指针变量的地址: %p\n", &p3);

	if (a < b) {
		swap66(p1, p2);
	}

	if (a < c) {
		swap66(p1, p3);
	}

	if (b < c) {
		swap66(p2, p3);
	}

	printf("%d>%d>%d\n", a, b, c);

	printf("p1 指针存储的地址: %p\n", p1);
	printf("p2 指针存储的地址: %p\n", p2);
	printf("p3 指针存储的地址: %p\n", p3);

	printf("p1 指针存储的地址中变量的值: %d\n", *p1);
	printf("p2 指针存储的地址中变量的值: %d\n", *p2);
	printf("p3 指针存储的地址中变量的值: %d\n", *p3);

	return 0;
}

void swap66(int *s1, int *s2) {

	printf("s1 变量存储的地址: %p\n", s1);
	printf("s2 变量存储的地址: %p\n", s2);

	int t;

	t = *s1;
	*s1 = *s2;
	*s2 = t;

}

void sort66(int *a, int *b, int *c) {
	int max, min, temp;

	max = *a > *b ? (*a > *c ? *a : *c) : (*b > *c ? *b : *c);
	min = *a < *b ? (*a < *c ? *a : *c) : (*b < *c ? *b : *c);
	temp = *a + *b + *c - max - min;

	printf("%d>%d>%d", max, temp, min);
}

int q66_2(void) {
	int a, b, c;

	printf("输入 a, b ,c:\n");
	fflush(stdout);
	scanf("%d%d%d", &a, &b, &c);

	sort66(&a, &b, &c);

	return 0;
}
