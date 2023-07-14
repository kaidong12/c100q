#include <stdio.h>

int pointer_demo_4 ()
{
	   int MAX = 3;
	   int  var[] = {10, 100, 200};
	   int i, *ptr[MAX];
	   /*
	    * 指针数组
	    * 指针数组：指针数组可以说成是"指针的数组"，首先这个变量是一个数组。
	    * 其次，"指针"修饰这个数组，意思是说这个数组的所有元素都是指针类型。
	    *
	    */

	   for ( i = 0; i < MAX; i++)
	   {
	      ptr[i] = &var[i]; /* 赋值为整数的地址 */
	   }
	   for ( i = 0; i < MAX; i++)
	   {
	      printf("Value of var[%d] = %d\n", i, *ptr[i] );
	      printf("Address of var[%d] = %p\n", i, ptr[i] );
	   }

	   printf("=========================================\n");

	   MAX = 4;
	   const char *names[] = {
	                   "Zara Ali",
	                   "Hina Ali",
	                   "Nuha Ali",
	                   "Sara Ali",
	   };

	   for ( i = 0; i < MAX; i++)
	   {
	      printf("ASCII of first of names[%d] = %d\n", i, *names[i]);
	      printf("First char of names[%d] = %c\n", i, names[i][0]);
	      printf("Value of names[%d] = %s\n", i, names[i]);
	      printf("Address of names[%d] = %p\n", i, &names[i]);
	   }

	   printf("=========================================\n");
	   /*
	    * 数组指针
	    * 数组指针：数组指针可以说成是"数组的指针"，首先这个变量是一个指针。
	    * 其次，"数组"修饰这个指针，意思是说这个指针存放着一个数组的首地址，或者说这个指针指向一个数组的首地址。
	    *
	    *int (*a)[3]：同样的方式，首先括号的优先级最高，所以 *a 是指针，而 [] 修饰 *a ，所以是数组指针，一个指向 3 个元素的一维数组指针。
	    */

	   typedef int arr[3];

	  arr b = {1, 2, 3};
	  int (*a)[3] = &b;
	  arr *c = a;
	  for (int i = 0; i < 3; ++i) {
		 printf("%d\n", (*a)[i]);
		 printf("%p\n", *a);
		 printf("%p\n", c);
	  }

	   return 0;
}
