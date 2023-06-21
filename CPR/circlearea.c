#include<stdio.h>
void main()
{
    float r,circle;
    float area(int);
    printf("Enter the radius:");
    scanf("%f",&r);
    circle=area(r);
    printf("Area of circle:%f",circle);
}
float area(int r)
{
    float x;
    x=3.14*r*r;
    return x;
}