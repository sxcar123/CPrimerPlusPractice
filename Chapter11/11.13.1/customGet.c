#include<stdio.h>
#include"customGet.h"
char *customGet(char *st,int n)
{
	int i;
	if(st)
	{
		while((st[i]=getchar())!=EOF&&i<n)
			i++;
		st[i]='\0';
	}
	return st;
}
