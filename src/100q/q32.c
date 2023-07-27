#include <stdio.h>
#include<string.h>

/*
 *题目：删除一个字符串中的指定字母，如：字符串 "aca"，删除其中的 a 字母。
 *
 */

int q32_1() {

	char c[1000];
	printf("请输入原始字符串: \n");
	fgets(c, (sizeof c / sizeof c[0]), stdin);
	char d;
	printf("请输入要删除的字符: \n");
	scanf("%c", &d);
	char e[1000];
	int j = 0;
	getchar();
	int i = 0;

	while (i < strlen(c)) {
		if (c[i] != d) {
			e[j] = c[i];
			j++;
		}
		i++;
	}
	printf("删除后字符串: \n");
	for (int z = 0; z < j; z++) {
		printf("%c", e[z]);
	}

	printf("\n");

}

int q32_2(void) {
	char ch;
	int i, j;
	char s[] = "I want to learn English.";
	puts(s);
	printf("请输入要删除的字母: ");
	scanf("%c", &ch);

	for (i = 0; s[i] != '\0'; i++) {
		if (s[i] == ch) {
			for (j = i; s[j] != '\0'; j++) {
				s[j] = s[j + 1];
			}
			s[j] = '\0';
		}
	}

	puts(s);
	return 0;
}
