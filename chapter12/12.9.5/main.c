#include<stdio.h>
#include<time.h>
#include"rand.h"
#include"sort.h"
int main(void)
{
    int array[100];
    srand((unsigned int)time(0));
    for(int i=0;i<100;i++)
        array[i]=rand()%10+1;
    sort(array,100);
    for(int i=0;i<100;i++)
    {
        printf("%2d ",array[i]);
        if(i%10==9)
            printf("\n");
    }
    return 0;
}

