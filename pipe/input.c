/**
 * 输入一组数字计算总和与个数
 */
#include <stdio.h>

int main()
{
	int flag = 1;
	int sum = 0; // 用于保存总和
	int count = 0; // 用于计数
	int i; // 用于记录用户输入的数据
	
	/* 死循环保证程序一直在 */ 
	while (flag) {
		scanf("%d", &i);
		if (0 == i) { // 结束的标志
			break;
		}

		count++;
		sum+=i;
	}

	printf("%d,%d\n", sum, count);

	return 0;
}
