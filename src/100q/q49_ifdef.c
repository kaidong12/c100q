#include <stdio.h>

/*
 *题目：#if #ifdef和#ifndef的综合应用。
 *
 */

#include<stdio.h>

#define MAX
#define MAXIMUM(x,y) (x>y)?x:y
#define MINIMUM(x,y) (x>y)?y:x

int q49() {
	int a = 10, b = 20;

	printf("#define MAX\n");
#ifdef MAX
	printf("更大的数字是 %d\n", MAXIMUM(a, b));
#else
	printf("更小的数字是 %d\n", MINIMUM(a,b));
#endif

#ifndef MIN
	printf("更小的数字是 %d\n", MINIMUM(a, b));
#else
	printf("更大的数字是 %d\n", MAXIMUM(a,b));
#endif

	printf("#undef MAX\n");
#undef MAX
#ifdef MAX
	printf("更大的数字是 %d\n", MAXIMUM(a,b));
#else
	printf("更小的数字是 %d\n", MINIMUM(a, b));
#endif

	printf("#define MIN\n");
#define MIN
#ifndef MIN
	printf("更小的数字是 %d\n", MINIMUM(a,b));
#else
	printf("更大的数字是 %d\n", MAXIMUM(a, b));
#endif

	return 0;
}
