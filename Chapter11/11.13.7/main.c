#include<stdio.h>
#include"mystrncpy.h"
int main(void)
{
	char string1[100],string2[100];
	int n;
	gets(string1);
	gets(string2);
	scanf("%d",&n);
	mystrncpy(string1,string2,n);
	puts(string1);
	return 0;
}
