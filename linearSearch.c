// linear search

#include <stdio.h>

void search(int*, int, int);

int main(){
    int arr[] = {2,5,7,13,45,67,89};
    int *hp = &arr[0];
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 89;
    search(hp, n, target);
}

void search(int *base, int size, int target) {
    int i = 0;
    int found = 0;
    while(i < size) {
    if (*(base + i) == target) {
        printf("The index is: %d", i);
        found = 1;
        break;
    }
    else i++;
    }
    if (found == 0){
        printf("Element not found in array");
    }
}
