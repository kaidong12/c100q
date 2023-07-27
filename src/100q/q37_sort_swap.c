#include <stdio.h>

/*
 *题目：对10个数进行排序。
 *程序分析：可以利用选择法，即从后9个比较过程中，选择一个最小的与第一个元素交换， 下次类推，即用第二个元素与后8个进行比较，并进行交换。
 *
 */

int q37_1() {
	int i, j, n, min, t;
	int num[] = { 23, 34, 12, 32, 45, 56, 67, 43, 24, 66 };
	n = 10;
	for (i = 0; i <= n; i++) {
		for (j = i; j < n; j++) {
			if (num[i] > num[j]) {
				t = num[i];
				num[i] = num[j];
				num[j] = t;

			}
		}
	}

	for (i = 0; i < n; i++) {
		printf("%d ", num[i]);
	}
	printf("\n");

	int num2[] = { 23, 34, 12, 32, 45, 56, 67, 43, 24, 66 };
	for (i = 0; i <= n; i++) {
		min = i;
		for (j = i + 1; j < n; j++) {
			if (num2[min] > num2[j])
				min = j;

			if (min != i) {
				t = num2[min];
				num2[i] = num2[j];
				num2[j] = t;

			}
		}
	}

	for (i = 0; i < n; i++) {
		printf("%d ", num[i]);
	}
	printf("\n");

	return 0;
}

//swap(p1, p2)
// 指针传递是通过地址间接的改变了实参的值。
void swap37_1(int *s1, int *s2) {

	printf("s1 变量存储的地址: %p\n", s1);
	printf("s2 变量存储的地址: %p\n", s2);

	int t;

	t = *s1;
	*s1 = *s2;
	*s2 = t;

}

//swap(&p1, &p2)
// 指针传递是通过地址间接的改变了实参的值。
void swap37_2(int **s1, int **s2) {

	printf("s1 变量存储的地址: %p\n", s1);
	printf("s2 变量存储的地址: %p\n", s2);

	int t;

	t = **s1;
	**s1 = **s2;
	**s2 = t;

}

//引用传递，只有C++才支持
//void swap37_3(int& x, int& y) {
//	int temp;
//	temp = x; // 交换x和y的值
//	x = y;
//	y = temp;
//	return;
//}

int q37_2() {

	int a, b, t;
	a = 100;
	b = 200;

	t = a ^ b ^ b;
	printf("%d ", t);

	t = a ^ b ^ a;
	printf("%d ", t);

	a ^= b; //a is a^b now
	b ^= a;	//b is original a now
	a ^= b; //b is original a now, so a is original b now
	printf("\n");

	printf("%d ", a);
	printf("%d ", b);
	printf("\n");

	a = a + b;
	b = a - b;
	a = a - b;

	printf("%d ", a);
	printf("%d ", b);
	printf("\n");

	return 0;
}

typedef void (*p_func)(int*, int);

void select_sort(int *arr, int size)   //选择排序
{
	int i = 0, j = 0;
	for (i = 0; i < size; i++) {
		for (j = i; j < size; j++) {
			if (arr[i] > arr[j]) {
				arr[i] ^= arr[j];
				arr[j] ^= arr[i];
				arr[i] ^= arr[j];
			}
		}
	}
}

void bubble_sort(int *arr, int size)    //冒泡排序
{
	int i = 0, j = 0;
	for (i = 1; i < size; i++) {
		for (j = 0; j < size - i; j++) {
			if (arr[j] > arr[j + 1]) {
				arr[j] ^= arr[j + 1];
				arr[j + 1] ^= arr[j];
				arr[j] ^= arr[j + 1];
			}
		}
	}
}
void quick_sort(int *arr, int size)     //快速排序
{
	if (size <= 1)
		return;
	int base = *arr;
	int head = 0, tail = size - 1;
	while (head < tail) {
		if (arr[head] > arr[tail]) {
			arr[head] ^= arr[tail];
			arr[tail] ^= arr[head];
			arr[head] ^= arr[tail];
		}
		if (arr[head] == base)
			tail--;
		else
			head++;
	}
	quick_sort(arr, head - 1);
	quick_sort(&arr[head + 1], size - head - 1);
}
int q37_3() {
	int arr[] = { 0, 4, 2, 8, 6, 1, 5, 9, 3, 7 };
	int i = 0, j = 0;
	p_func p_sort[] = { select_sort, bubble_sort, quick_sort };
	for (i = 0; i <= 2; i++) {
		p_sort[i](arr, sizeof(arr) / sizeof(int));
		i == 0 ? printf("select : ") :
		i == 1 ? printf("bubble : ") : printf("quick  : ");
		for (j = 0; j < sizeof(arr) / sizeof(int); j++)
			printf("%d  ", arr[j]);
		printf("\n");
	}

	return 0;
}
