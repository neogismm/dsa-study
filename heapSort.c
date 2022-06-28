#include<stdio.h>

void heapSort(int[] , int);
void heapify(int [], int , int);
void swap(int *, int *);

int main() {
    int arr[100], n;
    
    // take input and print array

    printf("enter size of array: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("\nenter element %d: ", i+1);
        scanf("%d", &arr[i]);
        printf("\n");
    }

    //print unsorted array

    printf("\nthe array is: \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    heapSort(arr, n);

    //print sorted array

    printf("\n\nsorted array is: \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}

void heapSort(int arr[], int n) {
    for (int i = n/2; i >= 0; i--)
    {
        heapify(arr, n, i);
        swap(&arr[0], &arr[i]);

    }
    for (int i = n - 1; i >= 0; i--) {
  
    swap(&arr[0], &arr[i]);
  
    heapify(arr, i, 0);
  
  }
    
}

void heapify(int arr[], int n, int root)
{
    int lc, rc;
    int max = root;
    lc = root * 2 + 1;
    rc = lc + 1;

    if (lc < n && arr[lc] > arr[max])
    {
        max = lc;
    }
    if (rc < n && arr[rc] > arr[max])
    {
        max = rc;
    }
    if (max != root)
    {
        swap(&arr[root], &arr[max]);
        heapify(arr, n, max);
    }
}

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}