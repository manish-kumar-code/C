#include<stdio.h>
void main()
{
    int i,n,sum=0;
    float avg;
    printf("Enter the number:");
    scanf("%d",&n);
    printf("The number is- ");
    for(i=1;i<=n;i++)
    {
    printf("%d \t",i);
    sum=sum+i;
    avg=sum%n;
    }
    printf("sum = %d \n",sum);
    printf("avg =%f ",avg);
}