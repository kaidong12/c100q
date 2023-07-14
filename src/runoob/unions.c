#include <stdio.h>
#include <string.h>

int unions() {
	/*
	 * 共用体是一种特殊的数据类型，允许您在相同的内存位置存储不同的数据类型。
	 * 您可以定义一个带有多成员的共用体，但是任何时候只能有一个成员带有值。
	 * 共用体提供了一种使用相同的内存位置的有效方式。
	 *
	 */

	union Data
	{
	   int i;
	   float f;
	   char  str[20];
	};

   union Data data;

   data.i = 10;
   data.f = 220.5;
   strcpy(data.str, "C Programming");

   printf( "Memory size occupied by data : %d\n", sizeof(data));
   printf("==========================================\n");

   printf( "data.i : %d\n", data.i);
   printf( "data.f : %f\n", data.f);
   printf( "data.str : %s\n", data.str);

   printf( "data.i : %d\n", data.i);

   printf("==========================================\n");

   data.i = 10;
   printf( "data.i : %d\n", data.i);

   data.f = 220.5;
   printf( "data.f : %f\n", data.f);

   strcpy( data.str, "C Programming");
   printf( "data.str : %s\n", data.str);

   printf( "data.i : %d\n", data.i);

   return 0;
}
