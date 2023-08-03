/*
    555555555
    544444445
    543333345
    543222345
    543212345
    543222345
    543333345
    544444445
    555555555
*/
#include <bits/stdc++.h>
using namespace std;

int pattern9()
{
    int n;
    cin >> n;
    for (int i = 0; i < 2 * n - 1; i++)
    {
        for (int j = 0; j < 2 * n - 1; j++)
        {
            int top = i, left = j, down = (2 * n - 2) - i, right = (2 * n - 2) - j;
            cout << n - (min(min(top, down), min(left, right)));
        }
        cout << endl;
    }
    return 0;
}