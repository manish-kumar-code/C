#include<stdio.h>
void main()
{
    char opr;
    int a,b,sum,Diff,mul;
    float D;
    float add(int,int);
    float diff(int,int);
    float product(int,int);
    float divi(int,int);
    printf("Enter the value a and b:");
    scanf("%d %d",&a,&b);
    printf("Enter Operator:");
    scanf("%c",&opr);
    sum=add(a,b);
    Diff=diff(a,b);
    mul=product(a,b);
    D=divi(a,b);
    printf("Sum=%d",sum);
    printf("Difference=%d",Diff);
    printf("Multiplication=%d",mul);
    printf("Division=%f",D);
}
float add(int a,int b);
float diff(int a,int b);
float product(int a,int b);
float divi(int a,int b);
{
    return a+b;
    return a-b;
    return a*b;
    return a/b;
}