#include<stdio.h>
void main()
{
    int i,j,n,m,a[50][50];
    printf("Enter the size of matrix:");
    scanf("%d %d",&n,&m);
    printf("Enter the matrix:");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d ",&a[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("%d \t",a[i][j]);
        }
        printf("\n");
    }
}