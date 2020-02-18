//--driver.c
#include<stdio.h>
#include"getWord.h"
int main(void)
{
	char string[10];
	getWord(string,8);
	puts(string);
	return 0;
}
