#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,c;
    clrscr();
    printf("enter the number:");
    scanf("%d %d %d",&a,&b,&c);
    if((a>b)&&(a>c))
    printf("%d is larest",a);
    if((b>c)&&(b>a))
    printf("%d is larest",b);
    if((c>a)&&(c>b))
    printf("%d is larest");
    getch();
}