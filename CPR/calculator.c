#include<stdio.h>
void main()
{
    char opr;
    float a,b,sum,diff,mul,div;
    printf("Enter the operator:");
    scanf("%c",&opr);
    printf("Enter the number a and b:");
    scanf("%f %f",&a,&b);
    switch(opr)
    {
        case '+':
        sum=a+b;
        printf("Sum is %f",sum);
        break;
        case '-':
        diff=a-b;
        printf("Difference is %f",diff);
        break;
        case '*':
        mul=a*b;
        printf("Multiple is %f",mul);
        break;
        case '/':
        div=a/b;
        printf("Division is %f",div);
        break;
        default:
        printf("Invalid Operator");
    }
    return 0;
}