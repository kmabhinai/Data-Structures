/*
 *
 **
 ***
 ****
 *****
 */
#include <bits/stdc++.h>
using namespace std;

void pattern1()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
