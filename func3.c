/**
 * 指针传递
 */
#include <stdio.h>

void swap(int *x, int *y);
void swap(int *x, int *y)
{
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
}

int main()
{
	int a = 5;
	int b = 10;
	swap(&a, &b);
	printf("交换结果为a = %d, b = %d\n", a, b);
	
	return 0;
}
