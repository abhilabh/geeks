#include<stdio.h>

void printarr(int arr[],int size)
{
    int i;
    for(i=0;i<size;i++)
    {
        printf("arr[%d=%d",i,arr[i]);
        printf("\n");
    }
}
void insertionSort(int arr[],int size)
{
    int i,j;
    for(i=1;i<size;i++)
    {
        int temp=arr[i];
        j=i-1;
        while(j>=0 && arr[j]>temp)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=temp;

    }
}
int main()
{
    int arr[6]={10,5,14,6,7,2};
    printarr(arr,6);
    insertionSort(arr,6);
    printarr(arr,6);
}
