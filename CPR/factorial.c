#include<stdio.h>
int main()
{
    int i,n,f=1;
    printf("Enter the no.-");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {f=f*i;}
    printf("Factorial of %d - %d",n,f);
}