#include <stdio.h>

/*
 *题目：一球从100米高度自由落下，每次落地后反跳回原高度的一半；再落下，求它在第10次落地时，共经过多少米？第10次反弹多高？
 *
 */

int q20_1() {
	int n;
	float h, sum;
	h = 100;
	sum = 0;

	for (n = 1; n <= 10; n++) {
		h = h / 2;
		sum += 3 * h;
		printf("第%d次, 高度: %f, 轨迹: %f\n", n, h, sum);
	}

	printf("第10次, 反弹高度: %f, 落地时轨迹: %f\n", h, sum - h);

	return 0;
}

int q20_2() {
	float s, h;
	h = 100;
	for (int i = 1; i <= 10; i++) {
		s = s + h;  // 下落
		h = h / 2;
		s = s + h;  // 反弹
	}
	s = s - h;      // 去掉最后一次反弹
	printf("第10次落地时，共经过%f米，第10次反弹高%f米\n", s, h);
	return 0;
}
