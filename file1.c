/**
 * 通过多个文件的函数实现输入一串字符 然后删除指定的字符
 */
#include <stdio.h>

/* 定义内部函数 */
static void delete_string(char str[], char ch);

int main()
{
	extern void enter(char str[]); // 对函数的声明
	extern void print(char str[]); // 对函数的声明
	char c, str[100];
	enter(str);
	scanf("%c", &c);
	delete_string(str, c);
	print(str);	

	return 0;
}

static void delete_string(char str[], char ch) // 内部函数
{
	int i, j;
	for(i=j=0; str[i] != '\0'; i++){
		if (str[i] != ch){
			str[j++] = str[i];
			str[j] = '\0';
		}
	}
}
