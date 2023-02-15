/*
 * Time Complexity O(n^2)
 * https://www.geeksforgeeks.org/bubble-sort/
 */

#include <stdio.h>

void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

void print_arr(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main()
{
    printf("Enter the Size of the array : ");
    int n;
    scanf("%d", &n);
    int arr[n];

    // Reading Array
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Bubble Sort
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(&arr[j], &arr[j + 1]);
            }
            print_arr(arr, n);
        }
    }

    // Print Array
    printf("Sorted Array: ");
    print_arr(arr, n);
}