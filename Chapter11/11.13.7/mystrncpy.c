#include<stdio.h>
#include<string.h>
#include"mystrncpy.h"
char *mystrncpy(char *obj,char *pattern,int n)
{
	char *p=obj+strlen(obj);
	int i=0;
	while(pattern[i]!='\0'&&i<n)
	{
		p[i]=pattern[i];
		i++;
	}
	if(i!=n-1)
		p[i]='\0';
	return obj;
}
