#include <stdio.h>
#include <stdlib.h>

void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

int partition(int A[], int p, int r)
{
    int x = A[r], i = p-1, j;
    for(j=p;j<r;j++)
        if(A[j]<=x) swap(&A[++i], &A[j]);
    swap(&A[++i], &A[r]);
    return i;
}

void quickSort(int A[], int p, int r)
{
    if(p<r)
    {
        int q = partition(A, p, r);
        quickSort(A, p, q-1);
        quickSort(A, q+1, r);
    }
}

int main()
{
  int n, arr[20000], result;

  scanf("%d", &n);

  for(int i=0; i<n; i++){
    scanf("%d", &arr[i]);
  }

  quickSort(arr, 0, n-1);
  int arr2[4];
  arr2[0]=arr[0]*arr[1]*arr[n-1];
  arr2[1]=arr[0]*arr[1];
  arr2[2]=arr[n-1]*arr[n-2];
  arr2[3]=arr[n-1]*arr[n-2]*arr[n-3];

  quickSort(arr2,0,3);

  printf("%d", arr2[3]);

  return 0;
}
