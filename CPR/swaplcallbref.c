#include<stdio.h>
void main()
{
    int a,b;
    int swap(int *,int *);
    printf("Before swap a and b:");
    scanf("%d %d",&a,&b);
    swap(&a,&b);
    printf("After swap: a=%d b=%d",a,b);
}
int swap(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}