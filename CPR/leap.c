#include<stdio.h>
void main()
{
    int year;
    printf("enter the number:");
    scanf("%d",&year);
    if(year%400==0)
    printf("year is leap");
    else if(year%100==0)
    printf("year is not leap");
    else if(year%4==0)
    printf("year is leap");
    else
    printf("year is not leap");
    }