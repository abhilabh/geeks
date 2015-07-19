#include<stdio.h>

void printarr(int arr[],int size)
{
    int i;
    for(i=0;i<size;i++)
    {
        printf("arr[%d]=%d",i,arr[i]);
        printf("\n");
    }
}

void sSort(int arr[],int size)
{
    int i,j;
    for(i=0;i<size-1;i++)
    {
        for(j=i+1;j<size;j++)
        {
            if(arr[i]>=arr[j])
            {
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
}

int main()
{
    int arr[6]={10,25,2,4,18,5};
    printarr(arr,6);
    sSort(arr,6);
    printarr(arr,6);
}
