/*
 ============================================================================
 Name        : c100q.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void sort(int arr[], int n) { //冒泡排序
	int i, j, temp;
	for (i = 0; i < n - 1; i++) {
		for (j = 0; j < n - i - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}

/*
 * Explanation:
 * This code generates an error as the function fun() receives an array parameter ‘arr[]’ and tries to find out the number of elements in arr[] using sizeof operator.
 * In C, array parameters are treated as pointers (See this for details).
 * So, the expression sizeof(arr)/sizeof(arr[0]) becomes sizeof(int *)/sizeof(int) which results in 2 (size of int* is 8 bytes because its an pointer and pointer occupies the 8 bytes of memory and int is 4) and the for loop inside fun() is executed only two times irrespective of the size of the array.
 * Therefore, sizeof should not be used to get a number of elements in such cases.
 *
 * */
void sort1(int arr[], int n) {
	int i, j, temp;

	for (i = n - 1; i > 0; i--) {
		for (j = 0; j < i; j++) {
			if (arr[j] > arr[j + 1]) {
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}

int main_2() {
	int arr[5], n = 5, i;
	printf("Enter 5 numbers: ");
	fflush(stdout);
	for (i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	n = sizeof(arr) / sizeof(arr[0]);
	printf("number of elements in array: %d \n", n);
	sort(arr, n);

	printf("Sorted array: ");
	for (i = 0; i < n; i++) {
		printf("%d ", arr[i]);
	}
	return 0;
}

int main_1() {
	char c;
	printf("%s", "please input a char:\n");
	fflush(stdout);
	scanf("%c[\n]", &c);
	char c2Ascii = toascii(c) + 35;
	printf("the original char is: %c, and the convert char is: %c\n", c,
			c2Ascii);
	return 0;
}

int main_0(void) {
	/* prints !!!Hello World!!! */
	puts("!!!Hello World!!!");
	return EXIT_SUCCESS;
}
