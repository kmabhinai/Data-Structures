#include <bits/stdc++.h>
using namespace std;
bool binarySearch(vector<int> nums, int find)
{
    sort(nums.begin(), nums.end());
    int high = nums.size(), low = 0, mid = (high - low) / 2;
    while (high - low >= 0)
    {
        mid = (low + high) / 2;
        if (nums[mid] == find)
            return true;
        else if (nums[mid] > find)
            high = mid - 1;
        else if (nums[mid] < find)
            low = mid + 1;
    }
    return false;
}
int main()
{
    int n;
    cin >> n;
    vector<int> nums(n, 0);
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    cout << "Number to Find:- ";
    int find;
    cin >> find;
    cout << binary_search(nums.begin(), nums.end(), find) << endl;
    cout << binarySearch(nums, find) << endl;
    return 0;
}