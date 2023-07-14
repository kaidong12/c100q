#include <stdio.h>

int operator_1()
{
   int a = 21;
   int b = 10;
   int c ;

   c = a + b;
   printf("Line 1 - c 的值是 %d\n", c );

   c = a - b;
   printf("Line 2 - c 的值是 %d\n", c );

   c = a * b;
   printf("Line 3 - c 的值是 %d\n", c );

   c = a / b;
   printf("Line 4 - c 的值是 %d\n", c );

   c = a % b;
   printf("Line 5 - c 的值是 %d\n", c );

   printf("\na++赋值后再加 1，c 为 21，a 为 22\n");
   c = a++;  // 赋值后再加 1 ，c 为 21，a 为 22
   printf("Line 6 - c 的值是 %d\n", c );
   printf("Line 6 - a 的值是 %d\n", a );

   printf("\na--赋值后再减 1，c 为 22，a 为 21\n");
   c = a--;  // 赋值后再减 1 ，c 为 22，a 为 21
   printf("Line 7 - c 的值是 %d\n", c );
   printf("Line 7 - a 的值是 %d\n", a );

   printf("\n++a先运算后赋值：\n");
   c = ++a;
   printf("Line 8 - c 的值是 %d\n", c );
   printf("Line 8 - a 的值是 %d\n", a );

   printf("\n--a先运算后赋值：\n");
   c = --a;
   printf("Line 9 - c 的值是 %d\n", c );
   printf("Line 9 - a 的值是 %d\n", a );

   return c;

}
