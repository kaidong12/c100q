#include <stdio.h>

/*
 *题目：利用递归方法求5!。
 *程序分析：递归公式：fn=fn_1*4!
 *
 */

int fact26(int n) {
	if (n == 0 || n == 1) {
		return 1;
	} else {
		return n * fact26(n - 1);
	}

}

int q26_1() {

	int i;
	int fact26(int);
	for (i = 1; i < 6; i++) {
		printf("%d!=%d\n", i, fact26(i));
	}

	return 0;
}
