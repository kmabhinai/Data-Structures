/*
    1
    12
    123
    1234
    12345
*/
#include <bits/stdc++.h>
using namespace std;

int pattern2()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << (j + 1);
        }
        cout << "\n";
    }

    return 0;
}