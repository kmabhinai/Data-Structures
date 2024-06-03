#include <bits/stdc++.h>
#include <vector>
using namespace std;

int gcd(int a, int b)
{
    if (a > b)
        swap(a, b);
    if (a == 0)
        return b;
    return gcd(b % a, a);
}
int minOperations(vector<int> &nums, vector<int> &numsDivide)
{
    cout << "Df";
    int result = numsDivide[0];
    for (int i = 0; i < numsDivide.size(); i++)
    {
        result = gcd(result, numsDivide[i]);
        if (result == 1)
            break;
    }
    sort(nums.begin(), nums.end());
    int count = 0, flag = 1;
    for (auto i : nums)
    {
        if (result % i == 0)
        {
            flag = 0;
            break;
        }
        count++;
    }
    if (flag)
        return -1;
    return count;
}

int main()
{

    // Input size of vectors
    int n, m;
    cin >> n;

    // Input elements of vectors
    vector<int> nums(n);
    vector<int> numsDivide(m);

    for (int i = 0; i < n; i++)
        cin >> nums[i];
    cin >> m;
    for (int i = 0; i < m; i++)
        cin >> numsDivide[i];

    int result = minOperations(nums, numsDivide);

    cout << result << endl;

    return 0;
}
