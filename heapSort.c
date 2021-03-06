#include<stdio.h>
//#define size 9
int size=9;

void print_arr(int arr[],int size)
{
    int i;
    for(i=0;i<size;i++)
    {
        printf("arr[%d]=%d ",i,arr[i]);
       printf("\n");
    }
         printf("\n");
}
void maxHeapify(int arr[],int n)
{
    int l,r,large;
  //  if(n<=1)
   //     return;
    l=2*n+1;
    r=2*n+2;
    if(l<size && arr[n]<arr[l])
        large=l;
    else
        large=n;
    if(r<size && arr[large]<arr[r])
        large=r;
    if(large!=n)
    {
        int temp;
        temp=arr[n];
        arr[n]=arr[large];
        arr[large]=temp;

         maxHeapify(arr,large);
    }

}
void buildHeap(int arr[],int size)
{
    int i;
     for(i=7/2;i>=0;i--)
    {
        maxHeapify(arr,i);

    }
}
void heapSort(int arr[],int n)
{
    int i;
      buildHeap(arr,9);
    for(i=n-1;i>0;i--)
    {
        int temp;
        temp=arr[0];
        arr[0]=arr[i];
        arr[i]=temp;
        size--;
              print_arr(arr,9);
        maxHeapify(arr,0);
    }
}
int main()
{
    int arr[9]={24,26,5,74,4,14,44,18,29},i;

    print_arr(arr,9);
  //  buildHeap(arr,9);
    heapSort(arr,9);
    print_arr(arr,9);

}
