#include<stdio.h>
#include<ctype.h>
#include"customGetRe.h"
char *customGet(char *st,int n)
{
        int i=0;
        while(i<n)
        {       
                st[i]=getchar();
                i++;
                if(isblank(st[i-1]))
                {       
                        break;
                }
        }
        if(isblank(st[i-1]))
                st[i-1]='\0';
        else
                st[i]='\0';
        return st;
}

