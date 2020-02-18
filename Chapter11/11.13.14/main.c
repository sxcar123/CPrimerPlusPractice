#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main(int argc,char **argv)
{
	if(argc!=3)
	{
		printf("parameters' num doesn't fit!\n");
	}
	else
	{
		printf("%lf",pow(atof(argv[1]),atol(argv[2])));
	}
	return 0;
}
