#include <stdio.h>
#include <stdlib.h>

/*
 * 函数原型：
 * void* malloc(size);
 * void* realloc(void *ptr, size_t size);
 *
 */

int malloc_demo() {
	int size;
	int *dynamicArray;  //指针

	printf("Enter number of elements");
	fflush(stdout);
	scanf("%d", &size);

	dynamicArray = (int*) malloc(size * sizeof(int)); // 动态数组内存分配

	if (dynamicArray == NULL) {
		printf("Memory allocation failed.\n");
		return 1;
	}

	printf("Enter %d elements: ", size);
	fflush(stdout);
	for (int i = 0; i < size; i++) {
		scanf("%d", &dynamicArray[i]);
	}

	printf("Dynamic Array: ");
	for (int i = 0; i < size; i++) {
		printf("%d ", dynamicArray[i]);
	}
	printf("\n");

	printf("Resize to 10 integers\n");
	dynamicArray = (int*) realloc(dynamicArray, 10 * sizeof(int)); // resize to 10 integers
	if (dynamicArray == NULL) {
		printf("Memory allocation failed.\n");
		return 1;
	}

	printf("Enter %d more elements: ", 10 - size);
	fflush(stdout);
	for (int i = size; i < 10; i++) {
		scanf("%d", &dynamicArray[i]);
	}

	printf("Dynamic Array after resize: ");
	for (int i = 0; i < 10; i++) {
		printf("%d ", dynamicArray[i]);
	}
	printf("\n");

	free(dynamicArray); // 动态数组内存释放

	return 0;
}
