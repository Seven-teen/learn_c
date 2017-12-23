/**
 * 求三个数的最大值
 */
#include <stdio.h>

int DoMax(int a, int b, int c)
{
	int max = a;
	if (b>max) {
		max = b;
	}
	
	if (c>max) {
		max = c;
	}

	return max;
}

int main()
{
	int x,y,z,maxOne;
	printf("请输入三个数字（空格分隔）：");
	scanf("%d%d%d", &x, &y, &z);
	maxOne = DoMax(x, y, z);
	printf("\n");
	printf("最大数为：%d;\n", maxOne);
	return 0;
}
