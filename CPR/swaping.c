#include<stdio.h>
void main()
{
    int a,b;
    printf("Before swaping a and b:");
    scanf("%d %d",&a,&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("After swaping a=%d b=%d",a,b);
}