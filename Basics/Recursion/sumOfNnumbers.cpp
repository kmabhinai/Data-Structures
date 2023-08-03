#include <bits/stdc++.h>
using namespace std;

int sumOfNNumbers(int n)
{
    if (n < 0)
        return 0;
    return n + sumOfNNumbers(n - 1);
}

int main()
{
    int n, sum;
    cout << "Enter the Number: ";
    cin >> n;
    sum = sumOfNNumbers(n);
    cout << sum;
    return 0;
}