#include <stdio.h>
#include "maxNum.h"
#include "minNum.h"

int main()
{
	int a = 33;
	int b = 56;
	int max = maxNum(a, b);
	int min = minNum(a, b);
	printf("the max value is %d\nthe min value is %d\n", max, min);

	return 0;
}
