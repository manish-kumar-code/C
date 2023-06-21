#include<stdio.h>
void main()
{
    int marks,grade;
    printf("Enter marks-");
    scanf("%d",&marks);
    grade = marks % 10;
    switch(grade)
    {
        case 10:
        printf("Grade O");
        break;
        case 9:
        printf("Grade A+");
        break;
        case 8:
        printf("Grade A");
        break;
        case 7:
        printf("Grade B");
        break;
        case 6:
        printf("Grade C");
        break;
        default:
        printf("Fail");     
    } 
    return 0;
}