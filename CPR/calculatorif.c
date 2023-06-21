#include<stdio.h>
void main()
{
    char opr;
    float a,b,sum,diff,mul,div;
    printf("Enter the operator:");
    scanf("%c",&opr);
    printf("Enter the no. a and b:");
    scanf("%f %f",&a,&b);
    if(opr=='+')
    {
        sum=a+b;
        printf("sum is %f",sum);
    }
    else
    if(opr=='-')
    {
        diff=a-b;
        printf("Difference is %f",diff);
    }
    else 
    if(opr=='*')
    {
        mul=a*b;
        printf("Multiplication is %f",mul);
    }
    else
    if(opr=='/')
    {
        div=a/b;
        printf("Division is %f",div);
    }
    else
    printf("Invalid Operator"); 
}