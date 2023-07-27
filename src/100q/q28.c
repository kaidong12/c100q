#include <stdio.h>

/*
 *题目：有5个人坐在一起，问第五个人多少岁？他说比第4个人大2岁。问第4个人岁数，他说比第3个人大2岁。问第三个人，又说比第2人大两岁。问第2个人，说比第一个人大两岁。最后问第一个人，他说是10岁。请问第五个人多大？
 *程序分析：利用递归的方法，递归分为回推和递推两个阶段。要想知道第五个人岁数，需知道第四人的岁数，依次类推，推到第一人（10岁），再往回推。。
 *
 */

int get_age(int n) {
	int i, y;

	if (n == 1) {
		return y = 10;
	} else {
		y = get_age(n - 1) + 2;
	}

}

int q28_1() {
	int n = 5;
	printf("age is: %d\n", get_age(n));
	return 0;
}

int q28_2() {
	int age = 10, x2;
	for (int i = 5; i > 0; i--) {
		if (i == 5) {
			age = 10;
		} else {
			age = age + 2;
		}
	}
	printf("age is: %d", age);
	return 0;
}
