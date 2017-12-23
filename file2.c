/**
 * 通过多个文件的函数实现输入一串字符串，然后删除指定的字符
 */

#include <stdio.h>

void enter(char str[100]) // 定义外部函数
{
	fgets(str, 100, stdin);
}
