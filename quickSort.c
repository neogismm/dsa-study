#include <stdio.h>
#define max 20

void input(int arr[max], int n) {
	for (int i=0; i<n; i++) {
		scanf("%d", &arr[i]);
	}
}

void display(int arr[max], int n) {
	for (int i=0; i<n; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
}

void swap(int *a, int *b) {
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

int partition(int arr[max], int p, int r) {
	int x = arr[r];
	int i = p-1;

	for (int j=p; j<r; j++) {
		if (x > arr[j]) {
			i++;
			swap(&arr[i], &arr[j]);
		}
	}
	swap(&arr[i+1], &arr[r]);
	return i+1;
}

void quickSort(int arr[max], int p, int r) {
	if (p < r) {
	int q = partition(arr, p, r);
	quickSort(arr, p, q-1);
	quickSort(arr, q+1, r);
	}
}

int main() {
	int arr[max],n;

	printf("Enter no. of elements: ");
	scanf("%d", &n);

	printf("Enter the elements:\n");
	input(arr,n);

	printf("Before sorting:\n");
	display(arr,n);

	quickSort(arr, 0, n-1);

	printf("After sorting:\n");
	display(arr,n);
}
