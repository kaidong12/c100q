#include <stdio.h>

int q04_1() {

	int year, month, day, sum, leap;
	leap = 0;
	printf("\n请输入年、月、日，格式为：年,月,日（2015,12,10）\n");
	fflush(stdout);
	scanf("%d,%d,%d", &year, &month, &day);

	switch (month) {

	case 1:
		sum = 0;
		break;
	case 2:
		sum = 31;
		break;
	case 3:
		sum = 59;
		break;
	case 4:
		sum = 90;
		break;
	case 5:
		sum = 120;
		break;
	case 6:
		sum = 151;
		break;
	case 7:
		sum = 181;
		break;
	case 8:
		sum = 212;
		break;
	case 9:
		sum = 243;
		break;
	case 10:
		sum = 273;
		break;
	case 11:
		sum = 304;
		break;
	case 12:
		sum = 334;
		break;
	default:
		printf("data error");
		break;

	}

	sum += day;

	if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)) {
		leap = 1;
	}

	sum += leap;

	printf("days of year: %d", sum);
	fflush(stdout);
	return 0;
}

int q04_2() {
	int year, month, day, sumday = 0;
	int monthday[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

	printf("请输入年、月、日，格式为：年,月,日（2015,12,10）\n");
	fflush(stdout);
	scanf("%d,%d,%d", &year, &month, &day);

	if (year % 400 == 0 || (year % 100 != 0 && year % 4 == 0)) {
		monthday[1] = 29;
	}
	for (int i = 0; i < month - 1; i++) {
		sumday += monthday[i];
	}
	sumday += day;
	printf("%d\n", sumday);
	fflush(stdout);
	return 0;
}
