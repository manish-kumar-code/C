#include<stdio.h>
void main()
{
    int i,n,sum=0;
    float avg;
    printf("enter the number:");
    scanf ("%d",&n);
    printf("the number is:");
    for (i=1;i<=n;i++)
    printf("%d \t",i);
    for(i=1;i<=n;i++)
    sum=sum+i;
    avg=sum/n;
    printf("\n the sum is %d",sum);
    printf("\n avg is %f",avg);
}