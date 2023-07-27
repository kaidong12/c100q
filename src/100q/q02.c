#include<stdio.h>

/*
 题目：企业发放的奖金根据利润提成。
 1, 利润(I)低于或等于10万元时，奖金可提10%；
 2, 利润高于10万元，低于20万元时，低于10万元的部分按10%提成，高于10万元的部分，可提成7.5%；
 3, 20万到40万之间时，高于20万元的部分，可提成5%；
 4, 40万到60万之间时高于40万元的部分，可提成3%；
 5, 60万到100万之间时，高于60万元的部分，可提成1.5%；
 6, 高于100万元时，超过100万元的部分按1%提成。
 从键盘输入当月利润I，求应发放奖金总数？
 */

#define WAN 10000
#define INPUT 500000

int q02_0() {
	double I = 0; // 利润
	double B = 0; // 奖金

//	printf("您好，请问您的净利润是多少？\n");
//	fflush(stdout);
//	scanf("%lf", &I);
	I = INPUT;

	I /= WAN;

	if (I > 100 * WAN) {
		B += ((I - 100) * 0.01);
		I = 100;
	}

	if (I > 60) {
		B += ((I - 60) * 0.015);
		I = 60;
	}
	if (I > 40) {
		B += ((I - 40) * 0.03);
		I = 40;
	}

	if (I > 20) {
		B += ((I - 20) * 0.05);
		I = 20;
	}

	if (I > 10) {
		B += ((I - 10) * 0.075);
		I = 10;
	}

	B += (I * 0.1);

	printf("奖金是%lf\n", B);
}

int q02_1() {
	int i;
	double lirun;
	double jiangjin = 0;

	float fanwei[] = { 1000000, 600000, 400000, 200000, 100000, 0 };
	float ticheng[] = { 0.01, 0.015, 0.03, 0.05, 0.075, 0.1 };

//	printf("您好，请问您的净利润是多少？\n");
//	fflush(stdout);
//	scanf("%lf", &lirun);
	lirun = INPUT;

	for (i = 0; i < 6; i++) {
		if (lirun > fanwei[i]) {
			jiangjin += (lirun - fanwei[i]) * ticheng[i];
			lirun = fanwei[i];
		}
	}
	printf("奖金是%.2lf\n", jiangjin);

	return 0;
}

double calculateBonus(double money);

int q02_2() {
	double lirun, bonus;
//	printf("你的净利润是(单位为：万)：\n");
//	fflush(stdout);
//	scanf("%lf", &lirun);

	lirun = INPUT / WAN;
	bonus = calculateBonus(lirun);
	printf("提成为：bonus=%lf", bonus);

}

double calculateBonus(double money) {
	if (money <= 10) {
		return money * 0.1;
	} else if (money <= 20) {
		return (money - 10) * 0.075 + calculateBonus(10);
	} else if (money <= 40) {
		return (money - 20) * 0.05 + calculateBonus(20);
	} else if (money <= 60) {
		return (money - 40) * 0.03 + calculateBonus(40);
	} else if (money <= 100) {
		return (money - 60) * 0.015 + calculateBonus(60);
	} else {
		return (money - 100) * 0.01 + calculateBonus(100);
	}
}
