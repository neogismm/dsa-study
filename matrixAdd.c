#include<stdio.h>

int main() {
    // int arr1[][] = {
    //     {2,3,4,5},
    //     {6,7,8,9}
    // };
    // int arr2[][] = {
    //     {4,3,1,2},
    //     {7,5,1,9}
    // };

    int ans[100][100], arr1[100][100], arr2[100][100], rows, cols;
    
    printf("enter no of rows\n");
    scanf("%d", &rows);
    printf("enter no of cols\n");
    scanf("%d", &cols);

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("enter value of A[%d][%d]: ", i+1, j+1);
            scanf("%d", &arr1[i][j]);
        }
    }

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("enter value of B[%d][%d]: ", i+1, j+1);
            scanf("%d", &arr2[i][j]);
        }
    }

    //print both arrays
    printf("\nArray 1:\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("%d ", arr1[i][j]);
        }
        printf("\n");
    }

    printf("\nArray 2:\n");

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("%d ", arr2[i][j]);
        }
        printf("\n");
    }
    
    // add and print 
    printf("\nThe ans array:\n");
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            ans[i][j] = arr1[i][j] + arr2[i][j];
            printf("%d ", ans[i][j]);
        }
        printf("\n");
    }

}