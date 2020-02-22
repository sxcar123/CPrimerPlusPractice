#include<stdio.h>
#include<time.h>
#include"rand.h"
int main(void)
{
    int random;
    int times[10];
    srand((unsigned int)time(0));
    for(int i=0;i<10;i++)
    {
        for(int j=0;j<10;j++)
            times[j]=0;
        for(int j=0;j<1000;j++)
        {
            random=rand()%10+1;
            times[random-1]++;
        }
        for(int j=0;j<10;j++)
            printf("%3d ",times[j]);
        printf("\n");
    }
    return 0;
}
