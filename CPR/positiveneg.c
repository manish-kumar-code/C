#include<stdio.h>
void main()
{
    int i,m,p=0,n=0;
    printf("Enter the number:");
    scanf("%d",&m);
    printf("The number is: ");
    for(i=0;i<=m;i++)
    {
        scanf("%d",&i);
        if(i>0)
        p=p+1;
        else
        n=n+1;
    }
    printf("Positive=%d \t Negative=%d",p,n);
}