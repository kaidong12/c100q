#include <stdio.h>

/*
 *题目：给一个不多于5位的正整数，要求：一、求它是几位数，二、逆序打印出各位数字。
 *程序分析：学会分解出每一位数，如下解释。
 *
 */

int q29_1() {
	int counter, n, bt;
	n = 987654321;
	counter = 0;

	while (n > 1) {
		bt = n % 10;
		printf("%d ", bt);
		n = n / 10;
		counter++;

	}

	printf("\n");
	printf("一共有： %d位\n", counter);
	return 0;
}

#include<string.h>

void Reverse_Output(int n);

static char str[5];
int q29_2() {
	printf("请输入你的整数:");
	fflush(stdout);
	scanf("%s", str);
	printf("这是一个 %lu 位数。\n", strlen(str));
	printf("逆序为:");
	Reverse_Output(strlen(str));
	return 0;
}
void Reverse_Output(int n) {
	while (n > 0) {
		printf("%c ", str[--n]);
	}
}

