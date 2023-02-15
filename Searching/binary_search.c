/*
 **Only works for the sorted array
 *Time Complexity - O(log n)
 */

#include <stdio.h>
int main()
{
    printf("Enter the Number of numbers: ");
    int n;
    scanf("%d", &n);

    int arr[n], low = 0, high = n, mid, i;

    printf("Enter the Numbers : \n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the number to be searched : ");
    int search_num, flag = 1;
    scanf("%d", &search_num);

    while ((high - low) >= 0)
    {
        mid = (low + high) / 2;
        if (arr[mid] == search_num)
        {
            printf("%d is at position %d", search_num, (mid + 1));
            flag = 0;
            break;
        }
        else if (search_num > arr[mid])
        {
            low = mid + 1;
        }
        else if (search_num < arr[mid])
        {
            high = mid - 1;
        }
    }
    if (flag)
    {
        printf("The Element is not found in the list!!!");
    }
}