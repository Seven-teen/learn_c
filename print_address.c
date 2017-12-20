#include <stdio.h>
/*
 * 打印变量的地址
 */

int main()
{
	int a;
	int b;
	
	printf("a的地址是%p\nb的地址是%p\n", &a, &b);
	
	/* 只声明不赋值 */
	int c;
	printf("c的值是%d\n", c);
	return 0;
}
