#include <stdio.h>

enum DAY {
	MON , TUE, WED= 4, THU, FRI, SAT, SUN
} day;
int enum_demo_1() {
	// 遍历枚举元素
	for (day = MON; day <= SUN; day++) {
		printf("枚举元素：%d \n", day);
	}

	return 0;
}
