/*
 *The worst and average time complexity of Insertion Sort is O(n^2)
 *The Best time complexity of Insertion Sort is O(n)
 ** https://www.geeksforgeeks.org/insertion-sort/
 */

#include <stdio.h>

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

    // Insertion Sort
    int j, key;
    for (int i = 0; i < n; i++)
    {
        key = arr[i];
        j = i - 1;

        /* Move elements of arr[0..i-1], that are greater than key,
             to one position ahead of their current position */
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j -= 1;
        }
        print_arr(arr, n);
        arr[j + 1] = key;
    }

    // Print the Array
    printf("The sorted Array is :");
    print_arr(arr, n);
}