#include<stdio.h>
void main()
{
    int n,x;
    printf("Enter the number-");
    scanf("%d",&n);
    x = n%2;
    if( x == 0)
    {
        if(n>0)
        printf("Number is positive even");
        else
        printf("Number is negative even");
    }
    else
    {
        if(n>0)
        printf("Number is positive odd");
        else
        printf("Number is negative odd");
    }
}