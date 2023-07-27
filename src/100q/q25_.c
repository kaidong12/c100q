#include <stdio.h>
#include<stdlib.h>

/*
 *题目：求1+2!+3!+...+20!的和。
 *程序分析：此程序只是把累加变成了累乘。
 *
 */

int q25_1() {
	long double temp, sum, n;
	sum = 0;
	temp = 1;

	for (n = 1; n <= 2; n++) {
		temp = temp * n;
		sum = sum + temp;
		printf("累加累乘: %Lf\n", temp);
	}

	printf("累加累乘: %Lf\n", sum);
	return 0;
}
