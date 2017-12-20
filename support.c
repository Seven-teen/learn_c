# include <stdio.h>

extern int count;

int write_extern(void)
{
	printf("count is %d\n", count);
}
