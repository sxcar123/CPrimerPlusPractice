#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(void)
{
    int num;
    char temp[50],**p;
    printf("How many words do you wish to enter? ");
    scanf("%d",&num);
    p=(char **)malloc(num*sizeof(char *));
    for(int i=0;i<num;i++)
    {
        scanf("%s",temp);
        *(p+i)=(char *)malloc((strlen(temp)+1)*sizeof(char));
        strcpy(*(p+i),temp);
    }
    printf("Here are your words:\n");
    for(int i=0;i<num;i++)
        printf("%s\n",*(p+i));
    return 0;
}
