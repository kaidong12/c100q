#include <stdio.h>
#include <stdlib.h>

int enum_demo_2() {

    enum color { red=1, green, blue };

    enum  color favorite_color;

    /* 用户输入数字来选择颜色 */
    printf("请输入你喜欢的颜色: (1. red, 2. green, 3. blue): ");
    fflush(stdout);
    scanf("%u", &favorite_color);

    /* 输出结果 */
    switch (favorite_color)
    {
    case red:
        printf("你喜欢的颜色是红色");
        break;
    case green:
        printf("你喜欢的颜色是绿色");
        break;
    case blue:
        printf("你喜欢的颜色是蓝色");
        break;
    default:
        printf("你选择的颜色不存在");
    }

	return 0;
}
