#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void printarr(int arr[],int size)
{
    int i;
    printf("\n");
    for(i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
}
void swap(int arr[],int i,int j)
    {
    int temp;
    temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
}

int partition(int arr[],int lo,int hi)
    {
    int pIndex=hi-1;
    int pValue=arr[hi-1];
    int i;
    int sIndex=lo;
    for(i=lo;i<hi;i++)
        {
        if(arr[i]<pValue){
            swap(arr,i,sIndex);
            sIndex++;
        }

    }
    swap(arr,sIndex,hi-1);
    return sIndex;
}
void quicksort(int arr[],int start,int end)
    {
    if(start<end)
        {
        int p=partition(arr,start,end);
     //   quicksort(arr,start,p-1);
       // printarr(arr,end);
        quicksort(arr,p+1,end);
                printarr(arr,end);


    }
}
int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int num,i,arr[5000];
    scanf("%d",&num);
    for(i=0;i<num;i++)
        {
        scanf("%d",&arr[i]);
    }
   // printf("\n");
    quicksort(arr,0,num);
    for(i=0;i<num;i++)
        {
        printf("%d ",arr[i]);
    }
    return 0;
}
