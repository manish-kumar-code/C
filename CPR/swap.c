#include<stdio.h>
void main()
{
    int a,b,temp;
    printf("Enter the numbers:");
    scanf("%d %d",&a,&b);
    temp=a;
    a=b;
    b=temp;
    printf("The number after swaping: a=%d b=%d",a,b);
}