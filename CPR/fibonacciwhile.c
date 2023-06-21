#include<stdio.h>
void main()
{
    int a=0,b=1,c,i=3,n;
    printf("Enter the number:");
    scanf("%d",&n);
    printf("%d \t %d \t",a,b);
    while(i<=n)
    {
         c=a+b;
        printf("%d \t",c);
        a=b;
        b=c;
        i++;
    }
}