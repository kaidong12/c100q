#include <stdio.h>

/*
 *题目：有一分数序列：2/1，3/2，5/3，8/5，13/8，21/13...求出这个数列的前20项之和。
 *程序分析：请抓住分子与分母的变化规律。
 *
 */

int q24_1() {
	int n;
	float a, b, sum, temp;
	a = 1;
	b = 2;
	sum = 2 / 1;

	for (n = 1; n < 20; n++) {
		temp = a;
		a = b;
		b = temp + b;

		printf("%f/%f\n", b, a);
		sum += b / a;

	}
	printf("%9.6f \n", sum);

	return 0;
}

int q24_2() {
	int i;
	float a[21];
	float s;
	a[0] = 1;
	a[1] = 2;
	s = a[1] / a[0];
	for (i = 2; i <= 20; i++) {
		a[i] = a[i - 1] + a[i - 2];
		s += a[i] / a[i - 1];
	}
	printf("s=%f\n", s);
	return 0;
}

#define c(a,b){a=a+b;b=a-b;}
int q24_3() {
	float a = 2;
	float b = 1;
	float sum = 0;
	int i;
	for (i = 1; i <= 20; i++) {
		sum += a / b;
		c(a, b);
	}
	printf("%9.6f", sum);
	return 0;
}
