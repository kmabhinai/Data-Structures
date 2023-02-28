#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<int> v;
    v.push_back(1);
    v.emplace_back(2); // emplace_back is comparatively faster than push_back cuz push_back creates new vector everytime

    vector<pair<int, int>> vec;
    vec.push_back({1, 2});
    vec.emplace_back(1, 2);

    return 0;
}