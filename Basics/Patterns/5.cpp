/*
    12345
    1234
    123
    12
    1
 */
#include <bits/stdc++.h>
using namespace std;

int pattern5()
{
    int n;
    cin >> n;
    for (int i = n; i > 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            cout << (j + 1);
        }
        cout << "\n";
    }

    return 0;
}