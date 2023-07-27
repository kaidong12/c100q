#include <stdio.h>

/*
 *题目：求一个3*3矩阵对角线元素之和
 *程序分析：利用双重for循环控制输入二维数组，再将a[i][i]累加后输出。
 *
 */
//  Created by www.runoob.com on 15/11/9.
//  Copyright © 2015年 菜鸟教程. All rights reserved.
//
#include<stdio.h>
#define N 3
int q38_1() {
	int i, j, a[N][N], sum = 0;
	printf("请输入矩阵(3*3)：\n");
	fflush(stdout);

	for (i = 0; i < N; i++) {
		for (j = 0; j < N; j++) {
			scanf("%d", &a[i][j]);
		}
	}
	printf("打印随机%d阶矩阵:\n", N);
	for (i = 0; i < N; i++) {
		for (j = 0; j < N; j++) {
			printf("%3d ", a[i][j]);
		}
		printf("\n");
	}

	for (i = 0; i < N; i++)
		sum += a[i][i];
	printf("对角线之和为：%d\n", sum);
	return 0;
}

#include <stdlib.h>
#include <time.h>

int q38_2() {
	int i, j;
	int a[N][N];
	int sum = 0;
	srand(time(NULL));  //随机数种子

	for (i = 0; i < N; i++) {
		for (j = 0; j < N; j++) {
			a[i][j] = rand() % (10); //产生0-10以内的随机数
			if (i == j || i + j == N - 1)
				sum += a[i][j];    //边产生边相加
		}
	}
	printf("打印随机%d阶矩阵:\n", N);
	for (i = 0; i < N; i++) {
		for (j = 0; j < N; j++) {
			printf("%3d ", a[i][j]);
		}
		printf("\n");
	}

	printf("%d阶矩阵对角线元素之和为:%d", N, sum);

	return 0;
}
