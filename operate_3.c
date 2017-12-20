# include <stdio.h>
/*
 * 位运算符
 */

int main()
{
	unsigned int a = 60; /* 60 = 0011 1100 */
	unsigned int b = 13; /* 13 = 0000 1101 */
	int c = 0;

	c = a & b; 
	printf("Line 1 -c 的值是 %d\n", c);

	c = a | b;
	printf("Line 2 -c 的值是 %d\n", c);

	c = a ^ b;
	printf("Line 3 -c 的值是 %d\n", c);

	c = ~a;
	printf("Line 4 -c 的值是 %d\n", c);

	c = a << 2;
	printf("Line 5 -c 的值是 %d\n", c);

	c = a >> 2;
	printf("Line 6 -c 的值是 %d\n", c);

	return 0;
}
