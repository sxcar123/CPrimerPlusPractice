#include<stdio.h>
#include"customGet.h"
int main(void)
{
	char string[10];
	customGet(string,10);
	puts(string);
	return 0;
}
