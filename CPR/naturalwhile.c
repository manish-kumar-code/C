#include<stdio.h>
void main()
{
    int i=1,n,sum=0;
    printf("enter the number:");
    scanf("%d",&n);
    printf("the number is:");
    while(i<=n)
    {
        printf("%d \t",i);
        sum=sum+i;
        printf("the su m is %d",sum);
        i++;
    }
}