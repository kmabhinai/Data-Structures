/*
 *Time Complexity - O(N^2)
 * https://www.geeksforgeeks.org/selection-sort/
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

    // Selection Sort
    int j, min_index;
    for (int i = 0; i < n - 1; i++)
    {
        min_index = i;
        for (j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min_index])
            {
                min_index = j;
            }
        }
        print_arr(arr, n);
        if (min_index != i)
        {
            swap(&arr[min_index], &arr[i]);
        }
    }

    // Print Array
    printf("Sorted Array : ");
    print_arr(arr, n);
}