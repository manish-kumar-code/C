#include<stdio.h>
void main()
{
    int n,fact;
    int factorial(int);
    printf("Enter the number:");
    scanf("%d",&n);
    fact=factorial(n);
    printf("Factorial of %d=%d",n,fact);
}
int factorial(int n)
{
    if(n==0)
    return 1;
    else 
    return n*factorial(n-1);
}