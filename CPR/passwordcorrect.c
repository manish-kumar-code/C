#include<stdio.h>
void main()
{
    int n,x=1234;
    printf("Enter the password:");
    scanf("%d",&n);
    while(n!=x)
    {
    printf("Incorrect Password \n Enter correct passsword:");
    scanf("%d",&n);
    } 
    printf("Correct Passsword");
}