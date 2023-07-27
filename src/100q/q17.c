#include <stdio.h>

/*
 * 题目：输入一行字符，分别统计出其中英文字母、空格、数字和其它字符的个数。
 * 程序分析：利用while语句,条件为输入的字符不为'\n'。
 *
 */
int q17_1() {

	char c;

	int letters = 0, digits = 0, spaces = 0, others = 0;
	printf("请输入一些字母：\n");
	fflush(stdout);
	while ((c = getchar()) != '\n') {
		if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
			letters++;
		else if (c >= '0' && c <= '9')
			digits++;
		else if (c == ' ')
			spaces++;
		else
			others++;

	}

	printf("字母=%d,数字=%d,空格=%d,其他=%d\n", letters, digits, spaces, others);

	return 0;
}

#include <ctype.h>
#define N 100
int q17_2() {
	char c1;
	char str[N];
	int lower = 0, upper = 0, space = 0, digit = 0, other = 0;
	printf("请输入一些字母：\n");
	fflush(stdout);
	gets(str);

	int i = 0;
	while (str[i]) {
		c1 = str[i];
		i++;
		if (islower(c1))
			lower++;
		else if (isupper(c1))
			upper++;
		else if (isspace(c1))
			space++;
		else if (isdigit(c1))
			digit++;
		else
			other++;
	}
	printf("大写字母=%d,小写字母=%d,数字=%d,空格=%d,其他=%d\n", upper, lower, digit, space,
			other);
	return 0;
}
