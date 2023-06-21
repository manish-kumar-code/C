#include<stdio.h>
void main()
{
    int i,j,k,sum=0,n,m,n1,m1,a[100][100],b[100][100],c[100][100];
    printf("Enter the size of matrix A:");
    scanf("%d %d",&n,&m);
    printf("Matrix A:");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter the size of matrix B:");
    scanf("%d %d",&n1,&m1);
    printf("Matrix B:");
    for(i=0;i<n1;i++)
    {
        for(j=0;j<m1;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m1;j++)
        {
            sum=0;
            for(k=0;k<m;k++)
            {
            sum=sum+a[i][j]*b[i][j];
            }
            c[i][j]=sum;
            }
    }
    printf("Product of matrix A and B:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m1;j++)
        {
            printf("%d \t",c[i][j]);
        }
        printf("\n");
    }
}