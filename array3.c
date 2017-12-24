/**
 * 实现数组传递参数
 */
#include <stdio.h>

double getAverage(int arr[], int size)
{
	int i;
	double avg;
	double sum;
	
	for (i=0;i<size;i++) {
		sum += arr[i];
	}

	avg = sum / size;

	return avg;
}

int main()
{
	/* 带有5个元素的整型数组 */
	int balance[5] = {1000, 2, 3, 17, 50};
	double avg;
	
	/* 传递一个指向数组的指针作为参数 */
	avg = getAverage(balance, 5);

	/* 输出返回值 */
 	printf("平均值是 %f\n", avg);

	return 0;
}
