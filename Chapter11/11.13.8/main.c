#include<stdio.h>
#include"string_in.h"
int main(void)
{
	char string1[100],string2[100];
	gets(string1);
	gets(string2);
	puts(string_in(string1,string2));
	return 0;
}
