#include<stdio.h>
void putsOri(const char *strings[100],int n);
void putsAscOrd(const char *strings[100],int n);
void putsLenRise(const char *strings[100],int n);
void putsOnlyAWord(const char *strings[100],int n);
int myGets(char *strings,int n);
int main(void)
{
	char strings[10][100],ch;
	int n=myGets(strings,10),quitFlag=0;
	while(ch=getchar())
	{
		switch(ch)
	{
		case '1':
			putsOri(strings,n);
			break;
		case '2':
			putsAscOrd(strings,n);
			break;
		case '3':
			putsLenRise(strings,n);
			break;
		case '4':
			putsOnlyAWord(strings,n);
			break;
		case '5':
			quitFlag=1;
			break;
		default:
			continue;
	}
		if(quitFlag==1)
			break;
	}
	return 0;
}
void putsOri(const char *strings[100],int n)
{
	for(int i=0;i<n;i++)
		puts(strings[i]);
}
void putsAscOrd(const char *strings[100],int n)
{
	
}
void putsLenRise(const char *strings[100],int n)
{
}
void putsOnlyAWord(const char *strings[100],int n)
{
	for(int i=0;i<n;i++)
	{
		int len=strlen(strings[i]);
		for(int j=0;j<len;j++)
			if(!isspace(strings[i][j]))
				break;
		for(int k=j+1;k<len;k++)
			if(isspace(strings[i][k]))
				break;
		for(int m=j;m<k;m++)
			printf("%c",string[i][m]);
		printf("\n");
	}
}
int myGets()
