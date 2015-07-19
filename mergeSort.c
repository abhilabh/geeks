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
void merge(int arr[],int start,int mid,int end)
{
    int i,j,k;
    int n1=mid-start+1;
    int n2=end-mid;
    int L[n1],R[n2];
    for(i = 0; i < n1; i++)
        L[i] = arr[start + i];
    for(j = 0; j < n2; j++)
        R[j] = arr[mid + 1+ j];
        i=j=0;
        k=1;
    while(i<n1 && j< n2)
    {
         if (L[i] <= R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    /* Copy the remaining elements of L[], if there are any */
    while (i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }

    /* Copy the remaining elements of R[], if there are any */
    while (j < n2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }

}

void mergesort(int arr[],int start,int end)
{
    if(start < end)
    {

    int mid=start+(end-1)/2;

    mergesort(arr,start,mid);
    mergesort(arr,mid+1,end);
    merge(arr,start,mid,end);

    }
}
int main()
{
    int arr[10]={52,21,41,5,28,78,6,89,52,22};
    print(arr,10);
    mergesort(arr,0,9);
    //merge(arr,0,4,9);
    print(arr,10);
}
