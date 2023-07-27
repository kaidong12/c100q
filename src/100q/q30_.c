#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/*
 *题目：一个5位数，判断它是不是回文数。即12321是回文数，个位与万位相同，十位与千位相同。
 *程序分析：学会分解出每一位数。
 *
 */

static char str[5];
static char str2[5];
int q30_1() {
	int i, j, flag, n, sum;

	printf("输入位数n：");
	fflush(stdout);
	scanf("%d", &n);

//	char *str = (char*) malloc(n * sizeof(char)); // 动态数组内存分配

	printf("输入一个%d位数：", n);
	fflush(stdout);
	scanf("%s", str);
//	for (int k = 0; k < n; k++) {
//		scanf("%s", str);
//	}
//	getchar();

	for (int k = 0; k < n; k++) {
		printf("%s\n", str[k]);
	}

	n = strlen(str);
	flag = 1;
	if (n % 2 == 0) {
		for (i = 0; i < n / 2; i++) {
			if (str[i] != str[n - 1 - i]) {
				flag = 0;
				break;
			}
		}

	} else {
		for (i = 0; i < (n - 1) / 2; i++) {
			if (str[i] != str[n - 1 - i]) {
				flag = 0;
				printf("%c-%c\n", str[i], str[n - 1 - i]);
				break;
			}
		}
	}

	printf("%s\n", str);
//	if (str[0] == str[4] && str[1] == str[3])
	if (flag == 1)
		printf("这是一个回文数。\n");
	else
		printf("这不是回文数。\n");

	return 0;
}

#include <stdlib.h>
int q30_2() {
	int n;

	printf("输入一个5位数：");
	fflush(stdout);
	scanf("%s", str);

	int leng = strlen(str);
	int i = 0;
	while (leng > 0) {
		str2[i++] = str[leng - 1];
		leng--;
	}
	if (atoi(str) == atoi(str2)) {
		printf("这是一个回文数。\n");
	} else {
		printf("这不是回文数。\n");
		printf("%d %d", atoi(str), atoi(str2));
	}

	return 0;
}
