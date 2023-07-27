#include <stdio.h>
#include <string.h>

/*
 *题目：字符串反转，如将字符串 "www.runoob.com" 反转为 "moc.boonur.www"。
 *
 */

int q35_1() {
	char c[1000];
	fgets(c, (sizeof c / sizeof c[0]), stdin);
	int d = strlen(c);
	//printf("%d\n",d);
	char a[1000];
	int j = 0;
	for (int i = d - 1; i >= 0; i--) {
		a[i] = c[j];
		j++;
	}
	puts(a);
	return 0;
}

#include<stdio.h>
#include<string.h>

void reverse(char *str) {
	int len;
	char tmp;
	char *begin, *end;
	len = strlen(str); //获取字符串长度]
	begin = str;       //指针begin指向字符串首地址
	end = str + len - 1;     //指针end指向字符串尾地址
	while (begin < end) {
		tmp = *begin;
		*begin = *end;
		*end = tmp;
		begin++;
		end--;
	}
}

int q35_2() {
	char string[] = "www.runoob.com";
	reverse(string);
	puts(string);
	return 0;
}
