#include<stdio.h>
#include"customGet.h"
int main(void)
{
	char string[5];
	customGet(string,3);
	puts(string);
	return 0;
}
