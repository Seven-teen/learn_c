# include <stdio.h>
/*
 * C存储类
 */
static int Count;
int Road;

/* 函数声明 */
void func1(void);

/* 全局变量 - static 是默认的 */
static int count = 10;

int main()
{
	int mount;
	auto int month;
	
	//printf("%d\n", Count);
	//printf("%d\n", Road);
	
	while (count--) {
		func1();
	}	

	return 0;
}

void func1(void)
{
	/* thingy 是 func1 的局部变量 - 只初始化一次
	 * 每次调用函数 func1 thingy 值不会被重置
	 */

	static int thingy = 5;
	thingy++;
	printf(" thingy 为 %d, count 为 %d\n", thingy, count);
}
