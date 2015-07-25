#include<stdio.h>

void print_arr(int arr[],int size)
{
    int i;
    for(i=0;i<size;i++)
    {
        printf("arr[%d]=%d",i,arr[i]);
        printf("\n");
    }
}
int main()
{
    int arr[9]={24,26,5,74,4,14,44,18,29};

    print_arr(arr,9);
}
