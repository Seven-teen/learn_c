/*
 * 通过输入一个数字来判断它是否为奇数或偶数
 */
#include <stdio.h>

int main()
{
	int num;
	
	printf("输入一个数字 ：");
	scanf("%d", &num);

	(num%2 == 0) ? printf("偶数\n") : printf("奇数\n");

	return 0;
}
