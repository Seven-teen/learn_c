/**
 * 计算平均数
 */
#include <stdio.h>

int main()
{
	int s,n;
//	printf("please input the sum\n");
//	scanf("%d", &s);
//	printf("please input the count\n");
//	scanf("%d", &n);
	
	scanf("%d,%d", &s, &n);	
	float avg;
	avg = s / n;
	printf("the avg is %f\n", avg);

	return 0;
}
