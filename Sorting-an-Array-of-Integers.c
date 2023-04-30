//Write a program that uses the reorder( ) function to sort an array of integers.
#include <stdio.h>
#include <stdlib.h>

void reorder(int n, int arr[]);

int main() 
{
    int n, i;
    int* arr;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    arr = (int*)malloc(n * sizeof(int));

    printf("\nEnter the elements of the array:\n");
    for (i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }

    printf("\nOriginal array:\n");
    for (i = 0; i < n; i++) 
    {
        printf("%d\n", arr[i]);
    }

    reorder(n, arr);

    printf("\n\nSorted array:\n");
    for (i = 0; i < n; i++) {
        printf("%d\n", arr[i]);
    }

    return 0;
}

void reorder(int n, int arr[]) 
{
    int i, j, temp;

    for (i = 0; i < n - 1; i++) 
    {
        for (j = i + 1; j < n; j++) 
        {
            if (arr[i] > arr[j]) 
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}