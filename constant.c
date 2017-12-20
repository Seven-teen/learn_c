# include <stdio.h>
/*
 * 字符常量
 */
#define LENGTH 10
#define WIDTH 5
#define NEWLINE '\n'
int main()
{
	printf("Hello\tWorld\n\n");

	int area;

	area = LENGTH * WIDTH;
	printf("value of area : %d", area);
	printf("%c", NEWLINE);
	return 0;
}
