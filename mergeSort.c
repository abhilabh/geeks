#include<stdio.h>

void print(int arr[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("a[%d]=%d",i,arr[i]);
        printf("\n");
    }
}

int main()
{
    int arr[10]={52,21,41,5,28,78,6,89,52,22};
    print(arr,10);
}
