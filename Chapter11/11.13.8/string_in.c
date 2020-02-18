#include<stdio.h>
#include<string.h>
#include"string_in.h"
char *string_in(char *obj,char *seed)
{
	int lenObj=strlen(obj),lenSeed=strlen(seed);
	int i,j;
	for(i=0;i<=lenObj-lenSeed;i++)
	{
		for(j=0;j<lenSeed;j++)
		{
			if(obj[i+j]!=seed[j])
				break;
		}
		if(j==lenSeed)
			return obj+i;
	}
	return NULL;
}

