#include<stdio.h>
void main()
{
    int a=10,*ptr;
    ptr=&a;
    printf("Adress of a=%u\n",ptr);
    printf("Value of a=%d\n",*ptr);
    printf("Adress of ptr=%u",&ptr);
}