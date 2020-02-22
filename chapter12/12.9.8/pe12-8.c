#include<stdio.h>
#include<stdlib.h>
int *make_array(int elem,int val);
void show_array(const int ar[],int n);
int main(void)
{
    int size,value,*pa;
    while(printf("Enter the number of elements (<1 to quit):")&&scanf("%d",&size)==1&&size>0)
    {
        printf("Enter the initialization value: ");
        scanf("%d",&value);
        pa=make_array(size,value);
        if(pa)
        {
            show_array(pa,size);
            free(pa);
        }
    }
    printf("Done.\n");
    return 0;
}
int *make_array(int elem,int val)
{
    int *pa=(int *)malloc(val*sizeof(int));
    for(int i=0;i<elem;i++)
        pa[i]=val;
    return pa;
}
void show_array(const int ar[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d ",ar[i]);
        if(i%8==7)
            printf("\n");
    }
    if(n%8!=0)
        printf("\n");
}
