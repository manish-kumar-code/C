#include<stdio.h>
void main()
{
    int i,size;
    int display(int arr[],int size);
    for(i=0;i<size;i++)
    {
        printf("arr[%d]= %d \n",i,arr[i]);
    }
}
int main()
{
    int arr[10]={0,11,22,33,44,55,66,77,88,99};
    display(arr,10);
}