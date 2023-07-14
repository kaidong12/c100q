#include <stdio.h>

int pointer_demo_2 ()
{
   const int MAX = 3;
   int  var[] = {10, 100, 200};
   int  i, *ptr;

   /* 指针中的数组地址（数组第一个元素的地址） */
   ptr = var;
   for ( i = 0; i < MAX; i++)
   {

      printf("存储地址：var[%d] = %p\n", i, ptr );
      printf("存储值：var[%d] = %d\n", i, *ptr );

      /* 指向下一个位置 */
      ptr++;
   }

   ptr--;
   printf("==================================\n");

   for ( i = MAX; i > 0; i--)
   {

      printf("存储地址：var[%d] = %p\n", i-1, ptr );
      printf("存储值：var[%d] = %d\n", i-1, *ptr );

      /* 指向下一个位置 */
      ptr--;
   }

   ptr++;
   printf("==================================\n");

   for ( i = 0; i < MAX; i++)
   {

	  // 通过取数组地址获取指针值
	  ptr = &var[i];
      printf("存储地址：var[%d] = %p\n", i-1, ptr );
      printf("存储值：var[%d] = %d\n", i-1, *ptr );

   }

   return 0;
}
