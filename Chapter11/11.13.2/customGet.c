#include<stdio.h>
#include"customGet.h"
#include"ctype.h"
char *customGet(char *st,int n)
{
	int i=-1;
	do
	{
		i++;
		st[i]=getchar();
	}while(!isblank(st[i])&&i<n-1);
	if(isblank(st[i]))
		st[i]='\0';
	else
		st[i+1]='\0';
	while(getchar()!='\n')
		continue;
	return st;
}
