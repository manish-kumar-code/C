#include<stdio.h>
void main()
{
    int a,b,result;
    int add(int,int);
    printf("Enter the numbers a and b:");
    scanf("%d %d",&a,&b);
    result=add(a,b);
    printf("sum = %d",result);
}
int add(int a,int b)
{
    return a+b;
}