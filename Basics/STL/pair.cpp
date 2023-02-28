#include <bits/stdc++.h>
using namespace std;

int main()
{
    pair<int, int> p = {1, 2};
    cout << p.first << " " << p.second << endl;
    pair<int, pair<float, char>> p1 = {5, {2.0, 'a'}};
    cout << p1.first << " " << p1.second.first << " " << p1.second.second << endl;
    pair<int, int> arr[4] = {{1, 2}, {3, 4}, {5, 6}, {7, 8}};
    for (int i = 0; i < 4; i++)
    {
        cout << arr[i].first << " " << arr[i].second << endl;
    }
    return 0;
}