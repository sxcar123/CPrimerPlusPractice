#include<stdio.h>
#include"count.h"
int main(void)
{
    int times;
    printf("请输入循环次数: ");
    scanf("%d",&times);
    for(int i=0;i<times;i++)
    {
        printf("%d\n",count());
    }
    return 0;
}
