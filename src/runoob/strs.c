#include <stdio.h>
#include <string.h>

int strs() {
	/*
	 * 在 C 语言中，字符串实际上是使用空字符 \0 结尾的一维字符数组。因此，\0 是用于标记字符串的结束。
	 *
	 * 'a' 表示是一个字符，"a" 表示一个字符串相当于 'a'+'\0';
	 * '' 里面只能放一个字符;
	 * "" 里面表示是字符串系统自动会在串末尾补一个 0。
	 *
	 */

	   char str1[14] = "runoob";
	   char str2[14] = "google";
	   char str3[14];
	   int  len ;

	   /* 复制 str1 到 str3 */
	   strcpy(str3, str1);
	   printf("strcpy( str3, str1) :  %s\n", str3 );

	   /* 连接 str1 和 str2 */
	   strcat( str1, str2);
	   printf("strcat( str1, str2):   %s\n", str1 );

	   /* 连接后，str1 的总长度 */
	   len = strlen(str1);
	   printf("strlen(str1) :  %d\n", len );

	   return 0;
}
