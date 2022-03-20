// binary search

#include <stdio.h>

void search(int*, int, int);

int main(){
    int arr[] = {2, 5, 7, 13, 45, 67, 89};
    int *hp = &arr[0];
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 5;
    search(hp, n, target);
}

void search(int *head, int size, int target) {
    int start = 0;
    int end = size - 1;
    int found = 0;
    
    while(start <= end) {
        int mid = (start + end) / 2;
        
        if (*(head + mid) > target) {
            end = mid - 1;
        }
        else if (*(head + mid) < target) {
            start = mid + 1;
        }
        else {
            printf("Element found at: %d \n", mid);
            found = 1;
            break;
        }
    }
    if (found == 0) {
        printf("Not found in array");
    } 
}
