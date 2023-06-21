#include<stdio.h>
void main()
{
    int a=0,b=1,c,i,n;
    printf("Enter the number:");
    scanf("%d",&n);
    printf("%d \t %d \t",a,b);
    for(i=3;i<=n;i++)
    {
        c=a+b;
        printf("%d \t",c);
        a=b;
        b=c;
    }
}