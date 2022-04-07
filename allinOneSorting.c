#define MAX 15
#include <stdio.h>
void readData(int[], int);
void display(int[], int);
void selectionSort(int[], int);
void insertionSort(int[], int);
void bubbleSort(int[], int);

int main()
{

	int a[MAX], n, ch;
	printf("enter the no of elements:");
	scanf("%d", &n);
	readData(a, n);
	printf("\nlist of elements before sorting:");
	display(a, n);
	printf("enter your choice\n1.selection sorting\n2.insertion sorting\n3.bubble sorting\n");
	scanf("%d", &ch);
	switch(ch){
		case 1:
			selectionSort(a,n);
			break;
		case 2:
			insertionSort(a,n);
			break;
		case 3:
			bubbleSort(a,n);
			break;
		default:
			printf("\nentered wrong value:");	
			break;
	}
	selectionSort(a,n);
	insertionSort(a,n);
	bubbleSort(a,n);
	printf("\nlist of elements after sorting:");
	display(a, n);
	return 0;
}
void readData(int a[], int n)
{
	scanf("enter the elements:");
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
}

void display(int a[], int n)
{    printf("\n");
	for (int i = 0; i < n; i++)
	{
		printf("%d\t", a[i]);
		
	}
	printf("\n");
}

void selectionSort(int a[], int n)
{
	int min, temp;
	for (int i = 0; i < n; i++)
	{
		min = i;
		for (int j = i + 1; j < n; j++)
		{
			if (a[j] < a[min])
			{
				min = j;
			}
		}
		temp = a[i];
		a[i] = a[min];
		a[min] = temp;
	}
}

void insertionSort(int a[], int n){
	int i,temp,j;
	for(i=1;i<n;i++){
	        temp= a[i];
		for( j=i-1;j>=0;j--){
			if(a[i]>temp){
				a[j+1]= a[j];
			}
			   else
			   {
				   break;
			   }
			   
		} a[j+1]=temp;
	}

}

void bubbleSort(int a[], int n){
	int temp,min;
	for(int i=0;i<n;i++){
		min=i;
		for(int j=i+1;j<n;j++){
			if(a[j]>a[j+1]){
				temp = a[j];
		     		a[j] = a[min];
				a[min] = temp;
			}
		}
	}
}