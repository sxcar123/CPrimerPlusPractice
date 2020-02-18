#include<stdio.h>
#include<ctype.h>
int atoiCus(char *string);
int main(void)
{
	char string[10];
	gets(string);
	printf("%d",atoiCus(string));
	return 0;
}
int atoiCus(char *string)
{
	int ans=0;
	while(isdigit(*string))
	{
		ans=10*ans+(*(string++)-'0');
	}
	return ans;
}
