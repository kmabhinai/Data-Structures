/*
 *****
 ****
 ***
 **
 *
 */
#include <bits/stdc++.h>
using namespace std;

int pattern4()
{
    int n;
    cin >> n;
    for (int i = n; i > 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            cout << "*";
        }
        cout << "\n";
    }

    return 0;
}