#include<stdio.h>
#include<string.h>
void deleteSpace(char *st);
int main(void)
{
	char string[100];
	while(*gets(string)!='\0')
	{
		deleteSpace(string);
		puts(string);
	}
	return 0;
}
void deleteSpace(char *st)
{
	int i,len,k=0;
	len=strlen(st);
	for(i=len-1;i>=0;i--)
		if(st[i]==' ')
		{
			k++;
			for(int j=i;j<len-k+1;j++)
				st[j]=st[j+1];
			st[len-k]='\0';
		}
}

