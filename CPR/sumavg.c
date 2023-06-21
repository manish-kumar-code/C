#include<stdio.h>
void main()
{
    int i,n,sum=0;
    float avg;
    printf("enter the number:");
    scanf("%d",&n);
    printf("the number is: ");
    for(i=0;i<=n;i++)
    {
        scanf("%d",&i);
    }
    sum=sum+i;
    printf("sum is %d \n",sum);
    avg=sum%n;
    printf("avg is %f ",avg);
}