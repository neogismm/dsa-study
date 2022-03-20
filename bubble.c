// bubble sort

#include <stdio.h>

void bubble(int*, int);
void swap(int *, int *); 

int main() {
    int n, *h;
    printf("\nInsert number of array elements: \n");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        printf("\nInsert element %d: \n", i+1);
        scanf("%d", &arr[i]);
    }
    printf("\nThe array is: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    h = &arr[0];
    
    bubble(h, n);
    
    printf("\nThe sorted array is: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
}

void bubble(int *head, int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size - i; j++) {
            if (*(head + j) > *(head + j + 1)) {
                swap((head + j), (head + j + 1));
            }
        }
    }
}

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

