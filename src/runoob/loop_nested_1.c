#include <stdio.h>

int loop_nested_1()
{

	printf("\n方法1：\n");
	int c1 = 0;
	for(int a=2; a<100; a++){
	   int flag=0;
	   for (int i =2; i <= a/2; i++){
		   if(a%i == 0){
			   flag = 1;
			   break;
		   }
	   }
	   if (flag==0){
		   printf("%d 是一个质数\n", a);
		   c1++;
	   }
	}

	printf("\n方法1 total prime number：%d\n", c1);

	printf("\n方法2：\n");
	/* 局部变量定义 */
	int i, j, c2=0;

	for(i=2; i<100; i++) {
	  for(j=2; j <= i/j; j++){
//		if(!(i%j)) break; // 如果找到，则不是质数
		if((i%j)==0) break; // 如果找到，则不是质数

	  }
	  if(j > (i/j)) {
		  printf("%d 是质数\n", i);
		  c2++;
	  }
	}
	printf("\n方法2 total prime number：%d\n", c2);

	int c3=0;
	int a, b;
	for(a=2; a<=100; a++){
		for(b=2; b <= a/b; b ++){
			if(a%b == 0) break;
		}

		if(b > a/b){
			printf("zhishu: %d \n", a);
			c3++;
		}


	}

	printf("\n方法3 total prime number：%d\n", c3);

	return 0;
}
