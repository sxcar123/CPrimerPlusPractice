#include<stdio.h>
#include<ctype.h>
#include<stdbool.h>
#define FALSE 0
#define TRUE 1
int main(void)
{
	int words=0,upper=0,lower=0,punct=0,digit=0;
	char ch;
	bool inword=FALSE;
	while((ch=getchar())!=EOF)
	{
		if(isalnum(ch))
		{
			if(!inword)
			{
				words++;
				inword=TRUE;
			}
			if(isdigit(ch))
				digit++;
			else if(isupper(ch))
				upper++;
			else
				lower++;
		}
		else
		{
			inword=FALSE;
			if(ispunct(ch))
				punct++;
		}
	}
	printf("word:%d\nupper:%d\nlower:%d\npunct:%d\ndigit:%d\n",words,upper,lower,punct,digit);
	return 0;
}
