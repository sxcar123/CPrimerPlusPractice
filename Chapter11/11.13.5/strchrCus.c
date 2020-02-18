#include<stdio.h>
#include"strchrCus.h"
char *strchrCus(char *obj,char seed)
{
	while(*obj&&*obj!=seed)
		obj++;
	if(*obj!=seed)
		obj=NULL;
	return obj;
}
