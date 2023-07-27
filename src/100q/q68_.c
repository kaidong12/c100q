#include <stdio.h>

/*
 *题目：有n个整数，使其前面各数顺序向后移m个位置，最后m个数变成最前面的m个数。
 *
 */

int q68_1() {
	int i, j, k, n, m, sum;

	int a[] = { 23, 34, 12, 32, 45, 56, 67, 43, 24, 66, 1111 };
	n = sizeof(a) / sizeof(a[0]);
	for (i = 0; i < n; i++) {
		printf("%d ", a[i]);
	}
	printf("\n");

	printf("what is the value of m? ");
	fflush(stdout);
	scanf("%d", &m);

	int b[m];
	for (i = m - 1; i >= 0; i--) {
		b[i] = a[n - m + i];
	}

	for (i = 0; i < m; i++) {
		printf("%d ", b[i]);
	}
	printf("\n");

	for (i = n - m - 1; i >= 0; i--) {
		a[m + i] = a[i];
	}

	for (i = 0; i < m; i++) {
		a[i] = b[i];
	}

	for (i = 0; i < n; i++) {
		printf("%4d ", a[i]);

	}
	printf("\n");

	return 0;
}

#include <stdlib.h>
void print_arr(int array[], int n);
void move(int array[], int n, int offset);

int q68_2() {
//	int arr[20];
	int i, n, offset;
//	//输入数组大小和数组内容
//	printf("Total numbers?\n");
//	scanf("%d", &n);
//	printf("Input %d numbers.\n", n);
//	for (i = 0; i < n; i++)
//		scanf("%d", &arr[i]);

	int arr[] = { 23, 34, 12, 32, 45, 56, 67, 43, 24, 66, 77, 88, 99, 2222 };
	n = sizeof(arr) / sizeof(arr[0]);

	//输入滚动偏移量
	printf("Set your offset.\n");
	fflush(stdout);
	scanf("%d", &offset);
	printf("Offset is %4d.\n", offset);

	//打印滚动前数组
	print_arr(arr, n);

	//滚动数组并打印
	move(arr, n, offset);

	print_arr(arr, n);
}

//打印数组
void print_arr(int array[], int n) {
	int i;
	for (i = 0; i < n; ++i)
		printf("%4d ", array[i]);
	printf("\n");
}

//滚动数组
void move(int array[], int n, int offset) {
	int *p, *arr_end;
	arr_end = array + n;      //数组最后一个元素的下一个位置
	int last;

	//滚动直到偏移量为0
	while (offset) {
		last = *(arr_end - 1); //保存最后一个数字
		for (p = arr_end - 1; p != array; --p)   //数组中其他数字向右滚动一位
			*p = *(p - 1);
		*array = last; //最后一个数字放到最前面
		--offset;
	}
}

#define N 100

int q68_3() {
	int i, n, m, j, k;
//	printf("请输入数组元素个数：n\n");
//	scanf("%d", &n);
//	printf("请输入一个数组n个元素\n");
//	for (i = 0; i < n; i++)
//		scanf("%d", &a[i]);

	int a[N] = { 23, 34, 12, 32, 45, 56, 67, 43, 24, 55, 66, 77, 88, 99, 3333 };
	n = sizeof(a) / sizeof(a[0]);

	printf("请输入后移几个元素\n");
	fflush(stdout);
	scanf("%d", &m);

	printf("输出后移前的数组为：\n");
	for (i = 0; i < n; i++)
		printf("%5d ", a[i]);

	i = n - 1;
	j = n + m - 1;
	while (i >= 0) {
		a[j] = a[i];
		j--;
		i--;
	}
	k = m - 1;
	j = n + m - 1;
	while (k >= 0) {
		a[k] = a[j];
		k--;
		j--;
	}
	printf("输出后移后的数组为：\n");
	for (i = 0; i < n; i++)
		printf("%5d ", a[i]);
	return 0;
}

void printf_s(int*, int);
void goright(int*, int);

void goright(int *a, int n)  //向右位移一个数
{
	int temp = a[n - 1];

	for (int i = n - 1; i > 0; i--) {
		a[i] = a[i - 1];
	}
	a[0] = temp;

}

void printf_s(int *a, int n) {
	for (int i = 0; i < n; i++) {
		printf("%d ", a[i]);
	}
	printf("\n");
}

#define MAX 20

int q68_4(void) {
	int n, m;
//	int a[MAX];

//	printf("请设置数组长度(不超过20) : ");
//	scanf("%d", &n);
//	printf("请输入数组 ： ");
//	for (int i = 0; i < n; i++) {
//		scanf("%d", &a[i]);
//	}

	int a[MAX] =
			{ 23, 34, 12, 32, 45, 56, 67, 43, 24, 55, 66, 77, 88, 99, 4444 };
	n = sizeof(a) / sizeof(a[0]);

	printf("请输入需要移动的数量 : ");
	fflush(stdout);
	scanf("%d", &m);

	while (m) {
		goright(a, n);
		m--;
	}

	printf_s(a, n);

	return 0;
}
