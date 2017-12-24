/**
 * gdb 调试工具
 */
#include <stdio.h>

void change(int a, int b)
{
	int tmp;
	tmp = a;
	b = a;
}

int main()
{
	int a = 5;
	int b = 3;

	change(a, b);
	
	printf("a = %d, b= %d\n", a, b);

	return 0;
}
