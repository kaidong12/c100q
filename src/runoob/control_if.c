#include <stdio.h>

int control_if() {
	/* 局部变量定义 */
	int a = 85;

	/* 检查布尔条件 */
	if (a == 100) {
		/* 如果 if 条件为真，则输出下面的语句 */
		printf("a 的等地是 100\n");
	} else if (a >= 90) {
		/* 如果 else if 条件为真，则输出下面的语句 */
		printf("a 的等地是 A\n");
	} else if (a >= 80) {
		/* 如果 else if 条件为真，则输出下面的语句 */
		printf("a 的等地是 B\n");
	} else if (a >= 60) {
		/* 如果 else if 条件为真，则输出下面的语句 */
		printf("a 的等地是 C\n");
	} else {
		/* 如果上面条件都不为真，则输出下面的语句 */
		printf("a 的等地是 D\n");
	}
	printf("a 的准确值是 %d\n", a);

	return 0;
}
