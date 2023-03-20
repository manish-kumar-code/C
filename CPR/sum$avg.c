#include<stdio.h>
#include<conio.h>
void main()
{
    int i,n,sum;
    float avg;
    printf("enter the number:");
    scanf("%d",&n);
    printf("the number is:");
    for(i=0;i<=n;i++)
    {
        sum=sum+i;
    }
    printf("sum is %d",sum);
    avg=sum/i;
    printf("avg is %f",avg);
    getch();
}