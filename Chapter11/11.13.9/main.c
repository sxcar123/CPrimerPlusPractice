#include<stdio.h>
#include<string.h>
void inverse(char *st);
int main(void)
{
	char string[100];
	gets(string);
	inverse(string);
	puts(string);
	return 0;	
}
void inverse(char *st)
{
	char temp;
	int len=strlen(st);
	int i=0;
	for(i=0;i<len/2;i++)
	{
		temp=st[i];
		st[i]=st[len-1-i];
		st[len-1-i]=temp;
	}
}
