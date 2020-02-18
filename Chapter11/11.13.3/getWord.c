#include<stdio.h>
#include"getWord.h"
#include<ctype.h>
char *getWord(char *st)
{
	char ch;
	while(isblank(ch=getchar()))
		continue;
	if(ch=='\n')
		return st;
	else
		*st=ch;
	do
		st++;
	while(!isspace(*st=getchar()));
	*st='\0';
	while(getchar()!='\n')
		continue;
	return st;
}
