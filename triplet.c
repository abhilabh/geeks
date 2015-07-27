#include<stdio.h>
//#include<iostream.h>
int find3Numbers(int arr[], int n)
{
   int max = n-1;
   int min = 0;
   int i;
   int count=0;

   int *smaller = (int*)malloc(n*sizeof(int));
   smaller[0] = -1;
   for (i = 1; i < n; i++)
   {
       if (arr[i] <= arr[min])
       {
          min = i;
          smaller[i] = -1;
       }
       else
          smaller[i] = min;
   }

   int *greater =(int*)malloc(n*sizeof(int));
   greater[n-1] = -1;
   for (i = n-2; i >= 0; i--)
   {
       if (arr[i] >= arr[max])
       {
          max = i;
          greater[i] = -1;
       }
       else
          greater[i] = max;
   }

   for (i = 0; i < n; i++)
   {
       if (smaller[i] != -1 && greater[i] != -1)
       {
          count++;
          //return count;
       }
   }

   free(smaller);
   free(greater);

   return count;
}
int main()
{
    int arr[] = {8, 5, 1, 2, 3, 4, 6};
    int n = sizeof(arr)/sizeof(arr[0]);
    printf("%d",find3Numbers(arr, n));
    return 0;
}
