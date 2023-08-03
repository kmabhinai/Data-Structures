#include <bits/stdc++.h>
using namespace std;

int pattern7()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
            cout << " ";
        for (int j = 0; j < 2 * n - ((2 * i) + 1); j++)
            cout << "*";
        for (int j = 0; j < i; j++)
            cout << " ";
        cout << "\n";
    }

    return 0;
}