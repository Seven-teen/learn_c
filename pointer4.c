/**
 * c 指针数组
 */
#include <stdio.h>

const int MAX = 3;

int main()
{
	int var[] = {10, 100, 200};
	int i, *ptr[MAX];
	char *names[] = {
		"Zara Ali",
		"Hina Ali",
		"Nuha Ali",
		"Sara Ali"
	};	
	
	int *salary[] = {5, 15, 20};

	for (i=0;i<MAX;i++) {
		ptr[i] = &var[i];
	}
	
	for (i=0;i<MAX;i++) {
		printf("value of var[%d] = %d\n", i, *ptr[i]);
	}

	for (i=0;i<MAX;i++) {
		printf("value of *prt[%d] = %p\n", i, ptr[i]);
	}
printf("---------字符数组----------\n");
	for (i=0;i<4;i++) {
		printf("value of names[%d] is %s\n", i, names[i]);
	}
printf("---------数字数组----------------\n");
	for (i=0;i<3;i++) {
		printf("value of salary[%d] is %d\n", i, salary[i]);
	}

/*
	for (i=0;i<MAX;i++) {
		printf("value of var[%d] = %d\n", i, var[i]);
	}
*/
	return 0;
}
