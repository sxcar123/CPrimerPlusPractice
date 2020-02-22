#include"sort.h"
void sort(int *array,int n)
{
    int i,j,temp;
    for(i=0;i<=98;i++)
        for(j=i+1;j<=99;j++)
            if(array[i]<array[j])
            {
                temp=array[i];
                array[i]=array[j];
                array[j]=temp;
            }
}
