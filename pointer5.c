/**
 * 指针和数组
 */
#include <stdio.h>

int main()
{
	int x=1, y=2, z[10];
	int *ip;	/* ip是指向int类型的指针 */
	int p;
	
	ip = &x;
	y = *ip;
	*ip = 0;
	ip = &z[0];

	ip = z;

	return 0;
}
