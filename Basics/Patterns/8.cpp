/*
1        1
12      21
123    321
1234  4321
1234554321
*/
#include <bits/stdc++.h>
using namespace std;

int pattern8()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
            cout << (j + 1);
        for (int j = 0; j <= n - (2 * i) + 2; j++)
            cout << " ";
        for (int j = i; j >= 0; j--)
            cout << (j + 1);
        cout << endl;
    }
    return 0;
}