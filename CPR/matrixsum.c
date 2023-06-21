#include<stdio.h>
void main()
{
    int i,j,n,m,n1,m1,a[10][10],b[10][10],c[10][10];
    printf("Enter the size of A matrix:");
    scanf("%d %d",&n,&m);
    printf("Element of matrix A:");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter the size B matrix:");
    scanf("%d %d",&n1,&m1);
    printf("Element of B matrix:");
    for(i=0;i<n1;i++)
    {
        for(j=0;j<m1;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            c[i][j]=a[i][j]+b[i][j];
        }
    }
    printf("Sum of matrix A and B:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("%d \t",c[i][j]);
        }
        printf("\n");
    }
}