#include <iostream>
using namespace std;
void selectionSort(int nums[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int minIdx = i;
        for (int j = i; j < n; j++)
            if (nums[minIdx] > nums[j])
                minIdx = j;
        swap(nums[i], nums[minIdx]);
    }
    cout << "The Sorted Order is: ";
    for (int i = 0; i < n; i++)
    {
        cout << nums[i] << " ";
    }
}
int main()
{
    int n;
    cout << "Enter the number of numbers: ";
    cin >> n;
    int nums[n];
    for (int i = 0; i < n; i++)
        cin >> nums[i];
    selectionSort(nums, n);
    return 0;
}
