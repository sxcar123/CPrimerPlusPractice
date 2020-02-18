#include<stdio.h>
#include"getWord.h"
#include<ctype.h>
char *getWord(char *st,int n)
{
	char ch;
	int i=0;
	while(isblank(ch=getchar()))
		continue;
	if(ch=='\n')
		return st;
	else
	{
		st[i]=ch;
		i++;
	}
	while(!isspace(st[i]=getchar())&&i<n)
		i++;
	if(st[i]=='\n')
		return st;
	else
		st[i]='\0';
	while(getchar()!='\n')
		continue;
	return st;
}
